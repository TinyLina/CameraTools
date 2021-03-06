/********************************************************************************
** Form generated from reading UI file 'CameraTools.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CAMERATOOLS_H
#define UI_CAMERATOOLS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>
#include "oglwidget.h"

QT_BEGIN_NAMESPACE

class Ui_CameraToolsClass
{
public:
    QAction *actionDirectShow;
    QAction *actionMedia_Foundation;
    QAction *actionVFW;
    QWidget *centralWidget;
    QGroupBox *groupBox;
    QComboBox *comboBox_Camera;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_5;
    QComboBox *comboBox_DataType;
    QComboBox *comboBox_DataResolution;
    QComboBox *comboBox_DataFps;
    QLabel *label_13;
    QComboBox *comboBox_DetectTools;
    QPushButton *pushButton_StartShow;
    QPushButton *pushButton_Grab;
    QPushButton *pushButton_addmask;
    QSlider *horizontalSlider_transparency;
    QPushButton *pushButton_StartCapture;
    QTextEdit *textEdit_record;
    QLabel *label_6;
    QComboBox *comboBox_ImageStyle;
    QLabel *label_7;
    QCheckBox *checkBox_Filter;
    OGLWidget *openGLWidget_ShowImg;
    QMenuBar *menuBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *CameraToolsClass)
    {
        if (CameraToolsClass->objectName().isEmpty())
            CameraToolsClass->setObjectName(QStringLiteral("CameraToolsClass"));
        CameraToolsClass->setWindowModality(Qt::ApplicationModal);
        CameraToolsClass->resize(1152, 603);
        actionDirectShow = new QAction(CameraToolsClass);
        actionDirectShow->setObjectName(QStringLiteral("actionDirectShow"));
        actionMedia_Foundation = new QAction(CameraToolsClass);
        actionMedia_Foundation->setObjectName(QStringLiteral("actionMedia_Foundation"));
        actionVFW = new QAction(CameraToolsClass);
        actionVFW->setObjectName(QStringLiteral("actionVFW"));
        centralWidget = new QWidget(CameraToolsClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(10, 10, 361, 181));
        comboBox_Camera = new QComboBox(groupBox);
        comboBox_Camera->setObjectName(QStringLiteral("comboBox_Camera"));
        comboBox_Camera->setGeometry(QRect(90, 60, 241, 22));
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 60, 51, 20));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 100, 61, 16));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(180, 100, 51, 16));
        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(20, 140, 31, 16));
        comboBox_DataType = new QComboBox(groupBox);
        comboBox_DataType->setObjectName(QStringLiteral("comboBox_DataType"));
        comboBox_DataType->setGeometry(QRect(90, 100, 71, 22));
        comboBox_DataResolution = new QComboBox(groupBox);
        comboBox_DataResolution->setObjectName(QStringLiteral("comboBox_DataResolution"));
        comboBox_DataResolution->setGeometry(QRect(230, 100, 101, 22));
        comboBox_DataFps = new QComboBox(groupBox);
        comboBox_DataFps->setObjectName(QStringLiteral("comboBox_DataFps"));
        comboBox_DataFps->setGeometry(QRect(90, 140, 71, 22));
        label_13 = new QLabel(groupBox);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(20, 20, 61, 16));
        comboBox_DetectTools = new QComboBox(groupBox);
        comboBox_DetectTools->setObjectName(QStringLiteral("comboBox_DetectTools"));
        comboBox_DetectTools->setGeometry(QRect(90, 20, 241, 22));
        pushButton_StartShow = new QPushButton(centralWidget);
        pushButton_StartShow->setObjectName(QStringLiteral("pushButton_StartShow"));
        pushButton_StartShow->setGeometry(QRect(390, 10, 75, 23));
        pushButton_Grab = new QPushButton(centralWidget);
        pushButton_Grab->setObjectName(QStringLiteral("pushButton_Grab"));
        pushButton_Grab->setGeometry(QRect(570, 10, 75, 23));
        pushButton_addmask = new QPushButton(centralWidget);
        pushButton_addmask->setObjectName(QStringLiteral("pushButton_addmask"));
        pushButton_addmask->setGeometry(QRect(660, 10, 75, 23));
        horizontalSlider_transparency = new QSlider(centralWidget);
        horizontalSlider_transparency->setObjectName(QStringLiteral("horizontalSlider_transparency"));
        horizontalSlider_transparency->setGeometry(QRect(750, 10, 111, 22));
        horizontalSlider_transparency->setOrientation(Qt::Horizontal);
        pushButton_StartCapture = new QPushButton(centralWidget);
        pushButton_StartCapture->setObjectName(QStringLiteral("pushButton_StartCapture"));
        pushButton_StartCapture->setGeometry(QRect(480, 10, 75, 23));
        textEdit_record = new QTextEdit(centralWidget);
        textEdit_record->setObjectName(QStringLiteral("textEdit_record"));
        textEdit_record->setGeometry(QRect(10, 220, 361, 321));
        label_6 = new QLabel(centralWidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(10, 200, 61, 16));
        comboBox_ImageStyle = new QComboBox(centralWidget);
        comboBox_ImageStyle->setObjectName(QStringLiteral("comboBox_ImageStyle"));
        comboBox_ImageStyle->setGeometry(QRect(950, 10, 81, 22));
        label_7 = new QLabel(centralWidget);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(890, 10, 61, 16));
        checkBox_Filter = new QCheckBox(centralWidget);
        checkBox_Filter->setObjectName(QStringLiteral("checkBox_Filter"));
        checkBox_Filter->setGeometry(QRect(1060, 10, 71, 16));
        openGLWidget_ShowImg = new OGLWidget(centralWidget);
        openGLWidget_ShowImg->setObjectName(QStringLiteral("openGLWidget_ShowImg"));
        openGLWidget_ShowImg->setEnabled(false);
        openGLWidget_ShowImg->setGeometry(QRect(390, 50, 741, 491));
        CameraToolsClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(CameraToolsClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1152, 23));
        CameraToolsClass->setMenuBar(menuBar);
        statusBar = new QStatusBar(CameraToolsClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        CameraToolsClass->setStatusBar(statusBar);

        retranslateUi(CameraToolsClass);
        QObject::connect(pushButton_StartShow, SIGNAL(clicked()), CameraToolsClass, SLOT(button_startshow_click()));
        QObject::connect(pushButton_Grab, SIGNAL(clicked()), CameraToolsClass, SLOT(button_grab_click()));
        QObject::connect(comboBox_Camera, SIGNAL(currentIndexChanged(int)), CameraToolsClass, SLOT(combobox_camera_change()));
        QObject::connect(pushButton_addmask, SIGNAL(clicked()), CameraToolsClass, SLOT(button_addmask_click()));
        QObject::connect(horizontalSlider_transparency, SIGNAL(valueChanged(int)), CameraToolsClass, SLOT(slider_value_change()));
        QObject::connect(pushButton_StartCapture, SIGNAL(clicked()), CameraToolsClass, SLOT(button_startcapture_click()));
        QObject::connect(comboBox_ImageStyle, SIGNAL(currentIndexChanged(int)), CameraToolsClass, SLOT(combobox_imagestyle_change()));
        QObject::connect(comboBox_DetectTools, SIGNAL(currentIndexChanged(int)), CameraToolsClass, SLOT(combobox_detecttools_change()));
        QObject::connect(checkBox_Filter, SIGNAL(clicked()), CameraToolsClass, SLOT(checkbox_filter()));

        QMetaObject::connectSlotsByName(CameraToolsClass);
    } // setupUi

    void retranslateUi(QMainWindow *CameraToolsClass)
    {
        CameraToolsClass->setWindowTitle(QApplication::translate("CameraToolsClass", "CameraTools", 0));
        actionDirectShow->setText(QApplication::translate("CameraToolsClass", "DirectShow", 0));
        actionMedia_Foundation->setText(QApplication::translate("CameraToolsClass", "Media Foundation", 0));
        actionVFW->setText(QApplication::translate("CameraToolsClass", "VFW", 0));
        groupBox->setTitle(QApplication::translate("CameraToolsClass", "\346\221\204\345\203\217\345\244\264\344\277\241\346\201\257", 0));
        label->setText(QApplication::translate("CameraToolsClass", "\346\221\204\345\203\217\345\244\264\357\274\232", 0));
        label_2->setText(QApplication::translate("CameraToolsClass", "\346\225\260\346\215\256\347\261\273\345\236\213\357\274\232", 0));
        label_3->setText(QApplication::translate("CameraToolsClass", "\345\210\206\350\276\250\347\216\207\357\274\232", 0));
        label_5->setText(QApplication::translate("CameraToolsClass", "\345\270\247\347\216\207\357\274\232", 0));
        label_13->setText(QApplication::translate("CameraToolsClass", "\346\243\200\346\265\213\345\267\245\345\205\267\357\274\232", 0));
        pushButton_StartShow->setText(QApplication::translate("CameraToolsClass", "\345\274\200\345\247\213\351\242\204\350\247\210", 0));
        pushButton_Grab->setText(QApplication::translate("CameraToolsClass", "\346\212\223\346\213\215", 0));
        pushButton_addmask->setText(QApplication::translate("CameraToolsClass", "\346\267\273\345\212\240\346\260\264\345\215\260", 0));
        pushButton_StartCapture->setText(QApplication::translate("CameraToolsClass", "\345\274\200\345\247\213\345\275\225\345\203\217", 0));
        label_6->setText(QApplication::translate("CameraToolsClass", "\346\223\215\344\275\234\350\256\260\345\275\225\357\274\232", 0));
        label_7->setText(QApplication::translate("CameraToolsClass", "\345\233\276\345\203\217\351\243\216\346\240\274\357\274\232", 0));
        checkBox_Filter->setText(QApplication::translate("CameraToolsClass", "\345\231\252\347\202\271\344\274\230\345\214\226", 0));
    } // retranslateUi

};

namespace Ui {
    class CameraToolsClass: public Ui_CameraToolsClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CAMERATOOLS_H
