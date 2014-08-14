#ifndef SBBADCHILD_H
#define SBBADCHILD_H

#include <QWidget>

namespace Ui {
class SBBadChild;
}

class SBBadChild : public QWidget
{
    Q_OBJECT

public:
    explicit SBBadChild(QWidget *parent = 0);
    ~SBBadChild();

private:
    Ui::SBBadChild *ui;
};

#endif // SBBADCHILD_H
