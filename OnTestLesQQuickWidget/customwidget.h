#ifndef CUSTOMWIDGET_H
#define CUSTOMWIDGET_H

#include <QWidget>



class CustomWidget : public QObject
{
    Q_OBJECT

public:
    CustomWidget(QObject *parent = 0);

public:
    static QWidget *__parentContainer;
};

#endif // CUSTOMWIDGET_H
