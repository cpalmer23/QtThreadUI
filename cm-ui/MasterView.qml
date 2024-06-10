import QtQuick 2.15
import QtQuick.Controls 2.2
import QtQuick.Window 2.15

Window {
    width: 640
    height: 480
    visible: true
    title: qsTr("Client Management")

    Text {
        text: masterController.ui_welcomeMessage
    }


    // Connections {
    //        target: masterController.ui_navigationController
    //        onGoCreateClientView:
    // contentFrame.replace("qrc:/views/CreateClientView.qml")
    //        onGoDashboardView: contentFrame.replace("qrc:/views/DashboardView.qml")
    //        onGoEditClientView:
    // contentFrame.replace("qrc:/views/EditClientView.qml", {selectedClient:client})
    //        onGoFindClientView:
    // contentFrame.replace("qrc:/views/FindClientView.qml")
    // }

    Rectangle {
        id: navigationBar
        anchors {
            top: parent.top
            bottom: parent.bottom
            left: parent.left
        }
        width: 100
        color: "#000000"
    }

    StackView {
        id: contentFrame
        anchors {
            top: parent.top
            bottom: parent.bottom
            right: parent.right
            left: navigationBar.right
        }
        initialItem: "qrc:/views/SplashView.qml"
    }


    Component.onCompleted:
    contentFrame.replace("qrc:/views/DashboardView.qml");
}

