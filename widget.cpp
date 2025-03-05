#include "widget.h"
#include "ui_widget.h"

#include <QDebug>
#include <QFile>

#include <QJsonArray>
#include <QJsonDocument>
#include <QJsonObject>

#include <QMessageBox>
#include <QNetworkAccessManager>
#include <QPainter>

#define SKEMNUM 1.5 //每摄氏度差值进行的偏移量


Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    setLayout(ui->verticalLayout_all);
    setFixedSize(width(),height());
    setWindowFlag(Qt::FramelessWindowHint);//将窗口设置成无边框的

    //无边框后无法退出，所以引申到用鼠标右键事件;窗口无法移动所以用到mousemoveevent事件进行移动。
    menuclose = new QMenu(this);
    QAction* closeaction = new QAction(QIcon(":/res/quit.png"),tr("退出"),this);
    menuclose->addAction(closeaction);
    connect(menuclose,&QMenu::triggered,this,[=](){
        this->close();
    });

    //由Qnetworkaccessmanager发出get请求
    manager = new QNetworkAccessManager(this);
    //QUrl url("http://gfeljm.tianqiapi.com/dghdhgfh"); //错误的网址
    QUrl url("http://gfeljm.tianqiapi.com/api?unescape=1&version=v9&appid=28137261&appsecret=QzC4zFjC");
    QNetworkRequest request(url);
    manager->get(request);
    //连接信号与槽函数(接收完成后进程信号与槽的连接)
    //该信号连接时候会带个参数aplay，其中存着所有网址信息，通过槽函数进行readall读取
    connect(manager,&QNetworkAccessManager::finished,this,&Widget::getReply);

    //向label数组中添加label（方便所有label控件进行赋值操作）
    weekLabel<<ui->label_day1<<ui->label_day2<<ui->label_day3
              <<ui->label_day4<<ui->label_day5<<ui->label_day6;
    dateLabel<<ui->label_date1<<ui->label_date2<<ui->label_date3
              <<ui->label_date4<<ui->label_date5<<ui->label_date6;
    iconLabel<<ui->label_cloudyIcon1<<ui->label_cloudyIcon2<<ui->label_cloudyIcon3
              <<ui->label_cloudyIcon4<<ui->label_cloudyIcon5<<ui->label_cloudyIcon6;
    typeLabel<<ui->label_cloudy1<<ui->label_cloudy2<<ui->label_cloudy3
              <<ui->label_cloudy4<<ui->label_cloudy5<<ui->label_cloudy6;
    airLabel<<ui->label_you1<<ui->label_you2<<ui->label_you3
             <<ui->label_you4<<ui->label_you5<<ui->label_you6;
    winLabel<<ui->label_fx1<<ui->label_fx2<<ui->label_fx3
             <<ui->label_fx4<<ui->label_fx5<<ui->label_fx6;
    winspeedLabel<<ui->label_fl1<<ui->label_fl2<<ui->label_fl3
                  <<ui->label_fl4<<ui->label_fl5<<ui->label_fl6;


    //向map容器中加入天气对应的图标
    typemap.insert("暴雪",":/res/baoxue.png");
    typemap.insert("暴雨到大暴雨",":/res/baoyudaodabaoyu.png");
    typemap.insert("多云",":/res/cloudy.png");
    typemap.insert("大暴雨",":/res/dabaoyu.png");
    typemap.insert("大到暴雪",":/res/dadaobaoxue.png");
    typemap.insert("大雨",":/res/dayu.png");
    typemap.insert("冻雨",":/res/dongyu.png");
    typemap.insert("浮尘",":/res/fuchen.png");
    typemap.insert("雷阵雨",":/res/leizhenyu.png");
    typemap.insert("雷阵雨伴有冰雹",":/res/leizhenyubanyoubingbao.png");
    typemap.insert("霾",":/res/mai.png");
    typemap.insert("强沙尘暴",":/res/qiangshachenbao.png");
    typemap.insert("晴",":/res/qing.png");
    typemap.insert("沙尘暴",":/res/shachenbao.png");
    typemap.insert("晴转多云",":/res/sun.png");
    typemap.insert("特大暴雨",":/res/tedabaoyu.png");
    typemap.insert("雾",":/res/wu.png");
    typemap.insert("小到中雪",":/res/xiaodaozhongxue.png");
    typemap.insert("小到中雨",":/res/xiaodaozhongyu.png");
    typemap.insert("小雪",":/res/xiaoxue.png");
    typemap.insert("小雨",":/res/xiaoyu.png");
    typemap.insert("雪",":/res/xue.png");
    typemap.insert("扬沙",":/res/yangsha.png");
    typemap.insert("阴",":/res/yin.png");
    typemap.insert("雨",":/res/yu.png");
    typemap.insert("雨夹雪",":/res/yujiaxue.png");
    typemap.insert("阵雪",":/res/zhenxue.png");
    typemap.insert("阵雨",":/res/zhenyu.png");
    typemap.insert("中到大雪",":/res/zhongdaodaxue.png");
    typemap.insert("中到大雨",":/res/zhongdaodayu.png");
    typemap.insert("中雪",":/res/zhongxue.png");
    typemap.insert("中雨",":/res/zhongyu.png");

    //给温度绘制控件添加事件过滤器
    ui->widget_4_4->installEventFilter(this);
    ui->widget_4_5->installEventFilter(this);

}

