#ifndef MASTERCONTROLLER_H
#define MASTERCONTROLLER_H
#include <QObject>
#include "cm-lib_global.h"
#include <QString>
namespace cm {
namespace controllers {
class CMLIB_EXPORT MasterController : public QObject
{
    Q_OBJECT
    Q_PROPERTY( QString ui_welcomeMessage MEMBER welcomeMessage CONSTANT )
public:
    QString welcomeMessage = "This is MasterController to Major Tom";
    explicit MasterController(QObject* parent = nullptr);
};
}}

#endif




// #ifndef MASTERCONTROLLER_H
// #define MASTERCONTROLLER_H

// #include <QObject>
// #include <QScopedPointer>
// #include <QString>

// #include "cm-lib_global.h"
// #include "navigation-controller.h"

// namespace cm {
// namespace controllers {


// class CMLIB_EXPORT MasterController : public QObject
// {
//     Q_OBJECT
//     Q_PROPERTY ( QString ui_welcomeMessage MEMBER welcomeMessage CONSTANT )
//     Q_PROPERTY( cm::controllers::NavigationController* ui_navigationController READ navigationController CONSTANT )

// public:
//     explicit MasterController(QObject *parent = nullptr);
//     ~MasterController();
//     NavigationController* navigationController();
//     const QString& welcomeMessage() const;
//     //QString welcomeMessage = "This is MasterController to Major Tom";

// private:
//     class Implementation;
//     QScopedPointer<Implementation> implementation;

// // signals:
// };

// }}

// #endif // MASTERCONTROLLER_H
