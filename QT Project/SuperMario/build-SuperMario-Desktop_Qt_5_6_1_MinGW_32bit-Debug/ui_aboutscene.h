/********************************************************************************
** Form generated from reading UI file 'aboutscene.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUTSCENE_H
#define UI_ABOUTSCENE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AboutScene
{
public:

    void setupUi(QWidget *AboutScene)
    {
        if (AboutScene->objectName().isEmpty())
            AboutScene->setObjectName(QStringLiteral("AboutScene"));
        AboutScene->resize(400, 300);

        retranslateUi(AboutScene);

        QMetaObject::connectSlotsByName(AboutScene);
    } // setupUi

    void retranslateUi(QWidget *AboutScene)
    {
        AboutScene->setWindowTitle(QApplication::translate("AboutScene", "Form", 0));
    } // retranslateUi

};

namespace Ui {
    class AboutScene: public Ui_AboutScene {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUTSCENE_H