Widget::~Widget()
{
    delete ui;
}


void Widget::mousePressEvent(QMouseEvent *event)
{
    if(event->button() == Qt::RightButton){
        //qDebug()<<"rightmouse is pressed!";
        menuclose->exec(QCursor::pos());//指定显示菜单的位置
    }if(event->button() == Qt::LeftButton){
        //qDebug()<<"leftmouse is pressed!";
        offset = event->globalPosition().toPoint() - this->pos();
    }
}

//重写移动窗口的事件
void Widget::mouseMoveEvent(QMouseEvent *event)
{
    this->move(event->globalPosition().toPoint() - offset);
}

bool Widget::eventFilter(QObject *obj, QEvent *ev)
{
    if(obj == ui->widget_4_4 && ev->type() == QEvent::Paint){
        paintHight();
    }else if(obj == ui->widget_4_5 && ev->type() == QEvent::Paint){
        paintLow();
    }else{
        return QWidget::eventFilter(obj,ev);
    }
}

void Widget::paintHight()
{
    QPainter painter(ui->widget_4_4);
    //抗锯齿
    painter.setRenderHint(QPainter::Antialiasing,true);

    //求X坐标
    int pointX[6] = {0};
    for(int i = 0; i < 6; i++){
        pointX[i] = dateLabel[i]->pos().x() + dateLabel[i]->width()/2;
    }
    //求Y坐标(把最中间的坐标设置为平均温度)
    int pointY[6] = {0};
    int sumTempture = 0;
    int aveTempture;
    for(int i = 0;i < 6; i++){
        sumTempture += days[i].mTempHight.toInt();
    }
    aveTempture = sumTempture / 6;
    int avePoint = ui->widget_4_4->height()/2;
    for(int i = 0; i < 6; i++){
        pointY[i] = avePoint + (aveTempture - days[i].mTempHight.toInt()) * SKEMNUM;
    }

    //设置画笔
    QPen pen(QColor(234,5,23));
    painter.setPen(pen);
    painter.setBrush(QColor(234,53,233));
    //画点和画字
    for(int i = 0; i < 6; i++){
        painter.drawEllipse(QPoint(pointX[i],pointY[i]),2,2);
        if(pointY[i] < avePoint){
            painter.drawText(QPoint(pointX[i]-7,pointY[i]+15),days[i].mTempHight);
        }else{
            painter.drawText(QPoint(pointX[i]-7,pointY[i]-6),days[i].mTempHight);
        }

    }
    //画线
    for(int i = 0; i < 5; i++){
        painter.drawLine(pointX[i],pointY[i],pointX[i + 1],pointY[i + 1]);
    }

}

