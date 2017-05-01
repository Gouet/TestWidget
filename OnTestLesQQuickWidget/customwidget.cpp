#include <QWindow>
#include <iostream>
#include "customwidget.h"

QWidget *CustomWidget::__parentContainer = NULL;

CustomWidget::CustomWidget(QWidget *parent) : QWidget(parent)
{
   // WId id = 140556470608560;
    std::cout << __parentContainer << std::endl;
    QWindow *window = QWindow::fromWinId(140556470608560);
    QWidget *widget = QWidget::createWindowContainer(window, __parentContainer);

    this->setParent(widget);
}
