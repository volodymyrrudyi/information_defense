/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Sun Jan 29 18:25:05 2012
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QPlainTextEdit>
#include <QtGui/QPushButton>
#include <QtGui/QStatusBar>
#include <QtGui/QTabWidget>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout;
    QTabWidget *tabWidget;
    QWidget *tabLab1;
    QGridLayout *gridLayout;
    QPushButton *btnEncrypt;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_2;
    QLabel *label_5;
    QPlainTextEdit *editMessage;
    QLabel *lblRequiredLength;
    QLabel *labelInputLength;
    QCheckBox *checkRemoveSpaces;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_3;
    QLabel *label_3;
    QPlainTextEdit *editResult;
    QPushButton *btnDecrypt;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_4;
    QLineEdit *editFirstKey;
    QLineEdit *editSecondKey;
    QLabel *label;
    QLabel *lblKey1Length;
    QLabel *label_4;
    QLabel *lblKey2Length;
    QWidget *tabLab2;
    QMenuBar *menuBar;
    QMenu *menuHelp;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(437, 596);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        horizontalLayout = new QHBoxLayout(centralWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(tabWidget->sizePolicy().hasHeightForWidth());
        tabWidget->setSizePolicy(sizePolicy);
        tabLab1 = new QWidget();
        tabLab1->setObjectName(QString::fromUtf8("tabLab1"));
        gridLayout = new QGridLayout(tabLab1);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        btnEncrypt = new QPushButton(tabLab1);
        btnEncrypt->setObjectName(QString::fromUtf8("btnEncrypt"));

        gridLayout->addWidget(btnEncrypt, 9, 0, 1, 1);

        groupBox = new QGroupBox(tabLab1);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout_2 = new QGridLayout(groupBox);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout_2->addWidget(label_5, 0, 1, 1, 1);

        editMessage = new QPlainTextEdit(groupBox);
        editMessage->setObjectName(QString::fromUtf8("editMessage"));

        gridLayout_2->addWidget(editMessage, 1, 1, 2, 2);

        lblRequiredLength = new QLabel(groupBox);
        lblRequiredLength->setObjectName(QString::fromUtf8("lblRequiredLength"));

        gridLayout_2->addWidget(lblRequiredLength, 3, 2, 1, 1);

        labelInputLength = new QLabel(groupBox);
        labelInputLength->setObjectName(QString::fromUtf8("labelInputLength"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(labelInputLength->sizePolicy().hasHeightForWidth());
        labelInputLength->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(labelInputLength, 3, 1, 1, 1);

        checkRemoveSpaces = new QCheckBox(groupBox);
        checkRemoveSpaces->setObjectName(QString::fromUtf8("checkRemoveSpaces"));

        gridLayout_2->addWidget(checkRemoveSpaces, 0, 2, 1, 1);


        gridLayout->addWidget(groupBox, 1, 0, 2, 2);

        groupBox_2 = new QGroupBox(tabLab1);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        gridLayout_3 = new QGridLayout(groupBox_2);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout_3->addWidget(label_3, 0, 1, 1, 1);

        editResult = new QPlainTextEdit(groupBox_2);
        editResult->setObjectName(QString::fromUtf8("editResult"));

        gridLayout_3->addWidget(editResult, 1, 1, 1, 1);


        gridLayout->addWidget(groupBox_2, 4, 0, 1, 2);

        btnDecrypt = new QPushButton(tabLab1);
        btnDecrypt->setObjectName(QString::fromUtf8("btnDecrypt"));

        gridLayout->addWidget(btnDecrypt, 9, 1, 1, 1);

        groupBox_3 = new QGroupBox(tabLab1);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        gridLayout_4 = new QGridLayout(groupBox_3);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        editFirstKey = new QLineEdit(groupBox_3);
        editFirstKey->setObjectName(QString::fromUtf8("editFirstKey"));

        gridLayout_4->addWidget(editFirstKey, 2, 0, 1, 3);

        editSecondKey = new QLineEdit(groupBox_3);
        editSecondKey->setObjectName(QString::fromUtf8("editSecondKey"));

        gridLayout_4->addWidget(editSecondKey, 4, 0, 1, 3);

        label = new QLabel(groupBox_3);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_4->addWidget(label, 0, 0, 1, 2);

        lblKey1Length = new QLabel(groupBox_3);
        lblKey1Length->setObjectName(QString::fromUtf8("lblKey1Length"));

        gridLayout_4->addWidget(lblKey1Length, 0, 2, 1, 1);

        label_4 = new QLabel(groupBox_3);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout_4->addWidget(label_4, 3, 0, 1, 1);

        lblKey2Length = new QLabel(groupBox_3);
        lblKey2Length->setObjectName(QString::fromUtf8("lblKey2Length"));

        gridLayout_4->addWidget(lblKey2Length, 3, 2, 1, 1);


        gridLayout->addWidget(groupBox_3, 3, 0, 1, 2);

        tabWidget->addTab(tabLab1, QString());
        tabLab2 = new QWidget();
        tabLab2->setObjectName(QString::fromUtf8("tabLab2"));
        tabWidget->addTab(tabLab2, QString());

        horizontalLayout->addWidget(tabWidget);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 437, 22));
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName(QString::fromUtf8("menuHelp"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuHelp->menuAction());

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Information defense", 0, QApplication::UnicodeUTF8));
        btnEncrypt->setText(QApplication::translate("MainWindow", "Encode", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("MainWindow", "Source data", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("MainWindow", "Message", 0, QApplication::UnicodeUTF8));
        editMessage->setPlainText(QApplication::translate("MainWindow", "\320\223\320\240\320\243\320\227\320\230\320\242\320\225\320\220\320\237\320\225\320\233\320\254\320\241\320\230\320\235\320\253", 0, QApplication::UnicodeUTF8));
        lblRequiredLength->setText(QApplication::translate("MainWindow", "Required length: Unknown", 0, QApplication::UnicodeUTF8));
        labelInputLength->setText(QApplication::translate("MainWindow", "Text length: 0", 0, QApplication::UnicodeUTF8));
        checkRemoveSpaces->setText(QApplication::translate("MainWindow", "Delete spaces", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "Output data", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("MainWindow", "Result", 0, QApplication::UnicodeUTF8));
        btnDecrypt->setText(QApplication::translate("MainWindow", " Decode", 0, QApplication::UnicodeUTF8));
        groupBox_3->setTitle(QApplication::translate("MainWindow", "Encryption keys", 0, QApplication::UnicodeUTF8));
        editFirstKey->setText(QApplication::translate("MainWindow", "4132", 0, QApplication::UnicodeUTF8));
        editSecondKey->setText(QApplication::translate("MainWindow", "3142", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("MainWindow", "First key", 0, QApplication::UnicodeUTF8));
        lblKey1Length->setText(QApplication::translate("MainWindow", "Length: 0", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("MainWindow", "Second key", 0, QApplication::UnicodeUTF8));
        lblKey2Length->setText(QApplication::translate("MainWindow", "Length: 0", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tabLab1), QApplication::translate("MainWindow", "LW 1", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tabLab2), QApplication::translate("MainWindow", "LW 2", 0, QApplication::UnicodeUTF8));
        menuHelp->setTitle(QApplication::translate("MainWindow", "Help", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
