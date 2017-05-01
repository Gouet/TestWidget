#ifndef CUSTOMWIDGET_H
#define CUSTOMWIDGET_H

#include <QWidget>



class CustomWidget : public QWidget
{
public:
    CustomWidget(QWidget *parent = 0);

public:
    static QWidget *__parentContainer;
};

#endif // CUSTOMWIDGET_H
