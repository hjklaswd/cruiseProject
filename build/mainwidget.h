#ifndef MAINWIDGET_H
#define MAINWIDGET_H
#define WINDOWSTITLE "duke"
#include <QWidget>

namespace Ui {
class mainWidget;
}

class mainWidget : public QWidget
{
    Q_OBJECT

public:
    explicit mainWidget(QWidget *parent = nullptr);
    ~mainWidget();

private:
    Ui::mainWidget *ui;
};

#endif // MAINWIDGET_H
