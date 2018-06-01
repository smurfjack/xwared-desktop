/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QTextEdit *textEdit_output;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_start;
    QLabel *label_2;
    QPushButton *pushButton_stop;
    QLabel *label;
    QLabel *label1;
    QLabel *label_tips;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(371, 310);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        textEdit_output = new QTextEdit(centralWidget);
        textEdit_output->setObjectName(QStringLiteral("textEdit_output"));
        textEdit_output->setEnabled(true);
        textEdit_output->setGeometry(QRect(20, 30, 331, 91));
        textEdit_output->setReadOnly(false);
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 130, 331, 61));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_start = new QPushButton(layoutWidget);
        pushButton_start->setObjectName(QStringLiteral("pushButton_start"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton_start->sizePolicy().hasHeightForWidth());
        pushButton_start->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(pushButton_start);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setMaximumSize(QSize(20, 16777215));

        horizontalLayout->addWidget(label_2);

        pushButton_stop = new QPushButton(layoutWidget);
        pushButton_stop->setObjectName(QStringLiteral("pushButton_stop"));
        sizePolicy.setHeightForWidth(pushButton_stop->sizePolicy().hasHeightForWidth());
        pushButton_stop->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(pushButton_stop);

        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 0, 101, 21));
        label1 = new QLabel(centralWidget);
        label1->setObjectName(QStringLiteral("label1"));
        label1->setGeometry(QRect(10, 200, 51, 21));
        label_tips = new QLabel(centralWidget);
        label_tips->setObjectName(QStringLiteral("label_tips"));
        label_tips->setGeometry(QRect(65, 200, 281, 61));
        label_tips->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        label_tips->setWordWrap(true);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 371, 25));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        pushButton_start->setText(QApplication::translate("MainWindow", "\345\220\257\345\212\250xwared", nullptr));
        label_2->setText(QString());
        pushButton_stop->setText(QApplication::translate("MainWindow", "\345\201\234\346\255\242xwared", nullptr));
        label->setText(QApplication::translate("MainWindow", "xwared\350\277\224\345\233\236:", nullptr));
        label1->setText(QApplication::translate("MainWindow", "\346\217\220\347\244\272\357\274\232", nullptr));
        label_tips->setText(QApplication::translate("MainWindow", "Author:smurfjack\n"
"@2018", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
