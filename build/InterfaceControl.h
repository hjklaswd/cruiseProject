#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class InterfaceControl : public QWidget
{
    Q_OBJECT

public:
    InterfaceControl(QWidget *parent = nullptr);
    ~InterfaceControl();

private:
    Ui::Widget *ui;
};
#endif // WIDGET_H
