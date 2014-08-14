#include "sbbadchild.h"
#include "ui_sbbadchild.h"

#include <QList>

SBBadChild::SBBadChild(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SBBadChild)
{
    ui->setupUi(this);
    QList<qint64>list;

    while(true){
        list << (1 << 63);
    }
}

SBBadChild::~SBBadChild()
{
    delete ui;
}
