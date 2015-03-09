/********************************************************************************
** Form generated from reading UI file 'mqtt_temp.ui'
**
** Created by: Qt User Interface Compiler version 5.3.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MQTT_TEMP_H
#define UI_MQTT_TEMP_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MQTT_TEMP
{
public:
    QWidget *centralWidget;
    QLabel *pic1la;
    QLabel *temp1la;
    QLabel *hud1la;
    QLabel *time1la;
    QToolBar *mainToolBar;

    void setupUi(QMainWindow *MQTT_TEMP)
    {
        if (MQTT_TEMP->objectName().isEmpty())
            MQTT_TEMP->setObjectName(QStringLiteral("MQTT_TEMP"));
        MQTT_TEMP->resize(320, 247);
        MQTT_TEMP->setMaximumSize(QSize(16777215, 247));
        QFont font;
        font.setFamily(QStringLiteral("Sans Serif"));
        MQTT_TEMP->setFont(font);
        MQTT_TEMP->setStyleSheet(QStringLiteral("background-color: rgb(39, 0, 255);"));
        centralWidget = new QWidget(MQTT_TEMP);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        pic1la = new QLabel(centralWidget);
        pic1la->setObjectName(QStringLiteral("pic1la"));
        pic1la->setGeometry(QRect(20, 5, 42, 200));
        pic1la->setStyleSheet(QStringLiteral(""));
        pic1la->setAlignment(Qt::AlignJustify|Qt::AlignVCenter);
        temp1la = new QLabel(centralWidget);
        temp1la->setObjectName(QStringLiteral("temp1la"));
        temp1la->setGeometry(QRect(90, 24, 181, 51));
        QFont font1;
        temp1la->setFont(font1);
        temp1la->setStyleSheet(QLatin1String("font-size: 36px;\n"
"padding-top: 20px;\n"
"background-color: red;"));
        hud1la = new QLabel(centralWidget);
        hud1la->setObjectName(QStringLiteral("hud1la"));
        hud1la->setGeometry(QRect(90, 117, 181, 71));
        time1la = new QLabel(centralWidget);
        time1la->setObjectName(QStringLiteral("time1la"));
        time1la->setGeometry(QRect(240, 210, 71, 21));
        MQTT_TEMP->setCentralWidget(centralWidget);
        hud1la->raise();
        temp1la->raise();
        pic1la->raise();
        time1la->raise();
        mainToolBar = new QToolBar(MQTT_TEMP);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MQTT_TEMP->addToolBar(Qt::TopToolBarArea, mainToolBar);

        retranslateUi(MQTT_TEMP);

        QMetaObject::connectSlotsByName(MQTT_TEMP);
    } // setupUi

    void retranslateUi(QMainWindow *MQTT_TEMP)
    {
        MQTT_TEMP->setWindowTitle(QApplication::translate("MQTT_TEMP", "MQTT_TEMP", 0));
        pic1la->setText(QString());
        temp1la->setText(QString());
        hud1la->setText(QApplication::translate("MQTT_TEMP", "TextLabel", 0));
        time1la->setText(QApplication::translate("MQTT_TEMP", "TextLabel", 0));
    } // retranslateUi

};

namespace Ui {
    class MQTT_TEMP: public Ui_MQTT_TEMP {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MQTT_TEMP_H
