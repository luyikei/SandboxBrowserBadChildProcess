#include "sbbadchild.h"
#include <QApplication>
#include <QX11EmbedWidget>
#include <QVBoxLayout>
#include <QDebug>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QString windowId(a.arguments()[1]);

    QVBoxLayout* layout = new QVBoxLayout;

    QX11EmbedWidget *embed = new QX11EmbedWidget;
    embed -> setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Expanding);

    SBBadChild w;

    layout -> addWidget(&w);
    embed -> setLayout(layout);
    embed -> embedInto(windowId.toULong());
    embed -> show();

    return a.exec();
}
