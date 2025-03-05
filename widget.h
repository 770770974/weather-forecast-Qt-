#ifndef WIDGET_H
#define WIDGET_H
#include "day.h"
#include <QLabel>
#include <QMenu>
#include <QMouseEvent>
#include <QNetworkReply>
#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui {
class Widget;
}
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    //存储六天的数据
    Day days[6];

    //数组中存放着需要更新的label
    QList<QLabel *> weekLabel;
    QList<QLabel *> dateLabel;
    QList<QLabel *> iconLabel;
    QList<QLabel *> typeLabel;
    QList<QLabel *> airLabel;
    QList<QLabel *> winLabel;
    QList<QLabel *> winspeedLabel;

    Widget(QWidget *parent = nullptr);
    ~Widget();

protected:
    void mousePressEvent(QMouseEvent* event) override;
    void mouseMoveEvent(QMouseEvent*event) override;
    //重写事件过滤器
    bool eventFilter(QObject *obj, QEvent *ev) override;

    //绘制高低温曲线的函数
    void paintHight();
    void paintLow();

    //收到finished信号后触发一个带参槽函数
public slots:
    void getReply(QNetworkReply* reply);
    //搜索城市按钮
private slots:
    void on_pushButton_search_clicked();

private:
    Ui::Widget *ui;
    QMenu* menuclose;
    QPoint offset;
    QNetworkAccessManager* manager;
    //存放天气所对应的图标
    QMap<QString,QString> typemap;
    //将从网址上读取出的数据写到界面上
    void writeToUi();
    //将json字符串读取到days数组上
    void writeToDaysArray(QByteArray rawarry);
};
#endif // WIDGET_H