void Widget::paintLow()
{
    QPainter painter(ui->widget_4_5);
    //抗锯齿
    painter.setRenderHint(QPainter::Antialiasing,true);

    //求X坐标
    int pointX[6] = {0};
    for(int i = 0; i < 6; i++){
        pointX[i] = dateLabel[i]->pos().x() + dateLabel[i]->width()/2;
    }
    //求Y坐标(把最中间的坐标设置为平均温度)
    int pointY[6] = {0};
    int sumTempture = 0;
    int aveTempture;
    for(int i = 0;i < 6; i++){
        sumTempture += days[i].mTempLow.toInt();
    }
    aveTempture = sumTempture / 6;
    int avePoint = ui->widget_4_5->height()/2;
    for(int i = 0; i < 6; i++){
        pointY[i] = avePoint + (aveTempture - days[i].mTempLow.toInt()) * SKEMNUM;
    }

    //设置画笔
    QPen pen(QColor(63, 144, 157));
    painter.setPen(pen);
    painter.setBrush(QColor(63, 144, 157));
    //画点和画字
    for(int i = 0; i < 6; i++){
        painter.drawEllipse(QPoint(pointX[i],pointY[i]),2,2);
        if(pointY[i] < avePoint){
            painter.drawText(QPoint(pointX[i]-7,pointY[i]+15),days[i].mTempLow);
        }else{
            painter.drawText(QPoint(pointX[i]-7,pointY[i]-6),days[i].mTempLow);
        }

    }
    //画线
    for(int i = 0; i < 5; i++){
        painter.drawLine(pointX[i],pointY[i],pointX[i + 1],pointY[i + 1]);
    }
}


void Widget::getReply(QNetworkReply* reply)
{
    //判断是否打开成功
    if(reply->error() == QNetworkReply::NoError){
        QByteArray data = reply->readAll();
        //下面函数进行数组中的数据的更新
        writeToDaysArray(data);
        //qDebug()<< QString::fromUtf8(data);

    }else{
        //QMessageBox::warning(this,"错误","打开失败",QMessageBox::Ok); //父类是this，背景是黑色。
        QMessageBox messagebox;
        messagebox.setText("网络请求失败");
        messagebox.setWindowTitle("错误");
        messagebox.setDefaultButton(QMessageBox::Ok);
        messagebox.exec();
    }
}


void Widget::writeToDaysArray(QByteArray rawarry)
{
    //toJson() 和 fromJson() 是 Qt 中处理 JSON 数据的重要工具，
    //它们分别用于将 JSON 数据转换为字符串形式和从字符串形式的 JSON 数据中解析出 JSON 对象。
    QJsonDocument jsondoc = QJsonDocument::fromJson(rawarry);
    QJsonObject jsonobj = jsondoc.object();
    days[0].mCity = jsonobj["city"].toString();
    days[0].mPm25 = jsonobj["aqi"].toObject()["pm25"].toString();
    if(jsonobj.contains("data") && jsonobj["data"].isArray()){
        QJsonArray jsonarray =jsonobj["data"].toArray();
        for(int i = 0 ;i < jsonarray.size() - 1;i++){
            QJsonObject obj = jsonarray[i].toObject();
            days[i].mDate = obj["date"].toString();
            days[i].mWeek = obj["week"].toString();
            days[i].mWeathType = obj["wea"].toString();
            days[i].mTemp = obj["tem"].toString();
            days[i].mTempHight = obj["tem1"].toString();
            days[i].mTempLow = obj["tem2"].toString(),
            days[i].mshidu = obj["humidity"].toString();
            days[i].mFx = obj["win"].toArray()[0].toString();
            days[i].mFl = obj["win_speed"].toString();
            days[i].mTips = obj["air_tips"].toString();
            days[i].mAirq = obj["air_level"].toString();
            //qDebug()<<days[i].mWeathType;
        }

    }
    //通过days数组中刚写入的数据，进行对ui界面的更新
    writeToUi();
}

