/********************************************************************************
** Form generated from reading UI file 'qr_code_unread.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QR_CODE_UNREAD_H
#define UI_QR_CODE_UNREAD_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_QR_code_unread
{
public:
    QVBoxLayout *verticalLayout;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QPushButton *pushButton;

    void setupUi(QDialog *QR_code_unread)
    {
        if (QR_code_unread->objectName().isEmpty())
            QR_code_unread->setObjectName(QStringLiteral("QR_code_unread"));
        QR_code_unread->resize(314, 144);
        verticalLayout = new QVBoxLayout(QR_code_unread);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        lineEdit = new QLineEdit(QR_code_unread);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        verticalLayout->addWidget(lineEdit);

        lineEdit_2 = new QLineEdit(QR_code_unread);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));

        verticalLayout->addWidget(lineEdit_2);

        pushButton = new QPushButton(QR_code_unread);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        verticalLayout->addWidget(pushButton);


        retranslateUi(QR_code_unread);

        QMetaObject::connectSlotsByName(QR_code_unread);
    } // setupUi

    void retranslateUi(QDialog *QR_code_unread)
    {
        QR_code_unread->setWindowTitle(QApplication::translate("QR_code_unread", "QR \320\272\320\276\320\264 \320\275\320\265 \321\207\320\270\321\202\320\260\320\265\321\202\321\201\321\217", 0));
        lineEdit->setText(QString());
        lineEdit_2->setText(QString());
        pushButton->setText(QApplication::translate("QR_code_unread", "\320\263\320\276\321\202\320\276\320\262\320\276(\320\277\320\265\321\207\320\260\321\202\321\214)", 0));
    } // retranslateUi

};

namespace Ui {
    class QR_code_unread: public Ui_QR_code_unread {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QR_CODE_UNREAD_H
