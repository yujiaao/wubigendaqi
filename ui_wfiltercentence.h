/********************************************************************************
** Form generated from reading UI file 'wfiltercentence.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WFILTERCENTENCE_H
#define UI_WFILTERCENTENCE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WfilterCentence
{
public:
    QGridLayout *gridLayout;
    QListWidget *listWidget;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_9;
    QLabel *label_select_file_name;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QLineEdit *lineEdit_fenge;
    QHBoxLayout *horizontalLayout_13;
    QLabel *label_13;
    QLineEdit *lineEdit_wordnum;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label_12;
    QRadioButton *radioButton_order_suiji;
    QRadioButton *radioButton_order_shunxu;
    QHBoxLayout *horizontalLayout_14;
    QLabel *label_14;
    QCheckBox *checkBox_dingshi;
    QHBoxLayout *horizontalLayout_11;
    QHBoxLayout *horizontalLayout_15;
    QPushButton *pushButton_addFile;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButton_send;
    QPlainTextEdit *plainTextEdit;

    void setupUi(QWidget *WfilterCentence)
    {
        if (WfilterCentence->objectName().isEmpty())
            WfilterCentence->setObjectName(QStringLiteral("WfilterCentence"));
        WfilterCentence->resize(390, 336);
        gridLayout = new QGridLayout(WfilterCentence);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        listWidget = new QListWidget(WfilterCentence);
        listWidget->setObjectName(QStringLiteral("listWidget"));

        gridLayout->addWidget(listWidget, 0, 0, 8, 1);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        label_9 = new QLabel(WfilterCentence);
        label_9->setObjectName(QStringLiteral("label_9"));

        horizontalLayout_10->addWidget(label_9);

        label_select_file_name = new QLabel(WfilterCentence);
        label_select_file_name->setObjectName(QStringLiteral("label_select_file_name"));
        label_select_file_name->setMinimumSize(QSize(130, 0));

        horizontalLayout_10->addWidget(label_select_file_name);


        gridLayout->addLayout(horizontalLayout_10, 0, 1, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_2 = new QLabel(WfilterCentence);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_3->addWidget(label_2);

        lineEdit_fenge = new QLineEdit(WfilterCentence);
        lineEdit_fenge->setObjectName(QStringLiteral("lineEdit_fenge"));
        lineEdit_fenge->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(lineEdit_fenge);


        gridLayout->addLayout(horizontalLayout_3, 1, 1, 1, 1);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName(QStringLiteral("horizontalLayout_13"));
        label_13 = new QLabel(WfilterCentence);
        label_13->setObjectName(QStringLiteral("label_13"));

        horizontalLayout_13->addWidget(label_13);

        lineEdit_wordnum = new QLineEdit(WfilterCentence);
        lineEdit_wordnum->setObjectName(QStringLiteral("lineEdit_wordnum"));
        lineEdit_wordnum->setAlignment(Qt::AlignCenter);

        horizontalLayout_13->addWidget(lineEdit_wordnum);


        gridLayout->addLayout(horizontalLayout_13, 2, 1, 1, 1);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName(QStringLiteral("horizontalLayout_12"));
        label_12 = new QLabel(WfilterCentence);
        label_12->setObjectName(QStringLiteral("label_12"));

        horizontalLayout_12->addWidget(label_12);

        radioButton_order_suiji = new QRadioButton(WfilterCentence);
        radioButton_order_suiji->setObjectName(QStringLiteral("radioButton_order_suiji"));
        radioButton_order_suiji->setChecked(false);

        horizontalLayout_12->addWidget(radioButton_order_suiji);

        radioButton_order_shunxu = new QRadioButton(WfilterCentence);
        radioButton_order_shunxu->setObjectName(QStringLiteral("radioButton_order_shunxu"));
        radioButton_order_shunxu->setChecked(true);

        horizontalLayout_12->addWidget(radioButton_order_shunxu);


        gridLayout->addLayout(horizontalLayout_12, 3, 1, 1, 1);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setObjectName(QStringLiteral("horizontalLayout_14"));
        label_14 = new QLabel(WfilterCentence);
        label_14->setObjectName(QStringLiteral("label_14"));

        horizontalLayout_14->addWidget(label_14);

        checkBox_dingshi = new QCheckBox(WfilterCentence);
        checkBox_dingshi->setObjectName(QStringLiteral("checkBox_dingshi"));
        checkBox_dingshi->setMinimumSize(QSize(130, 0));

        horizontalLayout_14->addWidget(checkBox_dingshi);


        gridLayout->addLayout(horizontalLayout_14, 4, 1, 1, 1);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));

        gridLayout->addLayout(horizontalLayout_11, 5, 1, 1, 1);

        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setObjectName(QStringLiteral("horizontalLayout_15"));
        pushButton_addFile = new QPushButton(WfilterCentence);
        pushButton_addFile->setObjectName(QStringLiteral("pushButton_addFile"));

        horizontalLayout_15->addWidget(pushButton_addFile);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_15->addItem(horizontalSpacer_2);

        pushButton_send = new QPushButton(WfilterCentence);
        pushButton_send->setObjectName(QStringLiteral("pushButton_send"));

        horizontalLayout_15->addWidget(pushButton_send);


        gridLayout->addLayout(horizontalLayout_15, 6, 1, 1, 1);

        plainTextEdit = new QPlainTextEdit(WfilterCentence);
        plainTextEdit->setObjectName(QStringLiteral("plainTextEdit"));
        plainTextEdit->setReadOnly(true);

        gridLayout->addWidget(plainTextEdit, 7, 1, 1, 1);


        retranslateUi(WfilterCentence);

        QMetaObject::connectSlotsByName(WfilterCentence);
    } // setupUi

    void retranslateUi(QWidget *WfilterCentence)
    {
        WfilterCentence->setWindowTitle(QApplication::translate("WfilterCentence", "Form", 0));
        label_9->setText(QApplication::translate("WfilterCentence", "\351\200\211\346\213\251\346\226\207\344\273\266\357\274\232", 0));
        label_select_file_name->setText(QString());
        label_2->setText(QApplication::translate("WfilterCentence", "\345\210\206\345\211\262\347\254\246\345\217\267\357\274\232", 0));
        lineEdit_fenge->setText(QApplication::translate("WfilterCentence", "[\\r\\n]+", 0));
        lineEdit_fenge->setPlaceholderText(QApplication::translate("WfilterCentence", "\344\270\272\347\251\272\345\210\231\346\214\211\347\251\272\346\240\274\345\210\206\351\232\224", 0));
        label_13->setText(QApplication::translate("WfilterCentence", "\346\230\276\347\244\272\345\217\245\346\225\260\357\274\232", 0));
        lineEdit_wordnum->setText(QApplication::translate("WfilterCentence", "1", 0));
        label_12->setText(QApplication::translate("WfilterCentence", "\346\230\276\347\244\272\351\241\272\345\272\217\357\274\232", 0));
        radioButton_order_suiji->setText(QApplication::translate("WfilterCentence", "\351\232\217\346\234\272", 0));
        radioButton_order_shunxu->setText(QApplication::translate("WfilterCentence", "\351\241\272\345\272\217", 0));
        label_14->setText(QApplication::translate("WfilterCentence", "\347\273\203\344\271\240\346\250\241\345\274\217\357\274\232", 0));
        checkBox_dingshi->setText(QApplication::translate("WfilterCentence", "\345\274\200\345\220\257", 0));
        pushButton_addFile->setText(QApplication::translate("WfilterCentence", "\346\267\273\345\212\240\346\226\207\344\273\266", 0));
        pushButton_send->setText(QApplication::translate("WfilterCentence", "\345\274\200\345\220\257\345\217\221\346\226\207", 0));
    } // retranslateUi

};

namespace Ui {
    class WfilterCentence: public Ui_WfilterCentence {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WFILTERCENTENCE_H
