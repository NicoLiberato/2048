import QtQuick 2.4
import QtCanvas3D 1.0
import QtQuick.Layouts 1.2
import QtQuick.Controls 1.4
import QtQuick.Window 2.2


import "glcode.js" as GLCode

ApplicationWindow {
    title: qsTr("2048")
    id: game
    width: 320
    height: 340
    visible: true


    menuBar: MenuBar {
        Menu {
            title: "Game"
            MenuItem { text: "Start a new game" }
            MenuItem { text: "exit"; onTriggered: Qt.quit();}

        }

        Menu {
            title: "About"
            MenuItem { text: "About" }
            MenuItem { text: "Author"}
        }

    }


    Rectangle {
        width: 500 ; height: 600; color: "black"

        Grid {
            x: 1; y: 2
            rows: 4; columns: 4; spacing: 10


                Rectangle { objectName: "0*"; width: 70; height: 70
                    color: "lightgreen"

                    Text { text: "0"
                        font.pointSize: 30
                        anchors.centerIn: parent } }

                Rectangle { objectName: "01"; width: 70; height: 70
                    color: "lightgreen"

                    Text { text: "0"
                        font.pointSize: 30
                        anchors.centerIn: parent } }

                Rectangle { objectName: "02"; width: 70; height: 70
                    color: "lightgreen"

                    Text { text: "0"
                        font.pointSize: 30
                        anchors.centerIn: parent } }

                Rectangle { objectName: "03"; width: 70; height: 70
                    color: "lightgreen"

                    Text { text: "0"
                        font.pointSize: 30
                        anchors.centerIn: parent } }

                Rectangle { objectName: "10"; width: 70; height: 70
                    color: "lightgreen"

                    Text { text: "0"
                        font.pointSize: 30
                        anchors.centerIn: parent } }

                Rectangle { objectName: "11"; width: 70; height: 70
                    color: "lightgreen"

                    Text { text: "0"
                        font.pointSize: 30
                        anchors.centerIn: parent } }

                Rectangle { objectName: "12"; width: 70; height: 70
                    color: "lightgreen"

                    Text { text: "0"
                        font.pointSize: 30
                        anchors.centerIn: parent } }

                Rectangle { objectName: "13"; width: 70; height: 70
                    color: "lightgreen"

                    Text { text: "0"
                        font.pointSize: 30
                        anchors.centerIn: parent } }

                Rectangle { objectName: "20"; width: 70; height: 70
                    color: "lightgreen"

                    Text { text: "0"
                        font.pointSize: 30
                        anchors.centerIn: parent } }

                Rectangle { objectName: "21"; width: 70; height: 70
                    color: "lightgreen"

                    Text { text: "0"
                        font.pointSize: 30
                        anchors.centerIn: parent } }

                Rectangle { objectName: "22"; width: 70; height: 70
                    color: "lightgreen"

                    Text { text: "0"
                        font.pointSize: 30
                        anchors.centerIn: parent } }

                Rectangle { objectName: "23"; width: 70; height: 70
                    color: "lightgreen"

                    Text { text: "0"
                        font.pointSize: 30
                        anchors.centerIn: parent } }

                Rectangle { objectName: "30"; width: 70; height: 70
                    color: "lightgreen"

                    Text { text: "0"
                        font.pointSize: 30
                        anchors.centerIn: parent } }

                Rectangle { objectName: "31"; width: 70; height: 70
                    color: "lightgreen"

                    Text { text: "0"
                        font.pointSize: 30
                        anchors.centerIn: parent } }

                Rectangle { objectName: "32"; width: 70; height: 70
                    color: "lightgreen"

                    Text { text: "0"
                        font.pointSize: 30
                        anchors.centerIn: parent } }

                Rectangle { objectName: "33"; width: 70; height: 70
                    color: "lightgreen"

                    Text { text: "0"
                        font.pointSize: 30
                        anchors.centerIn: parent } }

        }
    }
/*
    Row {
        spacing: 4
        anchors.bottom: parent.horizontalCenter

        Button {
            text: "press < for left"
            //pressed: game.difficulty == 1.0
            //onClicked: { game.difficulty = 1.0 }
        }
        Button {
            text: "press > for left"
            //pressed: game.difficulty == 0.8
            onClicked: { game.difficulty = 0.8 }
        }
        Button {
            text: "press + for up"
            //pressed: game.difficulty == 0.2
            onClicked: { game.difficulty = 0.2 }
        }
        Button {
            text: "press - for down"
            //pressed: game.difficulty == 0.2
            onClicked: { game.difficulty = 0.2 }
        }

    }
*/

}
