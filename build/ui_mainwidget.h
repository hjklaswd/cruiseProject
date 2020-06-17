/********************************************************************************
** Form generated from reading UI file 'mainwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWIDGET_H
#define UI_MAINWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_mainWidget
{
public:
    QGridLayout *gridLayout_6;
    QStackedWidget *stackedWidgetLognin;
    QWidget *pageMain;
    QGridLayout *gridLayout_4;
    QHBoxLayout *horizontalLayout;
    QWidget *widget;
    QGridLayout *gridLayout_2;
    QToolButton *toolButtonTask;
    QToolButton *toolButtonData;
    QToolButton *toolButtonRealTime;
    QToolButton *toolButtonUser;
    QToolButton *toolButtonSignOut;
    QLabel *label;
    QWidget *widget_stack;
    QGridLayout *gridLayout;
    QStackedWidget *stackedWidget;
    QWidget *pageTask;
    QWidget *pageData;
    QWidget *pageRealTime;
    QWidget *pageUser;
    QWidget *pageLognin;
    QWidget *widget1;
    QGridLayout *gridLayout_3;
    QHBoxLayout *horizontalLayout_2;
    QLabel *labelUser;
    QLineEdit *lineEditUserName;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_3;
    QLabel *labelPassWord;
    QLineEdit *lineEditPassWord;
    QPushButton *pushButtonLognin;
    QWidget *pageResetPW;
    QWidget *widget2;
    QGridLayout *gridLayout_5;
    QHBoxLayout *horizontalLayout_4;
    QLabel *labelPW;
    QLineEdit *lineEditPW;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_5;
    QLabel *labelPWAgain;
    QLineEdit *lineEditPWAgain;
    QPushButton *pushButtonReset;

    void setupUi(QWidget *mainWidget)
    {
        if (mainWidget->objectName().isEmpty())
            mainWidget->setObjectName(QString::fromUtf8("mainWidget"));
        mainWidget->resize(815, 521);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mainWidget->sizePolicy().hasHeightForWidth());
        mainWidget->setSizePolicy(sizePolicy);
        gridLayout_6 = new QGridLayout(mainWidget);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        stackedWidgetLognin = new QStackedWidget(mainWidget);
        stackedWidgetLognin->setObjectName(QString::fromUtf8("stackedWidgetLognin"));
        sizePolicy.setHeightForWidth(stackedWidgetLognin->sizePolicy().hasHeightForWidth());
        stackedWidgetLognin->setSizePolicy(sizePolicy);
        pageMain = new QWidget();
        pageMain->setObjectName(QString::fromUtf8("pageMain"));
        sizePolicy.setHeightForWidth(pageMain->sizePolicy().hasHeightForWidth());
        pageMain->setSizePolicy(sizePolicy);
        gridLayout_4 = new QGridLayout(pageMain);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        widget = new QWidget(pageMain);
        widget->setObjectName(QString::fromUtf8("widget"));
        sizePolicy.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy);
        gridLayout_2 = new QGridLayout(widget);
        gridLayout_2->setSpacing(0);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        toolButtonTask = new QToolButton(widget);
        toolButtonTask->setObjectName(QString::fromUtf8("toolButtonTask"));
        sizePolicy.setHeightForWidth(toolButtonTask->sizePolicy().hasHeightForWidth());
        toolButtonTask->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(toolButtonTask, 0, 0, 1, 1);

        toolButtonData = new QToolButton(widget);
        toolButtonData->setObjectName(QString::fromUtf8("toolButtonData"));
        sizePolicy.setHeightForWidth(toolButtonData->sizePolicy().hasHeightForWidth());
        toolButtonData->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(toolButtonData, 1, 0, 1, 1);

        toolButtonRealTime = new QToolButton(widget);
        toolButtonRealTime->setObjectName(QString::fromUtf8("toolButtonRealTime"));
        sizePolicy.setHeightForWidth(toolButtonRealTime->sizePolicy().hasHeightForWidth());
        toolButtonRealTime->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(toolButtonRealTime, 2, 0, 1, 1);

        toolButtonUser = new QToolButton(widget);
        toolButtonUser->setObjectName(QString::fromUtf8("toolButtonUser"));
        sizePolicy.setHeightForWidth(toolButtonUser->sizePolicy().hasHeightForWidth());
        toolButtonUser->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(toolButtonUser, 3, 0, 1, 1);

        toolButtonSignOut = new QToolButton(widget);
        toolButtonSignOut->setObjectName(QString::fromUtf8("toolButtonSignOut"));
        sizePolicy.setHeightForWidth(toolButtonSignOut->sizePolicy().hasHeightForWidth());
        toolButtonSignOut->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(toolButtonSignOut, 4, 0, 1, 1);

        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_2->addWidget(label, 5, 0, 1, 1);

        gridLayout_2->setRowStretch(0, 1);
        gridLayout_2->setRowStretch(1, 1);
        gridLayout_2->setRowStretch(2, 1);
        gridLayout_2->setRowStretch(3, 1);
        gridLayout_2->setRowStretch(4, 1);
        gridLayout_2->setRowStretch(5, 3);

        horizontalLayout->addWidget(widget);

        widget_stack = new QWidget(pageMain);
        widget_stack->setObjectName(QString::fromUtf8("widget_stack"));
        sizePolicy.setHeightForWidth(widget_stack->sizePolicy().hasHeightForWidth());
        widget_stack->setSizePolicy(sizePolicy);
        gridLayout = new QGridLayout(widget_stack);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        stackedWidget = new QStackedWidget(widget_stack);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        pageTask = new QWidget();
        pageTask->setObjectName(QString::fromUtf8("pageTask"));
        stackedWidget->addWidget(pageTask);
        pageData = new QWidget();
        pageData->setObjectName(QString::fromUtf8("pageData"));
        stackedWidget->addWidget(pageData);
        pageRealTime = new QWidget();
        pageRealTime->setObjectName(QString::fromUtf8("pageRealTime"));
        stackedWidget->addWidget(pageRealTime);
        pageUser = new QWidget();
        pageUser->setObjectName(QString::fromUtf8("pageUser"));
        stackedWidget->addWidget(pageUser);

        gridLayout->addWidget(stackedWidget, 0, 0, 1, 1);


        horizontalLayout->addWidget(widget_stack);

        horizontalLayout->setStretch(0, 1);
        horizontalLayout->setStretch(1, 3);

        gridLayout_4->addLayout(horizontalLayout, 0, 0, 1, 1);

        stackedWidgetLognin->addWidget(pageMain);
        pageLognin = new QWidget();
        pageLognin->setObjectName(QString::fromUtf8("pageLognin"));
        widget1 = new QWidget(pageLognin);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(212, 170, 260, 55));
        gridLayout_3 = new QGridLayout(widget1);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        labelUser = new QLabel(widget1);
        labelUser->setObjectName(QString::fromUtf8("labelUser"));

        horizontalLayout_2->addWidget(labelUser);

        lineEditUserName = new QLineEdit(widget1);
        lineEditUserName->setObjectName(QString::fromUtf8("lineEditUserName"));

        horizontalLayout_2->addWidget(lineEditUserName);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        gridLayout_3->addLayout(horizontalLayout_2, 0, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        labelPassWord = new QLabel(widget1);
        labelPassWord->setObjectName(QString::fromUtf8("labelPassWord"));

        horizontalLayout_3->addWidget(labelPassWord);

        lineEditPassWord = new QLineEdit(widget1);
        lineEditPassWord->setObjectName(QString::fromUtf8("lineEditPassWord"));

        horizontalLayout_3->addWidget(lineEditPassWord);

        pushButtonLognin = new QPushButton(widget1);
        pushButtonLognin->setObjectName(QString::fromUtf8("pushButtonLognin"));

        horizontalLayout_3->addWidget(pushButtonLognin);


        gridLayout_3->addLayout(horizontalLayout_3, 1, 0, 1, 1);

        stackedWidgetLognin->addWidget(pageLognin);
        pageResetPW = new QWidget();
        pageResetPW->setObjectName(QString::fromUtf8("pageResetPW"));
        widget2 = new QWidget(pageResetPW);
        widget2->setObjectName(QString::fromUtf8("widget2"));
        widget2->setGeometry(QRect(230, 220, 278, 55));
        gridLayout_5 = new QGridLayout(widget2);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        gridLayout_5->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        labelPW = new QLabel(widget2);
        labelPW->setObjectName(QString::fromUtf8("labelPW"));

        horizontalLayout_4->addWidget(labelPW);

        lineEditPW = new QLineEdit(widget2);
        lineEditPW->setObjectName(QString::fromUtf8("lineEditPW"));

        horizontalLayout_4->addWidget(lineEditPW);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);


        gridLayout_5->addLayout(horizontalLayout_4, 0, 0, 1, 1);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        labelPWAgain = new QLabel(widget2);
        labelPWAgain->setObjectName(QString::fromUtf8("labelPWAgain"));

        horizontalLayout_5->addWidget(labelPWAgain);

        lineEditPWAgain = new QLineEdit(widget2);
        lineEditPWAgain->setObjectName(QString::fromUtf8("lineEditPWAgain"));

        horizontalLayout_5->addWidget(lineEditPWAgain);

        pushButtonReset = new QPushButton(widget2);
        pushButtonReset->setObjectName(QString::fromUtf8("pushButtonReset"));

        horizontalLayout_5->addWidget(pushButtonReset);


        gridLayout_5->addLayout(horizontalLayout_5, 1, 0, 1, 1);

        stackedWidgetLognin->addWidget(pageResetPW);

        gridLayout_6->addWidget(stackedWidgetLognin, 0, 0, 1, 1);


        retranslateUi(mainWidget);

        stackedWidget->setCurrentIndex(3);


        QMetaObject::connectSlotsByName(mainWidget);
    } // setupUi

    void retranslateUi(QWidget *mainWidget)
    {
        mainWidget->setWindowTitle(QApplication::translate("mainWidget", "Form", nullptr));
        toolButtonTask->setText(QApplication::translate("mainWidget", "\344\273\273\345\212\241", nullptr));
        toolButtonData->setText(QApplication::translate("mainWidget", "\345\237\272\347\241\200\346\225\260\346\215\256", nullptr));
        toolButtonRealTime->setText(QApplication::translate("mainWidget", "\345\256\236\346\227\266", nullptr));
        toolButtonUser->setText(QApplication::translate("mainWidget", "\347\224\250\346\210\267\347\256\241\347\220\206", nullptr));
        toolButtonSignOut->setText(QApplication::translate("mainWidget", "\351\200\200\345\207\272", nullptr));
        label->setText(QString());
        labelUser->setText(QApplication::translate("mainWidget", "\347\224\250\346\210\267\345\220\215", nullptr));
        labelPassWord->setText(QApplication::translate("mainWidget", "\345\257\206  \347\240\201", nullptr));
        pushButtonLognin->setText(QApplication::translate("mainWidget", "\347\231\273\345\275\225", nullptr));
        labelPW->setText(QApplication::translate("mainWidget", "\350\276\223\345\205\245\345\257\206\347\240\201", nullptr));
        labelPWAgain->setText(QApplication::translate("mainWidget", "\345\206\215\346\254\241\350\276\223\345\205\245", nullptr));
        pushButtonReset->setText(QApplication::translate("mainWidget", "\347\241\256\345\256\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class mainWidget: public Ui_mainWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWIDGET_H
