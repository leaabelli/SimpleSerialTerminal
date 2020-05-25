/********************************************************************************
** Form generated from reading UI file 'settingsdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTINGSDIALOG_H
#define UI_SETTINGSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_SettingsDialog
{
public:
    QGridLayout *gridLayout_3;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *applyButton;
    QGroupBox *parametersBox;
    QGridLayout *gridLayout_2;
    QLabel *baudRateLabel;
    QComboBox *baudRateBox;
    QLabel *dataBitsLabel;
    QComboBox *dataBitsBox;
    QLabel *parityLabel;
    QComboBox *parityBox;
    QLabel *stopBitsLabel;
    QComboBox *stopBitsBox;
    QLabel *flowControlLabel;
    QComboBox *flowControlBox;
    QGroupBox *selectBox;
    QGridLayout *gridLayout;
    QLabel *vidLabel;
    QLabel *pidLabel;
    QPushButton *pbRefresh;
    QLabel *locationLabel;
    QComboBox *serialPortInfoListBox;
    QLabel *manufacturerLabel;
    QLabel *serialNumberLabel;
    QLabel *descriptionLabel;
    QGroupBox *additionalOptionsGroupBox;
    QVBoxLayout *verticalLayout;
    QCheckBox *localEchoCheckBox;
    QCheckBox *cbAutoReconnect;
    QCheckBox *cbEnableLogging;
    QLineEdit *leLoggingFileName;

    void setupUi(QDialog *SettingsDialog)
    {
        if (SettingsDialog->objectName().isEmpty())
            SettingsDialog->setObjectName(QStringLiteral("SettingsDialog"));
        SettingsDialog->resize(351, 347);
        gridLayout_3 = new QGridLayout(SettingsDialog);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(96, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        applyButton = new QPushButton(SettingsDialog);
        applyButton->setObjectName(QStringLiteral("applyButton"));

        horizontalLayout->addWidget(applyButton);


        gridLayout_3->addLayout(horizontalLayout, 2, 0, 1, 2);

        parametersBox = new QGroupBox(SettingsDialog);
        parametersBox->setObjectName(QStringLiteral("parametersBox"));
        gridLayout_2 = new QGridLayout(parametersBox);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        baudRateLabel = new QLabel(parametersBox);
        baudRateLabel->setObjectName(QStringLiteral("baudRateLabel"));

        gridLayout_2->addWidget(baudRateLabel, 0, 0, 1, 1);

        baudRateBox = new QComboBox(parametersBox);
        baudRateBox->setObjectName(QStringLiteral("baudRateBox"));

        gridLayout_2->addWidget(baudRateBox, 0, 1, 1, 1);

        dataBitsLabel = new QLabel(parametersBox);
        dataBitsLabel->setObjectName(QStringLiteral("dataBitsLabel"));

        gridLayout_2->addWidget(dataBitsLabel, 1, 0, 1, 1);

        dataBitsBox = new QComboBox(parametersBox);
        dataBitsBox->setObjectName(QStringLiteral("dataBitsBox"));

        gridLayout_2->addWidget(dataBitsBox, 1, 1, 1, 1);

        parityLabel = new QLabel(parametersBox);
        parityLabel->setObjectName(QStringLiteral("parityLabel"));

        gridLayout_2->addWidget(parityLabel, 2, 0, 1, 1);

        parityBox = new QComboBox(parametersBox);
        parityBox->setObjectName(QStringLiteral("parityBox"));

        gridLayout_2->addWidget(parityBox, 2, 1, 1, 1);

        stopBitsLabel = new QLabel(parametersBox);
        stopBitsLabel->setObjectName(QStringLiteral("stopBitsLabel"));

        gridLayout_2->addWidget(stopBitsLabel, 3, 0, 1, 1);

        stopBitsBox = new QComboBox(parametersBox);
        stopBitsBox->setObjectName(QStringLiteral("stopBitsBox"));

        gridLayout_2->addWidget(stopBitsBox, 3, 1, 1, 1);

        flowControlLabel = new QLabel(parametersBox);
        flowControlLabel->setObjectName(QStringLiteral("flowControlLabel"));

        gridLayout_2->addWidget(flowControlLabel, 4, 0, 1, 1);

        flowControlBox = new QComboBox(parametersBox);
        flowControlBox->setObjectName(QStringLiteral("flowControlBox"));

        gridLayout_2->addWidget(flowControlBox, 4, 1, 1, 1);


        gridLayout_3->addWidget(parametersBox, 0, 1, 1, 1);

        selectBox = new QGroupBox(SettingsDialog);
        selectBox->setObjectName(QStringLiteral("selectBox"));
        gridLayout = new QGridLayout(selectBox);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        vidLabel = new QLabel(selectBox);
        vidLabel->setObjectName(QStringLiteral("vidLabel"));

        gridLayout->addWidget(vidLabel, 5, 0, 1, 1);

        pidLabel = new QLabel(selectBox);
        pidLabel->setObjectName(QStringLiteral("pidLabel"));

        gridLayout->addWidget(pidLabel, 6, 0, 1, 1);

        pbRefresh = new QPushButton(selectBox);
        pbRefresh->setObjectName(QStringLiteral("pbRefresh"));

        gridLayout->addWidget(pbRefresh, 0, 1, 1, 1);

        locationLabel = new QLabel(selectBox);
        locationLabel->setObjectName(QStringLiteral("locationLabel"));

        gridLayout->addWidget(locationLabel, 4, 0, 1, 1);

        serialPortInfoListBox = new QComboBox(selectBox);
        serialPortInfoListBox->setObjectName(QStringLiteral("serialPortInfoListBox"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(serialPortInfoListBox->sizePolicy().hasHeightForWidth());
        serialPortInfoListBox->setSizePolicy(sizePolicy);

        gridLayout->addWidget(serialPortInfoListBox, 0, 0, 1, 1);

        manufacturerLabel = new QLabel(selectBox);
        manufacturerLabel->setObjectName(QStringLiteral("manufacturerLabel"));

        gridLayout->addWidget(manufacturerLabel, 2, 0, 1, 1);

        serialNumberLabel = new QLabel(selectBox);
        serialNumberLabel->setObjectName(QStringLiteral("serialNumberLabel"));

        gridLayout->addWidget(serialNumberLabel, 3, 0, 1, 1);

        descriptionLabel = new QLabel(selectBox);
        descriptionLabel->setObjectName(QStringLiteral("descriptionLabel"));

        gridLayout->addWidget(descriptionLabel, 1, 0, 1, 1);


        gridLayout_3->addWidget(selectBox, 0, 0, 1, 1);

        additionalOptionsGroupBox = new QGroupBox(SettingsDialog);
        additionalOptionsGroupBox->setObjectName(QStringLiteral("additionalOptionsGroupBox"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(additionalOptionsGroupBox->sizePolicy().hasHeightForWidth());
        additionalOptionsGroupBox->setSizePolicy(sizePolicy1);
        additionalOptionsGroupBox->setFlat(false);
        verticalLayout = new QVBoxLayout(additionalOptionsGroupBox);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        localEchoCheckBox = new QCheckBox(additionalOptionsGroupBox);
        localEchoCheckBox->setObjectName(QStringLiteral("localEchoCheckBox"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(localEchoCheckBox->sizePolicy().hasHeightForWidth());
        localEchoCheckBox->setSizePolicy(sizePolicy2);
        localEchoCheckBox->setChecked(true);

        verticalLayout->addWidget(localEchoCheckBox);

        cbAutoReconnect = new QCheckBox(additionalOptionsGroupBox);
        cbAutoReconnect->setObjectName(QStringLiteral("cbAutoReconnect"));
        cbAutoReconnect->setChecked(true);

        verticalLayout->addWidget(cbAutoReconnect);

        cbEnableLogging = new QCheckBox(additionalOptionsGroupBox);
        cbEnableLogging->setObjectName(QStringLiteral("cbEnableLogging"));
        cbEnableLogging->setChecked(true);

        verticalLayout->addWidget(cbEnableLogging);

        leLoggingFileName = new QLineEdit(additionalOptionsGroupBox);
        leLoggingFileName->setObjectName(QStringLiteral("leLoggingFileName"));
        leLoggingFileName->setDragEnabled(true);
        leLoggingFileName->setClearButtonEnabled(true);

        verticalLayout->addWidget(leLoggingFileName);


        gridLayout_3->addWidget(additionalOptionsGroupBox, 1, 0, 1, 2);


        retranslateUi(SettingsDialog);

        QMetaObject::connectSlotsByName(SettingsDialog);
    } // setupUi

    void retranslateUi(QDialog *SettingsDialog)
    {
        SettingsDialog->setWindowTitle(QApplication::translate("SettingsDialog", "Settings", nullptr));
        applyButton->setText(QApplication::translate("SettingsDialog", "Apply", nullptr));
        parametersBox->setTitle(QApplication::translate("SettingsDialog", "Select Parameters", nullptr));
        baudRateLabel->setText(QApplication::translate("SettingsDialog", "BaudRate:", nullptr));
        dataBitsLabel->setText(QApplication::translate("SettingsDialog", "Data bits:", nullptr));
        parityLabel->setText(QApplication::translate("SettingsDialog", "Parity:", nullptr));
        stopBitsLabel->setText(QApplication::translate("SettingsDialog", "Stop bits:", nullptr));
        flowControlLabel->setText(QApplication::translate("SettingsDialog", "Flow control:", nullptr));
        selectBox->setTitle(QApplication::translate("SettingsDialog", "Select Serial Port", nullptr));
        vidLabel->setText(QApplication::translate("SettingsDialog", "Vendor ID:", nullptr));
        pidLabel->setText(QApplication::translate("SettingsDialog", "Product ID:", nullptr));
        pbRefresh->setText(QApplication::translate("SettingsDialog", "Refresh", nullptr));
        locationLabel->setText(QApplication::translate("SettingsDialog", "Location:", nullptr));
        manufacturerLabel->setText(QApplication::translate("SettingsDialog", "Manufacturer:", nullptr));
        serialNumberLabel->setText(QApplication::translate("SettingsDialog", "Serial number:", nullptr));
        descriptionLabel->setText(QApplication::translate("SettingsDialog", "Description:", nullptr));
        additionalOptionsGroupBox->setTitle(QApplication::translate("SettingsDialog", "Additional options", nullptr));
        localEchoCheckBox->setText(QApplication::translate("SettingsDialog", "Local echo", nullptr));
        cbAutoReconnect->setText(QApplication::translate("SettingsDialog", "Auto-reconnect", nullptr));
        cbEnableLogging->setText(QApplication::translate("SettingsDialog", "Enable logging", nullptr));
        leLoggingFileName->setText(QApplication::translate("SettingsDialog", "terminal.log", nullptr));
        leLoggingFileName->setPlaceholderText(QApplication::translate("SettingsDialog", "Set log file", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SettingsDialog: public Ui_SettingsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGSDIALOG_H
