/********************************************************************************
** Form generated from reading UI file 'new_student.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEW_STUDENT_H
#define UI_NEW_STUDENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_New_student
{
public:
    QFormLayout *formLayout;
    QLineEdit *dateofbirth;
    QLineEdit *form;
    QSpacerItem *verticalSpacer;
    QLineEdit *monthofbirth;
    QPushButton *pushButton;
    QSpacerItem *verticalSpacer_4;
    QLabel *label_2;
    QPushButton *pushButton_3;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QDialog *New_student)
    {
        if (New_student->objectName().isEmpty())
            New_student->setObjectName(QStringLiteral("New_student"));
        New_student->resize(214, 260);
        formLayout = new QFormLayout(New_student);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        dateofbirth = new QLineEdit(New_student);
        dateofbirth->setObjectName(QStringLiteral("dateofbirth"));

        formLayout->setWidget(0, QFormLayout::FieldRole, dateofbirth);

        form = new QLineEdit(New_student);
        form->setObjectName(QStringLiteral("form"));

        formLayout->setWidget(2, QFormLayout::FieldRole, form);

        verticalSpacer = new QSpacerItem(182, 23, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout->setItem(3, QFormLayout::FieldRole, verticalSpacer);

        monthofbirth = new QLineEdit(New_student);
        monthofbirth->setObjectName(QStringLiteral("monthofbirth"));

        formLayout->setWidget(4, QFormLayout::FieldRole, monthofbirth);

        pushButton = new QPushButton(New_student);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        formLayout->setWidget(5, QFormLayout::FieldRole, pushButton);

        verticalSpacer_4 = new QSpacerItem(182, 25, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout->setItem(6, QFormLayout::FieldRole, verticalSpacer_4);

        label_2 = new QLabel(New_student);
        label_2->setObjectName(QStringLiteral("label_2"));

        formLayout->setWidget(7, QFormLayout::LabelRole, label_2);

        pushButton_3 = new QPushButton(New_student);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));

        formLayout->setWidget(7, QFormLayout::FieldRole, pushButton_3);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout->setItem(1, QFormLayout::FieldRole, verticalSpacer_2);


        retranslateUi(New_student);

        QMetaObject::connectSlotsByName(New_student);
    } // setupUi

    void retranslateUi(QDialog *New_student)
    {
        New_student->setWindowTitle(QApplication::translate("New_student", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\264\320\260\320\275\320\275\321\213\320\265 \320\276\320\261 \321\203\321\207\320\265\320\275\320\270\320\272\320\265", 0));
        dateofbirth->setText(QString());
        form->setText(QString());
        monthofbirth->setText(QString());
        pushButton->setText(QApplication::translate("New_student", "\320\277\320\276\320\273\321\203\321\207\320\270\321\202\321\214 ID", 0));
        label_2->setText(QString());
        pushButton_3->setText(QApplication::translate("New_student", "\320\263\320\276\321\202\320\276\320\262\320\276", 0));
    } // retranslateUi

};

namespace Ui {
    class New_student: public Ui_New_student {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEW_STUDENT_H
