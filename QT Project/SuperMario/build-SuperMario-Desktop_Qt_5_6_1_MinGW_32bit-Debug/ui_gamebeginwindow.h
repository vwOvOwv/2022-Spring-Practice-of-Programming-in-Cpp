/********************************************************************************
** Form generated from reading UI file 'gamebeginwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GAMEBEGINWINDOW_H
#define UI_GAMEBEGINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_gameBeginWindow
{
public:
    QWidget *centralWidget;

    void setupUi(QMainWindow *gameBeginWindow)
    {
        if (gameBeginWindow->objectName().isEmpty())
            gameBeginWindow->setObjectName(QStringLiteral("gameBeginWindow"));
        gameBeginWindow->resize(1000, 500);
        gameBeginWindow->setMinimumSize(QSize(1000, 500));
        gameBeginWindow->setMaximumSize(QSize(1000, 500));
        centralWidget = new QWidget(gameBeginWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gameBeginWindow->setCentralWidget(centralWidget);

        retranslateUi(gameBeginWindow);

        QMetaObject::connectSlotsByName(gameBeginWindow);
    } // setupUi

    void retranslateUi(QMainWindow *gameBeginWindow)
    {
        gameBeginWindow->setWindowTitle(QApplication::translate("gameBeginWindow", "gameBeginWindow", 0));
    } // retranslateUi

};

namespace Ui {
    class gameBeginWindow: public Ui_gameBeginWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GAMEBEGINWINDOW_H
