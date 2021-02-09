#ifndef MyWidget_h__
#define MyWidget_h__

#include "demoLib/BaseWidget.h"

class MyWidget : public BaseWidget
{
    Q_OBJECT
public:
    MyWidget(QWidget *parent = nullptr);
};

#endif // MyWidget_h__
