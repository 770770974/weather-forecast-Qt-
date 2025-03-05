/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_all;
    QWidget *widget_1;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *lineEdit_search;
    QPushButton *pushButton_search;
    QLabel *label_currenttime;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label_sun;
    QGridLayout *gridLayout_2;
    QLabel *label_temprange;
    QLabel *label_city;
    QLabel *label_temptype;
    QLabel *label_temp;
    QSpacerItem *horizontalSpacer;
    QWidget *widget_3;
    QVBoxLayout *verticalLayout;
    QLabel *label_ganmao;
    QWidget *widget_3_1;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_wind;
    QLabel *label_wind_picture;
    QVBoxLayout *verticalLayout_wind_right;
    QLabel *label_wind_word;
    QLabel *label_wind_sum;
    QHBoxLayout *horizontalLayout_PM25;
    QLabel *label_PM_picture;
    QVBoxLayout *verticalLayout_PM_right;
    QLabel *label_wind_word_3;
    QLabel *label_PM_sum;
    QHBoxLayout *horizontalLayout_shidu;
    QLabel *label_shidu_picture;
    QVBoxLayout *verticalLayout_shidu_right;
    QLabel *label_shidu_word;
    QLabel *label_shidu_sum;
    QHBoxLayout *horizontalLayout_air;
    QLabel *label_air_picture;
    QVBoxLayout *verticalLayout_air_right;
    QLabel *label_air_word;
    QLabel *label_air_sum;
    QWidget *widget_4;
    QVBoxLayout *verticalLayout_2;
    QWidget *widget_4_1;
    QGridLayout *gridLayout_3;
    QLabel *label_day2;
    QLabel *label_day3;
    QLabel *label_day4;
    QLabel *label_day5;
    QLabel *label_day6;
    QLabel *label_date2;
    QLabel *label_date3;
    QLabel *label_date4;
    QLabel *label_date5;
    QLabel *label_date6;
    QLabel *label_date1;
    QLabel *label_day1;
    QWidget *widget_4_2;
    QGridLayout *gridLayout_4;
    QLabel *label_cloudyIcon1;
    QLabel *label_cloudyIcon2;
    QLabel *label_cloudyIcon3;
    QLabel *label_cloudyIcon4;
    QLabel *label_cloudyIcon5;
    QLabel *label_cloudyIcon6;
    QLabel *label_cloudy1;
    QLabel *label_cloudy2;
    QLabel *label_cloudy3;
    QLabel *label_cloudy4;
    QLabel *label_cloudy5;
    QLabel *label_cloudy6;
    QWidget *widget_4_3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_you1;
    QLabel *label_you2;
    QLabel *label_you3;
    QLabel *label_you4;
    QLabel *label_you5;
    QLabel *label_you6;
    QWidget *widget_4_4;
    QWidget *widget_4_5;
    QWidget *widget_4_6;
    QGridLayout *gridLayout_5;
    QLabel *label_fx1;
    QLabel *label_fx2;
    QLabel *label_fx4;
    QLabel *label_fx6;
    QLabel *label_fl1;
    QLabel *label_fl2;
    QLabel *label_fl4;
    QLabel *label_fl6;
    QLabel *label_fx5;
    QLabel *label_fl5;
    QLabel *label_fx3;
    QLabel *label_fl3;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(311, 554);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Widget->sizePolicy().hasHeightForWidth());
        Widget->setSizePolicy(sizePolicy);
        Widget->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"color:rgb(255, 255, 255);"));
        layoutWidget = new QWidget(Widget);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(0, 0, 311, 551));
        verticalLayout_all = new QVBoxLayout(layoutWidget);
        verticalLayout_all->setSpacing(4);
        verticalLayout_all->setObjectName("verticalLayout_all");
        verticalLayout_all->setContentsMargins(0, 0, 0, 10);
        widget_1 = new QWidget(layoutWidget);
        widget_1->setObjectName("widget_1");
        horizontalLayout_2 = new QHBoxLayout(widget_1);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        lineEdit_search = new QLineEdit(widget_1);
        lineEdit_search->setObjectName("lineEdit_search");
        lineEdit_search->setStyleSheet(QString::fromUtf8("border-radius: 5px;\n"
"font: 9pt \"Microsoft YaHei UI\";\n"
"background-color: rgb(255, 255, 255);\n"
"color:rgb(255, 14, 106);\n"
""));

        horizontalLayout_2->addWidget(lineEdit_search);

        pushButton_search = new QPushButton(widget_1);
        pushButton_search->setObjectName("pushButton_search");
        pushButton_search->setMinimumSize(QSize(25, 25));
        pushButton_search->setMaximumSize(QSize(25, 25));
        pushButton_search->setStyleSheet(QString::fromUtf8("border-radius: 15px;"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/res/search.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_search->setIcon(icon);

        horizontalLayout_2->addWidget(pushButton_search);

        label_currenttime = new QLabel(widget_1);
        label_currenttime->setObjectName("label_currenttime");
        label_currenttime->setMinimumSize(QSize(100, 0));
        label_currenttime->setFocusPolicy(Qt::FocusPolicy::NoFocus);
        label_currenttime->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        horizontalLayout_2->addWidget(label_currenttime);

        horizontalLayout_2->setStretch(0, 2);
        horizontalLayout_2->setStretch(2, 3);

        verticalLayout_all->addWidget(widget_1);

        widget_2 = new QWidget(layoutWidget);
        widget_2->setObjectName("widget_2");
        horizontalLayout = new QHBoxLayout(widget_2);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(-1, 0, -1, 0);
        label_sun = new QLabel(widget_2);
        label_sun->setObjectName("label_sun");
        QSizePolicy sizePolicy1(QSizePolicy::Ignored, QSizePolicy::Ignored);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_sun->sizePolicy().hasHeightForWidth());
        label_sun->setSizePolicy(sizePolicy1);
        label_sun->setMaximumSize(QSize(50, 50));
        label_sun->setPixmap(QPixmap(QString::fromUtf8(":/res/sun.png")));
        label_sun->setScaledContents(true);

        horizontalLayout->addWidget(label_sun);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName("gridLayout_2");
        label_temprange = new QLabel(widget_2);
        label_temprange->setObjectName("label_temprange");

        gridLayout_2->addWidget(label_temprange, 1, 1, 1, 1);

        label_city = new QLabel(widget_2);
        label_city->setObjectName("label_city");

        gridLayout_2->addWidget(label_city, 0, 3, 1, 1);

        label_temptype = new QLabel(widget_2);
        label_temptype->setObjectName("label_temptype");

        gridLayout_2->addWidget(label_temptype, 1, 0, 1, 1);

        label_temp = new QLabel(widget_2);
        label_temp->setObjectName("label_temp");
        QFont font;
        font.setPointSize(23);
        label_temp->setFont(font);

        gridLayout_2->addWidget(label_temp, 0, 0, 1, 2);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 1, 2, 1, 1);


        horizontalLayout->addLayout(gridLayout_2);

        horizontalLayout->setStretch(0, 1);
        horizontalLayout->setStretch(1, 5);

        verticalLayout_all->addWidget(widget_2);

        widget_3 = new QWidget(layoutWidget);
        widget_3->setObjectName("widget_3");
        widget_3->setStyleSheet(QString::fromUtf8("border-radius: 15px;"));
        verticalLayout = new QVBoxLayout(widget_3);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(9, 0, 9, 0);
        label_ganmao = new QLabel(widget_3);
        label_ganmao->setObjectName("label_ganmao");

        verticalLayout->addWidget(label_ganmao);

        widget_3_1 = new QWidget(widget_3);
        widget_3_1->setObjectName("widget_3_1");
        widget_3_1->setStyleSheet(QString::fromUtf8("border-radius: 15px;\n"
"background-color: rgb(255, 136, 39);"));
        gridLayout = new QGridLayout(widget_3_1);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setHorizontalSpacing(44);
        gridLayout->setVerticalSpacing(4);
        gridLayout->setContentsMargins(20, 12, 45, 15);
        horizontalLayout_wind = new QHBoxLayout();
        horizontalLayout_wind->setSpacing(30);
        horizontalLayout_wind->setObjectName("horizontalLayout_wind");
        label_wind_picture = new QLabel(widget_3_1);
        label_wind_picture->setObjectName("label_wind_picture");
        sizePolicy1.setHeightForWidth(label_wind_picture->sizePolicy().hasHeightForWidth());
        label_wind_picture->setSizePolicy(sizePolicy1);
        label_wind_picture->setMinimumSize(QSize(30, 30));
        label_wind_picture->setPixmap(QPixmap(QString::fromUtf8(":/res/wind.png")));
        label_wind_picture->setScaledContents(true);

        horizontalLayout_wind->addWidget(label_wind_picture);

        verticalLayout_wind_right = new QVBoxLayout();
        verticalLayout_wind_right->setSpacing(0);
        verticalLayout_wind_right->setObjectName("verticalLayout_wind_right");
        label_wind_word = new QLabel(widget_3_1);
        label_wind_word->setObjectName("label_wind_word");
        label_wind_word->setMinimumSize(QSize(60, 0));

        verticalLayout_wind_right->addWidget(label_wind_word);

        label_wind_sum = new QLabel(widget_3_1);
        label_wind_sum->setObjectName("label_wind_sum");
        label_wind_sum->setMinimumSize(QSize(60, 0));

        verticalLayout_wind_right->addWidget(label_wind_sum);


        horizontalLayout_wind->addLayout(verticalLayout_wind_right);

        horizontalLayout_wind->setStretch(0, 1);
        horizontalLayout_wind->setStretch(1, 2);

        gridLayout->addLayout(horizontalLayout_wind, 0, 0, 1, 1);

        horizontalLayout_PM25 = new QHBoxLayout();
        horizontalLayout_PM25->setSpacing(30);
        horizontalLayout_PM25->setObjectName("horizontalLayout_PM25");
        horizontalLayout_PM25->setContentsMargins(-1, -1, 0, -1);
        label_PM_picture = new QLabel(widget_3_1);
        label_PM_picture->setObjectName("label_PM_picture");
        sizePolicy1.setHeightForWidth(label_PM_picture->sizePolicy().hasHeightForWidth());
        label_PM_picture->setSizePolicy(sizePolicy1);
        label_PM_picture->setMinimumSize(QSize(30, 30));
        label_PM_picture->setPixmap(QPixmap(QString::fromUtf8(":/res/pm2.5.png")));
        label_PM_picture->setScaledContents(true);

        horizontalLayout_PM25->addWidget(label_PM_picture);

        verticalLayout_PM_right = new QVBoxLayout();
        verticalLayout_PM_right->setSpacing(0);
        verticalLayout_PM_right->setObjectName("verticalLayout_PM_right");
        label_wind_word_3 = new QLabel(widget_3_1);
        label_wind_word_3->setObjectName("label_wind_word_3");
        label_wind_word_3->setMinimumSize(QSize(60, 0));

        verticalLayout_PM_right->addWidget(label_wind_word_3);

        label_PM_sum = new QLabel(widget_3_1);
        label_PM_sum->setObjectName("label_PM_sum");
        label_PM_sum->setMinimumSize(QSize(60, 0));

        verticalLayout_PM_right->addWidget(label_PM_sum);


        horizontalLayout_PM25->addLayout(verticalLayout_PM_right);

        horizontalLayout_PM25->setStretch(0, 1);
        horizontalLayout_PM25->setStretch(1, 2);

        gridLayout->addLayout(horizontalLayout_PM25, 0, 1, 1, 1);

        horizontalLayout_shidu = new QHBoxLayout();
        horizontalLayout_shidu->setSpacing(30);
        horizontalLayout_shidu->setObjectName("horizontalLayout_shidu");
        label_shidu_picture = new QLabel(widget_3_1);
        label_shidu_picture->setObjectName("label_shidu_picture");
        sizePolicy1.setHeightForWidth(label_shidu_picture->sizePolicy().hasHeightForWidth());
        label_shidu_picture->setSizePolicy(sizePolicy1);
        label_shidu_picture->setMinimumSize(QSize(30, 30));
        label_shidu_picture->setPixmap(QPixmap(QString::fromUtf8(":/res/shidu.png")));
        label_shidu_picture->setScaledContents(true);

        horizontalLayout_shidu->addWidget(label_shidu_picture);

        verticalLayout_shidu_right = new QVBoxLayout();
        verticalLayout_shidu_right->setSpacing(0);
        verticalLayout_shidu_right->setObjectName("verticalLayout_shidu_right");
        label_shidu_word = new QLabel(widget_3_1);
        label_shidu_word->setObjectName("label_shidu_word");
        label_shidu_word->setMinimumSize(QSize(60, 0));

        verticalLayout_shidu_right->addWidget(label_shidu_word);

        label_shidu_sum = new QLabel(widget_3_1);
        label_shidu_sum->setObjectName("label_shidu_sum");
        label_shidu_sum->setMinimumSize(QSize(60, 0));

        verticalLayout_shidu_right->addWidget(label_shidu_sum);


        horizontalLayout_shidu->addLayout(verticalLayout_shidu_right);

        horizontalLayout_shidu->setStretch(0, 1);
        horizontalLayout_shidu->setStretch(1, 2);

        gridLayout->addLayout(horizontalLayout_shidu, 1, 0, 1, 1);

        horizontalLayout_air = new QHBoxLayout();
        horizontalLayout_air->setSpacing(30);
        horizontalLayout_air->setObjectName("horizontalLayout_air");
        label_air_picture = new QLabel(widget_3_1);
        label_air_picture->setObjectName("label_air_picture");
        sizePolicy1.setHeightForWidth(label_air_picture->sizePolicy().hasHeightForWidth());
        label_air_picture->setSizePolicy(sizePolicy1);
        label_air_picture->setMinimumSize(QSize(30, 30));
        label_air_picture->setPixmap(QPixmap(QString::fromUtf8(":/res/ari (1).png")));
        label_air_picture->setScaledContents(true);

        horizontalLayout_air->addWidget(label_air_picture);

        verticalLayout_air_right = new QVBoxLayout();
        verticalLayout_air_right->setSpacing(0);
        verticalLayout_air_right->setObjectName("verticalLayout_air_right");
        label_air_word = new QLabel(widget_3_1);
        label_air_word->setObjectName("label_air_word");
        label_air_word->setMinimumSize(QSize(60, 0));

        verticalLayout_air_right->addWidget(label_air_word);

        label_air_sum = new QLabel(widget_3_1);
        label_air_sum->setObjectName("label_air_sum");
        sizePolicy.setHeightForWidth(label_air_sum->sizePolicy().hasHeightForWidth());
        label_air_sum->setSizePolicy(sizePolicy);
        label_air_sum->setMinimumSize(QSize(60, 0));

        verticalLayout_air_right->addWidget(label_air_sum);


        horizontalLayout_air->addLayout(verticalLayout_air_right);

        horizontalLayout_air->setStretch(0, 1);
        horizontalLayout_air->setStretch(1, 2);

        gridLayout->addLayout(horizontalLayout_air, 1, 1, 1, 1);


        verticalLayout->addWidget(widget_3_1);

        verticalLayout->setStretch(0, 1);
        verticalLayout->setStretch(1, 5);

        verticalLayout_all->addWidget(widget_3);

        widget_4 = new QWidget(layoutWidget);
        widget_4->setObjectName("widget_4");
        verticalLayout_2 = new QVBoxLayout(widget_4);
        verticalLayout_2->setSpacing(10);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(-1, 0, -1, 0);
        widget_4_1 = new QWidget(widget_4);
        widget_4_1->setObjectName("widget_4_1");
        gridLayout_3 = new QGridLayout(widget_4_1);
        gridLayout_3->setObjectName("gridLayout_3");
        gridLayout_3->setHorizontalSpacing(4);
        gridLayout_3->setVerticalSpacing(0);
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        label_day2 = new QLabel(widget_4_1);
        label_day2->setObjectName("label_day2");
        label_day2->setStyleSheet(QString::fromUtf8("background-color: rgb(63, 144, 157);\n"
"border-radius: 5px;\n"
"border-bottom-left-radius: 0px;\n"
"border-bottom-right-radius: 0px;"));
        label_day2->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_3->addWidget(label_day2, 0, 1, 2, 1);

        label_day3 = new QLabel(widget_4_1);
        label_day3->setObjectName("label_day3");
        label_day3->setStyleSheet(QString::fromUtf8("background-color: rgb(63, 144, 157);\n"
"border-radius: 5px;\n"
"border-bottom-left-radius: 0px;\n"
"border-bottom-right-radius: 0px;"));
        label_day3->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_3->addWidget(label_day3, 0, 2, 2, 1);

        label_day4 = new QLabel(widget_4_1);
        label_day4->setObjectName("label_day4");
        label_day4->setStyleSheet(QString::fromUtf8("background-color: rgb(63, 144, 157);\n"
"border-radius: 5px;\n"
"border-bottom-left-radius: 0px;\n"
"border-bottom-right-radius: 0px;"));
        label_day4->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_3->addWidget(label_day4, 0, 3, 2, 1);

        label_day5 = new QLabel(widget_4_1);
        label_day5->setObjectName("label_day5");
        label_day5->setStyleSheet(QString::fromUtf8("background-color: rgb(63, 144, 157);\n"
"border-radius: 5px;\n"
"border-bottom-left-radius: 0px;\n"
"border-bottom-right-radius: 0px;"));
        label_day5->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_3->addWidget(label_day5, 0, 4, 2, 1);

        label_day6 = new QLabel(widget_4_1);
        label_day6->setObjectName("label_day6");
        label_day6->setStyleSheet(QString::fromUtf8("background-color: rgb(63, 144, 157);\n"
"border-radius: 5px;\n"
"border-bottom-left-radius: 0px;\n"
"border-bottom-right-radius: 0px;"));
        label_day6->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_3->addWidget(label_day6, 0, 5, 2, 1);

        label_date2 = new QLabel(widget_4_1);
        label_date2->setObjectName("label_date2");
        label_date2->setStyleSheet(QString::fromUtf8("background-color: rgb(63, 144, 157);\n"
"border-radius: 5px;\n"
"border-top-left-radius: 0px;\n"
"border-top-right-radius: 0px;"));
        label_date2->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_3->addWidget(label_date2, 2, 1, 1, 1);

        label_date3 = new QLabel(widget_4_1);
        label_date3->setObjectName("label_date3");
        label_date3->setStyleSheet(QString::fromUtf8("background-color: rgb(63, 144, 157);\n"
"border-radius: 5px;\n"
"border-top-left-radius: 0px;\n"
"border-top-right-radius: 0px;"));
        label_date3->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_3->addWidget(label_date3, 2, 2, 1, 1);

        label_date4 = new QLabel(widget_4_1);
        label_date4->setObjectName("label_date4");
        label_date4->setStyleSheet(QString::fromUtf8("background-color: rgb(63, 144, 157);\n"
"border-radius: 5px;\n"
"border-top-left-radius: 0px;\n"
"border-top-right-radius: 0px;"));
        label_date4->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_3->addWidget(label_date4, 2, 3, 1, 1);

        label_date5 = new QLabel(widget_4_1);
        label_date5->setObjectName("label_date5");
        label_date5->setStyleSheet(QString::fromUtf8("background-color: rgb(63, 144, 157);\n"
"border-radius: 5px;\n"
"border-top-left-radius: 0px;\n"
"border-top-right-radius: 0px;"));
        label_date5->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_3->addWidget(label_date5, 2, 4, 1, 1);

        label_date6 = new QLabel(widget_4_1);
        label_date6->setObjectName("label_date6");
        label_date6->setStyleSheet(QString::fromUtf8("background-color: rgb(63, 144, 157);\n"
"border-radius: 5px;\n"
"border-top-left-radius: 0px;\n"
"border-top-right-radius: 0px;"));
        label_date6->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_3->addWidget(label_date6, 2, 5, 1, 1);

        label_date1 = new QLabel(widget_4_1);
        label_date1->setObjectName("label_date1");
        label_date1->setStyleSheet(QString::fromUtf8("background-color: rgb(63, 144, 157);\n"
"border-radius: 5px;\n"
"border-top-left-radius: 0px;\n"
"border-top-right-radius: 0px;"));
        label_date1->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_3->addWidget(label_date1, 2, 0, 1, 1);

        label_day1 = new QLabel(widget_4_1);
        label_day1->setObjectName("label_day1");
        label_day1->setStyleSheet(QString::fromUtf8("background-color: rgb(63, 144, 157);\n"
"border-radius: 5px;\n"
"border-bottom-left-radius: 0px;\n"
"border-bottom-right-radius: 0px;"));
        label_day1->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_3->addWidget(label_day1, 0, 0, 2, 1);


        verticalLayout_2->addWidget(widget_4_1);

        widget_4_2 = new QWidget(widget_4);
        widget_4_2->setObjectName("widget_4_2");
        gridLayout_4 = new QGridLayout(widget_4_2);
        gridLayout_4->setObjectName("gridLayout_4");
        gridLayout_4->setHorizontalSpacing(4);
        gridLayout_4->setVerticalSpacing(0);
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        label_cloudyIcon1 = new QLabel(widget_4_2);
        label_cloudyIcon1->setObjectName("label_cloudyIcon1");
        sizePolicy1.setHeightForWidth(label_cloudyIcon1->sizePolicy().hasHeightForWidth());
        label_cloudyIcon1->setSizePolicy(sizePolicy1);
        label_cloudyIcon1->setStyleSheet(QString::fromUtf8("background-color: rgb(63, 144, 157);\n"
"background-color: rgb(57, 57, 57);\n"
"border-radius: 5px;\n"
"border-bottom-left-radius: 0px;\n"
"border-bottom-right-radius: 0px;"));
        label_cloudyIcon1->setPixmap(QPixmap(QString::fromUtf8(":/res/cloudy.png")));
        label_cloudyIcon1->setScaledContents(true);
        label_cloudyIcon1->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_4->addWidget(label_cloudyIcon1, 0, 0, 1, 1);

        label_cloudyIcon2 = new QLabel(widget_4_2);
        label_cloudyIcon2->setObjectName("label_cloudyIcon2");
        sizePolicy1.setHeightForWidth(label_cloudyIcon2->sizePolicy().hasHeightForWidth());
        label_cloudyIcon2->setSizePolicy(sizePolicy1);
        label_cloudyIcon2->setStyleSheet(QString::fromUtf8("background-color: rgb(63, 144, 157);\n"
"background-color: rgb(57, 57, 57);\n"
"border-radius: 5px;\n"
"border-bottom-left-radius: 0px;\n"
"border-bottom-right-radius: 0px;"));
        label_cloudyIcon2->setPixmap(QPixmap(QString::fromUtf8(":/res/cloudy.png")));
        label_cloudyIcon2->setScaledContents(true);
        label_cloudyIcon2->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_4->addWidget(label_cloudyIcon2, 0, 1, 1, 1);

        label_cloudyIcon3 = new QLabel(widget_4_2);
        label_cloudyIcon3->setObjectName("label_cloudyIcon3");
        sizePolicy1.setHeightForWidth(label_cloudyIcon3->sizePolicy().hasHeightForWidth());
        label_cloudyIcon3->setSizePolicy(sizePolicy1);
        label_cloudyIcon3->setStyleSheet(QString::fromUtf8("background-color: rgb(63, 144, 157);\n"
"background-color: rgb(57, 57, 57);\n"
"border-radius: 5px;\n"
"border-bottom-left-radius: 0px;\n"
"border-bottom-right-radius: 0px;"));
        label_cloudyIcon3->setPixmap(QPixmap(QString::fromUtf8(":/res/cloudy.png")));
        label_cloudyIcon3->setScaledContents(true);
        label_cloudyIcon3->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_4->addWidget(label_cloudyIcon3, 0, 2, 1, 1);

        label_cloudyIcon4 = new QLabel(widget_4_2);
        label_cloudyIcon4->setObjectName("label_cloudyIcon4");
        sizePolicy1.setHeightForWidth(label_cloudyIcon4->sizePolicy().hasHeightForWidth());
        label_cloudyIcon4->setSizePolicy(sizePolicy1);
        label_cloudyIcon4->setStyleSheet(QString::fromUtf8("background-color: rgb(63, 144, 157);\n"
"background-color: rgb(57, 57, 57);\n"
"border-radius: 5px;\n"
"border-bottom-left-radius: 0px;\n"
"border-bottom-right-radius: 0px;"));
        label_cloudyIcon4->setPixmap(QPixmap(QString::fromUtf8(":/res/cloudy.png")));
        label_cloudyIcon4->setScaledContents(true);
        label_cloudyIcon4->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_4->addWidget(label_cloudyIcon4, 0, 3, 1, 1);

        label_cloudyIcon5 = new QLabel(widget_4_2);
        label_cloudyIcon5->setObjectName("label_cloudyIcon5");
        sizePolicy1.setHeightForWidth(label_cloudyIcon5->sizePolicy().hasHeightForWidth());
        label_cloudyIcon5->setSizePolicy(sizePolicy1);
        label_cloudyIcon5->setStyleSheet(QString::fromUtf8("background-color: rgb(63, 144, 157);\n"
"background-color: rgb(57, 57, 57);\n"
"border-radius: 5px;\n"
"border-bottom-left-radius: 0px;\n"
"border-bottom-right-radius: 0px;"));
        label_cloudyIcon5->setPixmap(QPixmap(QString::fromUtf8(":/res/yin.png")));
        label_cloudyIcon5->setScaledContents(true);
        label_cloudyIcon5->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_4->addWidget(label_cloudyIcon5, 0, 4, 1, 1);

        label_cloudyIcon6 = new QLabel(widget_4_2);
        label_cloudyIcon6->setObjectName("label_cloudyIcon6");
        sizePolicy1.setHeightForWidth(label_cloudyIcon6->sizePolicy().hasHeightForWidth());
        label_cloudyIcon6->setSizePolicy(sizePolicy1);
        label_cloudyIcon6->setMinimumSize(QSize(0, 20));
        label_cloudyIcon6->setStyleSheet(QString::fromUtf8("background-color: rgb(63, 144, 157);\n"
"background-color: rgb(57, 57, 57);\n"
"border-radius: 5px;\n"
"border-bottom-left-radius: 0px;\n"
"border-bottom-right-radius: 0px;"));
        label_cloudyIcon6->setPixmap(QPixmap(QString::fromUtf8(":/res/cloudy.png")));
        label_cloudyIcon6->setScaledContents(true);
        label_cloudyIcon6->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_4->addWidget(label_cloudyIcon6, 0, 5, 1, 1);

        label_cloudy1 = new QLabel(widget_4_2);
        label_cloudy1->setObjectName("label_cloudy1");
        label_cloudy1->setStyleSheet(QString::fromUtf8("background-color: rgb(57, 57, 57);\n"
"border-radius: 5px;\n"
"border-top-left-radius: 0px;\n"
"border-top-right-radius: 0px;"));
        label_cloudy1->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_4->addWidget(label_cloudy1, 1, 0, 1, 1);

        label_cloudy2 = new QLabel(widget_4_2);
        label_cloudy2->setObjectName("label_cloudy2");
        label_cloudy2->setStyleSheet(QString::fromUtf8("background-color: rgb(57, 57, 57);\n"
"border-radius: 5px;\n"
"border-top-left-radius: 0px;\n"
"border-top-right-radius: 0px;"));
        label_cloudy2->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_4->addWidget(label_cloudy2, 1, 1, 1, 1);

        label_cloudy3 = new QLabel(widget_4_2);
        label_cloudy3->setObjectName("label_cloudy3");
        label_cloudy3->setStyleSheet(QString::fromUtf8("background-color: rgb(57, 57, 57);\n"
"border-radius: 5px;\n"
"border-top-left-radius: 0px;\n"
"border-top-right-radius: 0px;"));
        label_cloudy3->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_4->addWidget(label_cloudy3, 1, 2, 1, 1);

        label_cloudy4 = new QLabel(widget_4_2);
        label_cloudy4->setObjectName("label_cloudy4");
        label_cloudy4->setStyleSheet(QString::fromUtf8("background-color: rgb(57, 57, 57);\n"
"border-radius: 5px;\n"
"border-top-left-radius: 0px;\n"
"border-top-right-radius: 0px;"));
        label_cloudy4->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_4->addWidget(label_cloudy4, 1, 3, 1, 1);

        label_cloudy5 = new QLabel(widget_4_2);
        label_cloudy5->setObjectName("label_cloudy5");
        label_cloudy5->setStyleSheet(QString::fromUtf8("background-color: rgb(57, 57, 57);\n"
"border-radius: 5px;\n"
"border-top-left-radius: 0px;\n"
"border-top-right-radius: 0px;"));
        label_cloudy5->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_4->addWidget(label_cloudy5, 1, 4, 1, 1);

        label_cloudy6 = new QLabel(widget_4_2);
        label_cloudy6->setObjectName("label_cloudy6");
        label_cloudy6->setStyleSheet(QString::fromUtf8("background-color: rgb(57, 57, 57);\n"
"border-radius: 5px;\n"
"border-top-left-radius: 0px;\n"
"border-top-right-radius: 0px;"));
        label_cloudy6->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_4->addWidget(label_cloudy6, 1, 5, 1, 1);


        verticalLayout_2->addWidget(widget_4_2);

        widget_4_3 = new QWidget(widget_4);
        widget_4_3->setObjectName("widget_4_3");
        horizontalLayout_3 = new QHBoxLayout(widget_4_3);
        horizontalLayout_3->setSpacing(4);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_you1 = new QLabel(widget_4_3);
        label_you1->setObjectName("label_you1");
        label_you1->setStyleSheet(QString::fromUtf8("background-color: rgb(131, 222, 92);\n"
"border-radius: 5px;\n"
""));
        label_you1->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_you1->setWordWrap(false);

        horizontalLayout_3->addWidget(label_you1);

        label_you2 = new QLabel(widget_4_3);
        label_you2->setObjectName("label_you2");
        label_you2->setStyleSheet(QString::fromUtf8("background-color: rgb(231, 179, 46);\n"
"border-radius: 5px;\n"
""));
        label_you2->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_you2->setWordWrap(false);

        horizontalLayout_3->addWidget(label_you2);

        label_you3 = new QLabel(widget_4_3);
        label_you3->setObjectName("label_you3");
        label_you3->setStyleSheet(QString::fromUtf8("background-color: rgb(131, 222, 92);\n"
"border-radius: 5px;\n"
""));
        label_you3->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_you3->setWordWrap(false);

        horizontalLayout_3->addWidget(label_you3);

        label_you4 = new QLabel(widget_4_3);
        label_you4->setObjectName("label_you4");
        label_you4->setStyleSheet(QString::fromUtf8("background-color: rgb(131, 222, 92);\n"
"border-radius: 5px;\n"
""));
        label_you4->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_you4->setWordWrap(false);

        horizontalLayout_3->addWidget(label_you4);

        label_you5 = new QLabel(widget_4_3);
        label_you5->setObjectName("label_you5");
        label_you5->setStyleSheet(QString::fromUtf8("background-color: rgb(131, 222, 92);\n"
"border-radius: 5px;\n"
""));
        label_you5->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_you5->setWordWrap(false);

        horizontalLayout_3->addWidget(label_you5);

        label_you6 = new QLabel(widget_4_3);
        label_you6->setObjectName("label_you6");
        label_you6->setStyleSheet(QString::fromUtf8("background-color: rgb(131, 222, 92);\n"
"border-radius: 5px;\n"
""));
        label_you6->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_you6->setWordWrap(false);

        horizontalLayout_3->addWidget(label_you6);


        verticalLayout_2->addWidget(widget_4_3);

        widget_4_4 = new QWidget(widget_4);
        widget_4_4->setObjectName("widget_4_4");
        widget_4_4->setStyleSheet(QString::fromUtf8("background-color: rgb(77, 77, 77);\n"
"border-radius: 7px;"));

        verticalLayout_2->addWidget(widget_4_4);

        widget_4_5 = new QWidget(widget_4);
        widget_4_5->setObjectName("widget_4_5");
        widget_4_5->setStyleSheet(QString::fromUtf8("background-color: rgb(77, 77, 77);\n"
"border-radius: 7px;"));

        verticalLayout_2->addWidget(widget_4_5);

        widget_4_6 = new QWidget(widget_4);
        widget_4_6->setObjectName("widget_4_6");
        gridLayout_5 = new QGridLayout(widget_4_6);
        gridLayout_5->setObjectName("gridLayout_5");
        gridLayout_5->setHorizontalSpacing(4);
        gridLayout_5->setVerticalSpacing(0);
        gridLayout_5->setContentsMargins(0, 0, 0, 0);
        label_fx1 = new QLabel(widget_4_6);
        label_fx1->setObjectName("label_fx1");
        label_fx1->setStyleSheet(QString::fromUtf8("background-color: rgb(47, 47, 47);\n"
"border-radius: 5px;\n"
"border-bottom-left-radius: 0px;\n"
"border-bottom-right-radius: 0px;"));
        label_fx1->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_5->addWidget(label_fx1, 0, 0, 1, 1);

        label_fx2 = new QLabel(widget_4_6);
        label_fx2->setObjectName("label_fx2");
        label_fx2->setStyleSheet(QString::fromUtf8("background-color: rgb(47, 47, 47);\n"
"border-radius: 5px;\n"
"border-bottom-left-radius: 0px;\n"
"border-bottom-right-radius: 0px;"));
        label_fx2->setAlignment(Qt::AlignmentFlag::AlignBottom|Qt::AlignmentFlag::AlignHCenter);

        gridLayout_5->addWidget(label_fx2, 0, 1, 1, 1);

        label_fx4 = new QLabel(widget_4_6);
        label_fx4->setObjectName("label_fx4");
        label_fx4->setStyleSheet(QString::fromUtf8("background-color: rgb(47, 47, 47);\n"
"border-radius: 5px;\n"
"border-bottom-left-radius: 0px;\n"
"border-bottom-right-radius: 0px;"));
        label_fx4->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_5->addWidget(label_fx4, 0, 3, 1, 1);

        label_fx6 = new QLabel(widget_4_6);
        label_fx6->setObjectName("label_fx6");
        label_fx6->setStyleSheet(QString::fromUtf8("background-color: rgb(47, 47, 47);\n"
"border-radius: 5px;\n"
"border-bottom-left-radius: 0px;\n"
"border-bottom-right-radius: 0px;"));
        label_fx6->setAlignment(Qt::AlignmentFlag::AlignBottom|Qt::AlignmentFlag::AlignHCenter);

        gridLayout_5->addWidget(label_fx6, 0, 5, 1, 1);

        label_fl1 = new QLabel(widget_4_6);
        label_fl1->setObjectName("label_fl1");
        label_fl1->setStyleSheet(QString::fromUtf8("background-color: rgb(47, 47, 47);\n"
"border-radius: 5px;\n"
"border-top-left-radius: 0px;\n"
"border-top-right-radius: 0px;"));
        label_fl1->setAlignment(Qt::AlignmentFlag::AlignBottom|Qt::AlignmentFlag::AlignHCenter);

        gridLayout_5->addWidget(label_fl1, 1, 0, 2, 1);

        label_fl2 = new QLabel(widget_4_6);
        label_fl2->setObjectName("label_fl2");
        label_fl2->setStyleSheet(QString::fromUtf8("background-color: rgb(47, 47, 47);\n"
"border-radius: 5px;\n"
"border-top-left-radius: 0px;\n"
"border-top-right-radius: 0px;"));
        label_fl2->setAlignment(Qt::AlignmentFlag::AlignBottom|Qt::AlignmentFlag::AlignHCenter);

        gridLayout_5->addWidget(label_fl2, 1, 1, 2, 1);

        label_fl4 = new QLabel(widget_4_6);
        label_fl4->setObjectName("label_fl4");
        label_fl4->setStyleSheet(QString::fromUtf8("background-color: rgb(47, 47, 47);\n"
"border-radius: 5px;\n"
"border-top-left-radius: 0px;\n"
"border-top-right-radius: 0px;"));
        label_fl4->setAlignment(Qt::AlignmentFlag::AlignBottom|Qt::AlignmentFlag::AlignHCenter);

        gridLayout_5->addWidget(label_fl4, 1, 3, 2, 1);

        label_fl6 = new QLabel(widget_4_6);
        label_fl6->setObjectName("label_fl6");
        label_fl6->setStyleSheet(QString::fromUtf8("background-color: rgb(47, 47, 47);\n"
"border-radius: 5px;\n"
"border-top-left-radius: 0px;\n"
"border-top-right-radius: 0px;"));
        label_fl6->setAlignment(Qt::AlignmentFlag::AlignBottom|Qt::AlignmentFlag::AlignHCenter);

        gridLayout_5->addWidget(label_fl6, 1, 5, 2, 1);

        label_fx5 = new QLabel(widget_4_6);
        label_fx5->setObjectName("label_fx5");
        label_fx5->setStyleSheet(QString::fromUtf8("background-color: rgb(47, 47, 47);\n"
"border-radius: 5px;\n"
"border-bottom-left-radius: 0px;\n"
"border-bottom-right-radius: 0px;"));
        label_fx5->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_5->addWidget(label_fx5, 0, 4, 1, 1);

        label_fl5 = new QLabel(widget_4_6);
        label_fl5->setObjectName("label_fl5");
        label_fl5->setStyleSheet(QString::fromUtf8("background-color: rgb(47, 47, 47);\n"
"border-radius: 5px;\n"
"border-top-left-radius: 0px;\n"
"border-top-right-radius: 0px;"));
        label_fl5->setAlignment(Qt::AlignmentFlag::AlignBottom|Qt::AlignmentFlag::AlignHCenter);

        gridLayout_5->addWidget(label_fl5, 1, 4, 2, 1);

        label_fx3 = new QLabel(widget_4_6);
        label_fx3->setObjectName("label_fx3");
        label_fx3->setStyleSheet(QString::fromUtf8("background-color: rgb(47, 47, 47);\n"
"border-radius: 5px;\n"
"border-bottom-left-radius: 0px;\n"
"border-bottom-right-radius: 0px;"));
        label_fx3->setAlignment(Qt::AlignmentFlag::AlignBottom|Qt::AlignmentFlag::AlignHCenter);

        gridLayout_5->addWidget(label_fx3, 0, 2, 1, 1);

        label_fl3 = new QLabel(widget_4_6);
        label_fl3->setObjectName("label_fl3");
        label_fl3->setStyleSheet(QString::fromUtf8("background-color: rgb(47, 47, 47);\n"
"border-radius: 5px;\n"
"border-top-left-radius: 0px;\n"
"border-top-right-radius: 0px;"));
        label_fl3->setAlignment(Qt::AlignmentFlag::AlignBottom|Qt::AlignmentFlag::AlignHCenter);

        gridLayout_5->addWidget(label_fl3, 1, 2, 2, 1);


        verticalLayout_2->addWidget(widget_4_6);


        verticalLayout_all->addWidget(widget_4);

        verticalLayout_all->setStretch(1, 2);
        verticalLayout_all->setStretch(2, 3);
        verticalLayout_all->setStretch(3, 10);

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        lineEdit_search->setText(QString());
        pushButton_search->setText(QString());
        label_currenttime->setText(QCoreApplication::translate("Widget", "2024/11/7 \346\230\237\346\234\237\345\233\233", nullptr));
        label_sun->setText(QString());
        label_temprange->setText(QCoreApplication::translate("Widget", "20-26\342\204\203", nullptr));
        label_city->setText(QCoreApplication::translate("Widget", "\346\267\261\345\234\263\345\270\202", nullptr));
        label_temptype->setText(QCoreApplication::translate("Widget", "\346\231\264\350\275\254\345\244\232\344\272\221", nullptr));
        label_temp->setText(QCoreApplication::translate("Widget", "23\342\204\203", nullptr));
        label_ganmao->setText(QCoreApplication::translate("Widget", "\346\204\237\345\206\222\346\214\207\346\225\260\357\274\232\345\220\204\347\261\273\344\272\272\347\276\244\345\217\257\350\207\252\347\224\261\346\264\273\345\212\250", nullptr));
        label_wind_picture->setText(QString());
        label_wind_word->setText(QCoreApplication::translate("Widget", "\344\270\234\345\215\227\351\243\216", nullptr));
        label_wind_sum->setText(QCoreApplication::translate("Widget", " \344\272\214\347\272\247", nullptr));
        label_PM_picture->setText(QString());
        label_wind_word_3->setText(QCoreApplication::translate("Widget", " PM2.5 ", nullptr));
        label_PM_sum->setText(QCoreApplication::translate("Widget", "   24", nullptr));
        label_shidu_picture->setText(QString());
        label_shidu_word->setText(QCoreApplication::translate("Widget", "  \346\271\277\345\272\246", nullptr));
        label_shidu_sum->setText(QCoreApplication::translate("Widget", "  86%", nullptr));
        label_air_picture->setText(QString());
        label_air_word->setText(QCoreApplication::translate("Widget", "\347\251\272\346\260\224\350\264\250\351\207\217", nullptr));
        label_air_sum->setText(QCoreApplication::translate("Widget", "    \344\274\230", nullptr));
        label_day2->setText(QCoreApplication::translate("Widget", "\344\273\212\345\244\251", nullptr));
        label_day3->setText(QCoreApplication::translate("Widget", "\346\230\216\345\244\251", nullptr));
        label_day4->setText(QCoreApplication::translate("Widget", "\345\221\250\346\227\245", nullptr));
        label_day5->setText(QCoreApplication::translate("Widget", "\345\221\250\344\270\200", nullptr));
        label_day6->setText(QCoreApplication::translate("Widget", "\345\221\250\344\272\214", nullptr));
        label_date2->setText(QCoreApplication::translate("Widget", "11/7", nullptr));
        label_date3->setText(QCoreApplication::translate("Widget", "11/8", nullptr));
        label_date4->setText(QCoreApplication::translate("Widget", "11/9", nullptr));
        label_date5->setText(QCoreApplication::translate("Widget", "11/10", nullptr));
        label_date6->setText(QCoreApplication::translate("Widget", "11/11", nullptr));
        label_date1->setText(QCoreApplication::translate("Widget", "11/6", nullptr));
        label_day1->setText(QCoreApplication::translate("Widget", "\346\230\250\345\244\251", nullptr));
        label_cloudyIcon1->setText(QString());
        label_cloudyIcon2->setText(QString());
        label_cloudyIcon3->setText(QString());
        label_cloudyIcon4->setText(QString());
        label_cloudyIcon5->setText(QString());
        label_cloudyIcon6->setText(QString());
        label_cloudy1->setText(QCoreApplication::translate("Widget", "\345\244\232\344\272\221", nullptr));
        label_cloudy2->setText(QCoreApplication::translate("Widget", "\345\244\232\344\272\221", nullptr));
        label_cloudy3->setText(QCoreApplication::translate("Widget", "\345\244\232\344\272\221", nullptr));
        label_cloudy4->setText(QCoreApplication::translate("Widget", "\345\244\232\344\272\221", nullptr));
        label_cloudy5->setText(QCoreApplication::translate("Widget", "\351\230\264", nullptr));
        label_cloudy6->setText(QCoreApplication::translate("Widget", "\345\244\232\344\272\221", nullptr));
        label_you1->setText(QCoreApplication::translate("Widget", "\344\274\230", nullptr));
        label_you2->setText(QCoreApplication::translate("Widget", "\350\211\257", nullptr));
        label_you3->setText(QCoreApplication::translate("Widget", "\344\274\230", nullptr));
        label_you4->setText(QCoreApplication::translate("Widget", "\344\274\230", nullptr));
        label_you5->setText(QCoreApplication::translate("Widget", "\344\274\230", nullptr));
        label_you6->setText(QCoreApplication::translate("Widget", "\344\274\230", nullptr));
        label_fx1->setText(QCoreApplication::translate("Widget", "\344\270\234\345\215\227\351\243\216", nullptr));
        label_fx2->setText(QCoreApplication::translate("Widget", "\344\270\234\345\215\227\351\243\216", nullptr));
        label_fx4->setText(QCoreApplication::translate("Widget", "\344\270\234\351\243\216", nullptr));
        label_fx6->setText(QCoreApplication::translate("Widget", "\344\270\234\351\243\216", nullptr));
        label_fl1->setText(QCoreApplication::translate("Widget", "2\347\272\247", nullptr));
        label_fl2->setText(QCoreApplication::translate("Widget", "2\347\272\247", nullptr));
        label_fl4->setText(QCoreApplication::translate("Widget", "2\347\272\247", nullptr));
        label_fl6->setText(QCoreApplication::translate("Widget", "2\347\272\247", nullptr));
        label_fx5->setText(QCoreApplication::translate("Widget", "\344\270\234\351\243\216", nullptr));
        label_fl5->setText(QCoreApplication::translate("Widget", "2\347\272\247", nullptr));
        label_fx3->setText(QCoreApplication::translate("Widget", "\344\270\234\351\243\216", nullptr));
        label_fl3->setText(QCoreApplication::translate("Widget", "1\347\272\247", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
