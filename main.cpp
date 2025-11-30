#include <QCoreApplication>
#include <QTimer>
#include <QTextStream>

int main(int argc, char *argv[])
{
    QCoreApplication app(argc, argv);

    QTextStream out(stdout);
    out << "Hello from Qt console program!" << Qt::endl;

    // 可选：延迟退出，方便测试 linuxdeploy
    QTimer::singleShot(1000, &app, &QCoreApplication::quit);

    return app.exec();
}