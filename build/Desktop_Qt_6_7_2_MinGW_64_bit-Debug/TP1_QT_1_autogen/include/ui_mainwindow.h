/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *MiseSousTension;
    QCheckBox *checkBox;
    QRadioButton *radioButton;
    QComboBox *comboBox;
    QSlider *horizontalSlider;
    QPushButton *DemarrageDrone;
    QLabel *EtatTension;
    QLabel *EtatDemarrage;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        MiseSousTension = new QPushButton(centralwidget);
        MiseSousTension->setObjectName("MiseSousTension");
        MiseSousTension->setGeometry(QRect(300, 40, 141, 51));
        MiseSousTension->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 255)"));
        checkBox = new QCheckBox(centralwidget);
        checkBox->setObjectName("checkBox");
        checkBox->setGeometry(QRect(300, 300, 76, 20));
        radioButton = new QRadioButton(centralwidget);
        radioButton->setObjectName("radioButton");
        radioButton->setGeometry(QRect(290, 260, 89, 20));
        comboBox = new QComboBox(centralwidget);
        comboBox->setObjectName("comboBox");
        comboBox->setGeometry(QRect(300, 180, 111, 22));
        horizontalSlider = new QSlider(centralwidget);
        horizontalSlider->setObjectName("horizontalSlider");
        horizontalSlider->setGeometry(QRect(280, 240, 160, 22));
        horizontalSlider->setOrientation(Qt::Horizontal);
        DemarrageDrone = new QPushButton(centralwidget);
        DemarrageDrone->setObjectName("DemarrageDrone");
        DemarrageDrone->setGeometry(QRect(480, 40, 141, 51));
        EtatTension = new QLabel(centralwidget);
        EtatTension->setObjectName("EtatTension");
        EtatTension->setGeometry(QRect(300, 110, 101, 51));
        EtatDemarrage = new QLabel(centralwidget);
        EtatDemarrage->setObjectName("EtatDemarrage");
        EtatDemarrage->setGeometry(QRect(480, 110, 101, 51));
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        MiseSousTension->setText(QCoreApplication::translate("MainWindow", "Mise sous tension", nullptr));
        checkBox->setText(QCoreApplication::translate("MainWindow", "CheckBox", nullptr));
        radioButton->setText(QCoreApplication::translate("MainWindow", "RadioButton", nullptr));
        DemarrageDrone->setText(QCoreApplication::translate("MainWindow", "D\303\251marrage du drone ", nullptr));
        EtatTension->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        EtatDemarrage->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
