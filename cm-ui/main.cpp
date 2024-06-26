#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <../cm-lib/mastercontroller.h>
#include <QQmlContext>

int main(int argc, char *argv[])
{
#if QT_VERSION < QT_VERSION_CHECK(6, 0, 0)
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);
#endif
    QGuiApplication app(argc, argv);

    // qmlRegisterType<cm::controllers::NavigationController>("CM", 1, 0, "NavigationController");
    qmlRegisterType<cm::controllers::MasterController>("CM", 1, 0, "MasterController");
    cm::controllers::MasterController masterController;
    QQmlApplicationEngine engine;
    engine.rootContext ()->setContextProperty("masterController", &masterController);
    //engine.load(QUrl(QStringLiteral("qrc:/views/MasterView.qml")));

    const QUrl url(QStringLiteral("qrc:/views/MasterView.qml"));
    QObject::connect(
        &engine,
        &QQmlApplicationEngine::objectCreated,
        &app,
        [url](QObject *obj, const QUrl &objUrl) {
            if (!obj && url == objUrl)
                QCoreApplication::exit(-1);
        },
        Qt::QueuedConnection);
    engine.load(url);

    return app.exec();
}
