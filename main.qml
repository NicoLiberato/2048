import QtQuick 2.4
import QtCanvas3D 1.0
import QtQuick.Layouts 1.2
import QtQuick.Controls 1.4
import QtQuick.Window 2.2
import QtQuick 2.3

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


                Rectangle { id: _00; width: 70; height: 70
                    color: "lightgreen"

                    Text { text: "0"
                        font.pointSize: 30
                        anchors.centerIn: parent } }

                Rectangle { id: _01; width: 70; height: 70
                    color: "lightgreen"

                    Text { text: "0"
                        font.pointSize: 30
                        anchors.centerIn: parent } }

                Rectangle { id: _02; width: 70; height: 70
                    color: "lightgreen"

                    Text { text: "0"
                        font.pointSize: 30
                        anchors.centerIn: parent } }

                Rectangle { id: _03; width: 70; height: 70
                    color: "lightgreen"

                    Text { text: "0"
                        font.pointSize: 30
                        anchors.centerIn: parent } }

                Rectangle { id: _10; width: 70; height: 70
                    color: "lightgreen"

                    Text { text: "0"
                        font.pointSize: 30
                        anchors.centerIn: parent } }

                Rectangle { id: _11; width: 70; height: 70
                    color: "lightgreen"

                    Text { text: "0"
                        font.pointSize: 30
                        anchors.centerIn: parent } }

                Rectangle { id: _12; width: 70; height: 70
                    color: "lightgreen"

                    Text { text: "0"
                        font.pointSize: 30
                        anchors.centerIn: parent } }

                Rectangle { id: _13; width: 70; height: 70
                    color: "lightgreen"

                    Text { text: "0"
                        font.pointSize: 30
                        anchors.centerIn: parent } }

                Rectangle { id: _20; width: 70; height: 70
                    color: "lightgreen"

                    Text { text: "0"
                        font.pointSize: 30
                        anchors.centerIn: parent } }

                Rectangle { id: _21; width: 70; height: 70
                    color: "lightgreen"

                    Text { text: "0"
                        font.pointSize: 30
                        anchors.centerIn: parent } }

                Rectangle { id: _22; width: 70; height: 70
                    color: "lightgreen"

                    Text { text: "0"
                        font.pointSize: 30
                        anchors.centerIn: parent } }

                Rectangle { id: _23; width: 70; height: 70
                    color: "lightgreen"

                    Text { text: "0"
                        font.pointSize: 30
                        anchors.centerIn: parent } }

                Rectangle { id: _30; width: 70; height: 70
                    color: "lightgreen"

                    Text { text: "0"
                        font.pointSize: 30
                        anchors.centerIn: parent } }

                Rectangle { id: _31; width: 70; height: 70
                    color: "lightgreen"

                    Text { text: "0"
                        font.pointSize: 30
                        anchors.centerIn: parent } }

                Rectangle { id: _32; width: 70; height: 70
                    color: "lightgreen"

                    Text { text: "0"
                        font.pointSize: 30
                        anchors.centerIn: parent } }

                Rectangle { id: _33; width: 70; height: 70
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
