#include <QWindow>
#include <iostream>
#include "customwidget.h"
#include <QQuickWidget>

QWidget *CustomWidget::__parentContainer = NULL;

CustomWidget::CustomWidget(QObject *parent) : QObject(parent)
{
   // WId id = 140556470608560;
    std::cout << __parentContainer << std::endl;
    QWindow *window = QWindow::fromWinId(1639506);
    QWidget *widget = QWidget::createWindowContainer(window, __parentContainer);

    widget->move(0, 0);
    widget->setFixedSize(300, 300);

    widget->show();
}
