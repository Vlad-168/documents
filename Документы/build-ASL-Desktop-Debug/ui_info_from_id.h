/********************************************************************************
** Form generated from reading UI file 'info_from_id.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INFO_FROM_ID_H
#define UI_INFO_FROM_ID_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Info_from_ID
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QLineEdit *lineEdit;
    QTextBrowser *textBrowser;
    QPushButton *pushButton;

    void setupUi(QDialog *Info_from_ID)
    {
        if (Info_from_ID->objectName().isEmpty())
            Info_from_ID->setObjectName(QStringLiteral("Info_from_ID"));
        Info_from_ID->resize(286, 262);
        verticalLayout_2 = new QVBoxLayout(Info_from_ID);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        lineEdit = new QLineEdit(Info_from_ID);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        verticalLayout->addWidget(lineEdit);

        textBrowser = new QTextBrowser(Info_from_ID);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));

        verticalLayout->addWidget(textBrowser);

        pushButton = new QPushButton(Info_from_ID);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        verticalLayout->addWidget(pushButton);


        verticalLayout_2->addLayout(verticalLayout);


        retranslateUi(Info_from_ID);

        QMetaObject::connectSlotsByName(Info_from_ID);
    } // setupUi

    void retranslateUi(QDialog *Info_from_ID)
    {
        Info_from_ID->setWindowTitle(QApplication::translate("Info_from_ID", "\320\232\320\275\320\270\320\263\320\270 \321\203\321\207\320\265\320\275\320\270\320\272\320\260", 0));
        lineEdit->setText(QApplication::translate("Info_from_ID", "\320\262\320\262\320\265\320\264\320\270\321\202\320\265 ID \321\203\321\207\320\265\320\275\320\270\320\272\320\260", 0));
        textBrowser->setHtml(QApplication::translate("Info_from_ID", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", 0));
        pushButton->setText(QApplication::translate("Info_from_ID", "\320\274\320\265\320\275\321\216", 0));
    } // retranslateUi

};

namespace Ui {
    class Info_from_ID: public Ui_Info_from_ID {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INFO_FROM_ID_H
