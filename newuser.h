#ifndef NEWUSER_H
#define NEWUSER_H

#include <QWidget>

namespace Ui {
class newuser;
}

class newuser : public QWidget
{
    Q_OBJECT

public:
    explicit newuser(QWidget *parent = nullptr);
    ~newuser();

private:
    Ui::newuser *ui;
};

#endif // NEWUSER_H
