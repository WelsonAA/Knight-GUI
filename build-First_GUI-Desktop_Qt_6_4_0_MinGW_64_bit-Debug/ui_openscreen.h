/********************************************************************************
** Form generated from reading UI file 'openscreen.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OPENSCREEN_H
#define UI_OPENSCREEN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_openscreen
{
public:
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QLineEdit *initialEnter;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLineEdit *targetEnter;
    QPushButton *pushButton;

    void setupUi(QDialog *openscreen)
    {
        if (openscreen->objectName().isEmpty())
            openscreen->setObjectName("openscreen");
        openscreen->resize(400, 300);
        groupBox = new QGroupBox(openscreen);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(70, 50, 250, 143));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label = new QLabel(groupBox);
        label->setObjectName("label");

        horizontalLayout_2->addWidget(label);

        initialEnter = new QLineEdit(groupBox);
        initialEnter->setObjectName("initialEnter");

        horizontalLayout_2->addWidget(initialEnter);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label_2 = new QLabel(groupBox);
        label_2->setObjectName("label_2");

        horizontalLayout->addWidget(label_2);

        targetEnter = new QLineEdit(groupBox);
        targetEnter->setObjectName("targetEnter");

        horizontalLayout->addWidget(targetEnter);


        verticalLayout->addLayout(horizontalLayout);

        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName("pushButton");

        verticalLayout->addWidget(pushButton);


        retranslateUi(openscreen);

        QMetaObject::connectSlotsByName(openscreen);
    } // setupUi

    void retranslateUi(QDialog *openscreen)
    {
        openscreen->setWindowTitle(QCoreApplication::translate("openscreen", "Dialog", nullptr));
        groupBox->setTitle(QCoreApplication::translate("openscreen", "start", nullptr));
        label->setText(QCoreApplication::translate("openscreen", "Initial place", nullptr));
        label_2->setText(QCoreApplication::translate("openscreen", "Target place", nullptr));
        pushButton->setText(QCoreApplication::translate("openscreen", "Start ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class openscreen: public Ui_openscreen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OPENSCREEN_H
