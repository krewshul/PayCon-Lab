/********************************************************************************
** Form generated from reading UI file 'chatwindow.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHATWINDOW_H
#define UI_CHATWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QListView>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTabWidget>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ChatWindowClass
{
public:
    QAction *actionQuit;
    QAction *actionCloseTab;
    QWidget *widget_2;
    QWidget *splitter;
    QTabWidget *tab;
    QWidget *widget_4;
    QWidget *tab_5;
    QLineEdit *lineEdit;
    QListView *userView;
    QPushButton *disconnect;
    QWidget *hide3;
    QWidget *layoutWidget;
    QHBoxLayout *hide1;
    QLabel *label_9;
    QSpacerItem *horizontalSpacer_4;
    QLabel *label;
    QLineEdit *editPseudo;
    QLabel *label_5;
    QPushButton *buttonConnect;
    QLabel *label_10;
    QLabel *label_7;
    QWidget *layoutWidget_2;
    QHBoxLayout *hide1_2;
    QLabel *label_11;
    QSpacerItem *horizontalSpacer_5;
    QWidget *layoutWidget_3;
    QHBoxLayout *hide1_3;
    QLabel *label_12;
    QSpacerItem *horizontalSpacer_6;
    QLabel *label_8;
    QLabel *label_13;
    QLabel *label_14;
    QLabel *label_4;
    QLabel *label_3;

    void setupUi(QWidget *ChatWindowClass)
    {
        if (ChatWindowClass->objectName().isEmpty())
            ChatWindowClass->setObjectName(QString::fromUtf8("ChatWindowClass"));
        ChatWindowClass->resize(747, 595);
        actionQuit = new QAction(ChatWindowClass);
        actionQuit->setObjectName(QString::fromUtf8("actionQuit"));
        actionCloseTab = new QAction(ChatWindowClass);
        actionCloseTab->setObjectName(QString::fromUtf8("actionCloseTab"));
        widget_2 = new QWidget(ChatWindowClass);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        widget_2->setGeometry(QRect(0, 0, 741, 511));
        splitter = new QWidget(widget_2);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setEnabled(true);
        splitter->setGeometry(QRect(10, 10, 721, 501));
        splitter->setStyleSheet(QString::fromUtf8(""));
        tab = new QTabWidget(splitter);
        tab->setObjectName(QString::fromUtf8("tab"));
        tab->setGeometry(QRect(10, 0, 541, 451));
        tab->setStyleSheet(QString::fromUtf8(""));
        tab->setTabShape(QTabWidget::Rounded);
        tab->setTabsClosable(false);
        widget_4 = new QWidget();
        widget_4->setObjectName(QString::fromUtf8("widget_4"));
        tab->addTab(widget_4, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QString::fromUtf8("tab_5"));
        tab->addTab(tab_5, QString());
        lineEdit = new QLineEdit(splitter);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(10, 460, 701, 30));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lineEdit->sizePolicy().hasHeightForWidth());
        lineEdit->setSizePolicy(sizePolicy);
        lineEdit->setMaximumSize(QSize(16777215, 30));
        userView = new QListView(splitter);
        userView->setObjectName(QString::fromUtf8("userView"));
        userView->setGeometry(QRect(560, 20, 161, 391));
        userView->setMinimumSize(QSize(0, 300));
        userView->setStyleSheet(QString::fromUtf8("border-radius:10px;"));
        disconnect = new QPushButton(splitter);
        disconnect->setObjectName(QString::fromUtf8("disconnect"));
        disconnect->setGeometry(QRect(642, 420, 71, 28));
        hide3 = new QWidget(widget_2);
        hide3->setObjectName(QString::fromUtf8("hide3"));
        hide3->setGeometry(QRect(10, 10, 731, 551));
        layoutWidget = new QWidget(hide3);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 20, 250, 29));
        hide1 = new QHBoxLayout(layoutWidget);
        hide1->setSpacing(7);
        hide1->setContentsMargins(11, 11, 11, 11);
        hide1->setObjectName(QString::fromUtf8("hide1"));
        hide1->setContentsMargins(0, 0, 0, 0);
        label_9 = new QLabel(layoutWidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        QFont font;
        font.setFamily(QString::fromUtf8("Open Sans,sans-serif"));
        label_9->setFont(font);

        hide1->addWidget(label_9);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hide1->addItem(horizontalSpacer_4);

        label = new QLabel(hide3);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 190, 101, 101));
        label->setMargin(5);
        label->setOpenExternalLinks(true);
        editPseudo = new QLineEdit(hide3);
        editPseudo->setObjectName(QString::fromUtf8("editPseudo"));
        editPseudo->setGeometry(QRect(120, 80, 151, 22));
        label_5 = new QLabel(hide3);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(50, 80, 71, 21));
        buttonConnect = new QPushButton(hide3);
        buttonConnect->setObjectName(QString::fromUtf8("buttonConnect"));
        buttonConnect->setGeometry(QRect(120, 110, 151, 41));
        buttonConnect->setStyleSheet(QString::fromUtf8("border-radius:40px;border:1px solid grey"));
        label_10 = new QLabel(hide3);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(140, 60, 121, 16));
        label_7 = new QLabel(hide3);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(120, 190, 101, 101));
        label_7->setOpenExternalLinks(true);
        layoutWidget_2 = new QWidget(hide3);
        layoutWidget_2->setObjectName(QString::fromUtf8("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(10, 160, 250, 29));
        hide1_2 = new QHBoxLayout(layoutWidget_2);
        hide1_2->setSpacing(7);
        hide1_2->setContentsMargins(11, 11, 11, 11);
        hide1_2->setObjectName(QString::fromUtf8("hide1_2"));
        hide1_2->setContentsMargins(0, 0, 0, 0);
        label_11 = new QLabel(layoutWidget_2);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setFont(font);

        hide1_2->addWidget(label_11);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hide1_2->addItem(horizontalSpacer_5);

        layoutWidget_3 = new QWidget(hide3);
        layoutWidget_3->setObjectName(QString::fromUtf8("layoutWidget_3"));
        layoutWidget_3->setGeometry(QRect(10, 300, 250, 29));
        hide1_3 = new QHBoxLayout(layoutWidget_3);
        hide1_3->setSpacing(7);
        hide1_3->setContentsMargins(11, 11, 11, 11);
        hide1_3->setObjectName(QString::fromUtf8("hide1_3"));
        hide1_3->setContentsMargins(0, 0, 0, 0);
        label_12 = new QLabel(layoutWidget_3);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setFont(font);

        hide1_3->addWidget(label_12);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hide1_3->addItem(horizontalSpacer_6);

        label_8 = new QLabel(hide3);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(30, 340, 161, 101));
        label_8->setOpenExternalLinks(true);
        label_13 = new QLabel(hide3);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(200, 340, 171, 101));
        label_13->setOpenExternalLinks(true);
        label_14 = new QLabel(hide3);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(380, 340, 161, 101));
        label_14->setOpenExternalLinks(true);
        label_4 = new QLabel(hide3);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(220, 190, 101, 101));
        label_4->setOpenExternalLinks(true);
        label_3 = new QLabel(hide3);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(320, 190, 101, 101));
        label_3->setOpenExternalLinks(true);

        retranslateUi(ChatWindowClass);

        tab->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(ChatWindowClass);
    } // setupUi

    void retranslateUi(QWidget *ChatWindowClass)
    {
        actionQuit->setText(QApplication::translate("ChatWindowClass", "Quitter", 0, QApplication::UnicodeUTF8));
        actionQuit->setShortcut(QApplication::translate("ChatWindowClass", "Ctrl+Q", 0, QApplication::UnicodeUTF8));
        actionCloseTab->setText(QApplication::translate("ChatWindowClass", "Fermer l'onglet", 0, QApplication::UnicodeUTF8));
        tab->setTabText(tab->indexOf(widget_4), QApplication::translate("ChatWindowClass", "Tab 1", 0, QApplication::UnicodeUTF8));
        tab->setTabText(tab->indexOf(tab_5), QApplication::translate("ChatWindowClass", "Tab 2", 0, QApplication::UnicodeUTF8));
        disconnect->setText(QApplication::translate("ChatWindowClass", "Disconnect", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("ChatWindowClass", "PayCon IRC Chat", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("ChatWindowClass", "<html><head/><body><p align=\"center\"><a href=https://twitter.com/pay_con/ style=\" text-decoration: underline; color:#0000ff;\"><img src=\":/icons/twitter\"/></span></a></p></body></html>", 0, QApplication::UnicodeUTF8));
        editPseudo->setText(QString());
        label_5->setText(QApplication::translate("ChatWindowClass", "Nickname", 0, QApplication::UnicodeUTF8));
        buttonConnect->setText(QApplication::translate("ChatWindowClass", "Click to connect", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("ChatWindowClass", "<html><head/><body><p><span style=\" font-weight:600;\">Connect to IRC:</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("ChatWindowClass", "<html><head/><body><p align=\"center\"><a href=https://bitcointalk.org/index.php?topic=937480.0 style=\" text-decoration: underline; color:#0000ff;\"><img src=\":/icons/forums\"/></span></a></p></body></html>", 0, QApplication::UnicodeUTF8));
        label_11->setText(QApplication::translate("ChatWindowClass", "Social", 0, QApplication::UnicodeUTF8));
        label_12->setText(QApplication::translate("ChatWindowClass", "Exchanges", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("ChatWindowClass", "<html><head/><body><p align=\"center\"><a href=\"http://bit.ly/1E5sSbJ\" style=\" text-decoration: underline; color:#0000ff;\"><img src=\":/icons/ccex\"/></span></a></p></body></html>", 0, QApplication::UnicodeUTF8));
        label_13->setText(QApplication::translate("ChatWindowClass", "<html><head/><body><p align=\"center\"><a href=https://www.cryptopia.co.nz/Exchange/1243 style=\" text-decoration: underline; color:#0000ff;\"><img src=\":/icons/cryptopia\"/></span></a></p></body></html>", 0, QApplication::UnicodeUTF8));
        label_14->setText(QApplication::translate("ChatWindowClass", "<html><head/><body><p align=\"center\"><a href=https://yobit.net/en/trade/CON/BTC style=\" text-decoration: underline; color:#0000ff;\"><img src=\":/icons/yobit\"/></span></a></p></body></html>", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("ChatWindowClass", "<html><head/><body><p align=\"center\"><a href=http://slackin.conslackin.tk style=\" text-decoration: underline; color:#0000ff;\"><img src=\":/icons/slack\"/></span></a></p></body></html>", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("ChatWindowClass", "<html><head/><body><p align=\"center\"><a href=https://join.skype.com/zdTvbG7zr2vg style=\" text-decoration: underline; color:#0000ff;\"><img src=\":/icons/skype\"/></span></a></p></body></html>", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(ChatWindowClass);
    } // retranslateUi

};

namespace Ui {
    class ChatWindowClass: public Ui_ChatWindowClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHATWINDOW_H
