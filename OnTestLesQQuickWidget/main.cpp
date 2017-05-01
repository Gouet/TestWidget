#include <QApplication>
#include <QQmlApplicationEngine>
#include <QQuickWidget>
#include <iostream>

#include "customwidget.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    qmlRegisterType<CustomWidget>("com.widget", 1, 0, "CustomWidget");

    QQmlApplicationEngine engine;

    QQuickWidget *view = new QQuickWidget();

    std::cout << view << std::endl;

    CustomWidget::__parentContainer = view;

    view->setSource(QUrl(QStringLiteral("qrc:/main.qml")));
    view->show();
    //engine.load(QUrl(QStringLiteral("qrc:/main.qml")));

    return app.exec();
}
