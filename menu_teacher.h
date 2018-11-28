#ifndef MENU_TEACHER_H
#define MENU_TEACHER_H

#include <QWidget>

namespace Ui {
class menu_teacher;
}

class menu_teacher : public QWidget
{
    Q_OBJECT

public:
    explicit menu_teacher(QWidget *parent = 0);
    ~menu_teacher();

private:
    Ui::menu_teacher *ui;
};

#endif // MENU_TEACHER_H
