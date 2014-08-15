#include "sbbadchild.h"
#include "ui_sbbadchild.h"

#include <QList>
#include <QtTest/QTest>

#include <sys/time.h>
#include <sys/resource.h>

SBBadChild::SBBadChild(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SBBadChild)
{
    ui->setupUi(this);

}

SBBadChild::~SBBadChild()
{
    delete ui;
}

void SBBadChild::on_startAllMemoryButton_clicked()
{

    int i=1;
    while(true){
        if(malloc(1024 * 1024 * 64) == NULL){
            break;
        }
        ui->plainTextEdit->setPlainText(ui->plainTextEdit->toPlainText().append(QString("%1\n").arg(i++)));
        update();
        repaint();
    }
    ui->plainTextEdit->setPlainText(ui->plainTextEdit->toPlainText().append("failed.\n"));

}

void SBBadChild::on_startAllThread_clicked()
{

}
