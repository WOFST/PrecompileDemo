#ifndef MyClass_h__
#define MyClass_h__

#include "demoLib_export.h"

#include <QtWidgets/QWidget>

class DEMOLIB BaseWidget : public QWidget
{
    Q_OBJECT
public:
    BaseWidget(QWidget *parent = nullptr);
};

#endif // MyClass_h__
