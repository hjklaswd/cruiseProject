#ifndef WIDGET_H
#define WIDGET_H
#include <QWidget>
#include "cgetinfo.h"


QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class CInterfaceControl : public QWidget
{
    Q_OBJECT

public:
    CInterfaceControl(QWidget *parent = nullptr);
    ~CInterfaceControl();
    void Init();

private:
    Ui::Widget *ui;
    CGetInfo* m_cGetInfo;
};
#endif // WIDGET_H