//向ui中写入数据
void Widget::writeToUi()
{
    //设置日期
    QString strDate = days[0].mDate;
    QString strWeek = days[0].mWeek;
    ui->label_currenttime->setText(strDate +" "+ strWeek);
    //设置城市
    ui->label_city->setText(days[0].mCity + "市");
    //设置温度和
    QString strTem = days[0].mTemp;
    QString strTem1 = days[0].mTempLow;
    QString strTem2 = days[0].mTempHight;
    QString strTemType = days[0].mWeathType;
    //qDebug()<<strTemType;
    ui->label_temp->setText(strTem + "℃");
    ui->label_temptype->setText(strTemType);
    ui->label_temprange->setText(strTem1 + "~" + strTem2);
    //设置天气图标
    ui->label_sun->setPixmap(typemap[strTemType]);
    //设置感冒指数
    ui->label_ganmao->setText(days[0].mTips);
    //设置风
    ui->label_wind_word->setText(days[0].mFx);
    ui->label_wind_sum->setText(days[0].mFl);
    //设置湿度
    ui->label_shidu_sum->setText(days[0].mshidu);
    //设置PM2.5
    ui->label_PM_sum->setText(days[0].mPm25);
    //设置空气质量
    ui->label_air_sum->setText(days[0].mAirq);

    for(int i = 0; i < 6; i++){
        //设置第一行周
        weekLabel[i]->setText(days[i].mWeek);
        weekLabel[0]->setText("今天");
        weekLabel[1]->setText("明天");
        weekLabel[2]->setText("后天");
        //设置第二行日期
        QStringList dateLise = days[i].mDate.split("-");
        dateLabel[i]->setText(dateLise.at(1) + "-" + dateLise.at(2));
        //设置第三和第四行
        int index = days[i].mWeathType.indexOf("转");
        int size = days[i].mWeathType.size();
        if(index != -1){
            typeLabel[i]->setText(days[i].mWeathType.right(size - index - 1));
            iconLabel[i]->setPixmap(typemap[days[i].mWeathType.right(size - index - 1)]);
        }else{
            typeLabel[i]->setText(days[i].mWeathType);
            iconLabel[i]->setPixmap(typemap[days[i].mWeathType]);
        }
        //设置第五行空气质量
        if(days[i].mAirq == "优"){
            airLabel[i]->setStyleSheet("background-color: rgb(131, 222, 92);border-radius: 5px");
        }else if(days[i].mAirq == "良"){
            airLabel[i]->setStyleSheet("background-color: rgb(231, 179, 46);border-radius: 5px");
        }else if(days[i].mAirq == "轻度污染"){
            airLabel[i]->setStyleSheet("background-color: rgb(74, 40, 154);border-radius: 5px");
        }else if(days[i].mAirq =="中度污染"){
            airLabel[i]->setStyleSheet("background-color: rgb(154, 57, 125);border-radius: 5px");
        }else if(days[i].mAirq =="重度污染"){
            airLabel[i]->setStyleSheet("background-color: rgb(255, 1, 1);border-radius: 5px");
        }
        airLabel[i]->setText(days[i].mAirq);
        //设置第六行风向
        if(days[i].mFx == "无持续风向"){
            winLabel[i]->setText("无风");
        }else{
            winLabel[i]->setText(days[i].mFx);
        }
        //设置风力
        int indexwinspeed = days[i].mFl.indexOf("转");
        int sizewinspeed = days[i].mFl.size();
        //qDebug()<<indexwinspeed<<sizewinspeed;
        if(indexwinspeed != -1){
            winspeedLabel[i]->setText(days[i].mFl.right(sizewinspeed - indexwinspeed - 1));
        }else{
            winspeedLabel[i]->setText(days[i].mFl);
        }
    }
    //更新页面中的温度曲线——update激活painter事件
    ui->widget_4_4->update();
    ui->widget_4_5->update();
}



QString getcitycodefromname(QString name){
    //进行读取文件，读出来字节组。
    QFile file(":/file/2019-03-13-cn_weather_citylist.json");
    file.open(QIODeviceBase::ReadOnly);
    QByteArray bytearray = file.readAll();
    file.close();

    //从字符串形式的 JSON 数据中解析出 JSON 对象。将看看文件中是否有name对应的citycode，如果有则返回，没有则返回空
    QJsonDocument doc = QJsonDocument::fromJson(bytearray);
    if(doc.isArray()){
        QJsonArray jsonarry = doc.array();
        for(QJsonValue value : jsonarry){
            if(value.isObject()){
                if(value["cityName"].toString() == name){
                    return value["cityCode"].toString();
                }
            }
        }
    }
    return "";
}


//搜索按钮图标的实现
void Widget::on_pushButton_search_clicked()
{
    //先获得ui中的文字
    QString cityName = ui->lineEdit_search->text();
    //进行解析文件中的文字，换成citycode
    QString cityCode = getcitycodefromname(cityName);
    //再重新进行网络请求另一个city的天气,如果请求失败会有提示
    if(cityCode != nullptr){
        QString httpaddcityid = "http://gfeljm.tianqiapi.com/api?unescape=1&version=v9&appid=28137261&appsecret=QzC4zFjC&cityid=" + cityCode;
        QUrl url(httpaddcityid);
        //将拼接好点字符串进行重新请求数据
        manager->get(QNetworkRequest(url));
    }else{
        QMessageBox messagebox;
        messagebox.setText("请输入正确的地区");
        messagebox.setWindowTitle("错误");
        messagebox.setDefaultButton(QMessageBox::Ok);
        messagebox.exec();
    }
}

