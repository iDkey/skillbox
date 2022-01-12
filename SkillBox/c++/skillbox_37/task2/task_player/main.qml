import QtQuick 2.8
import QtQuick.Window 2.0
import QtQuick.Controls 2.0

Window {
    width: 640
    height: 480
    visible: true
    title: qsTr("Hello World")

    Text {
        id: action
        text: qsTr("Turned off")
        anchors.horizontalCenter: parent.horizontalCenter
        anchors.verticalCenter: parent.verticalCenter
        anchors.horizontalCenterOffset: 0
        anchors.verticalCenterOffset: -50
        font.pointSize: 14
    }

    ProgressBar {
        id: progressBar
        from: 0
        to: 100
        anchors.horizontalCenter: parent.horizontalCenter
        anchors.verticalCenter: parent.verticalCenter

    }

    Item {
        Timer {
            id: timer_forward
            interval: 1000; running: true; repeat: true
            onTriggered: progressBar.value +=1
        }
    }
    Item {
        Timer {
            id: timer_backward
            interval: 250; running: false; repeat: true
            onTriggered: progressBar.value -=1
        }
    }
    Button {
        Text {
            id: play
            text: qsTr("Play")
            anchors.horizontalCenter: parent.horizontalCenter
            anchors.verticalCenter: parent.verticalCenter
        }
        anchors.horizontalCenter: parent.horizontalCenter
        anchors.verticalCenter: parent.verticalCenter
        anchors.horizontalCenterOffset: -200
        anchors.verticalCenterOffset: 100
        onClicked: {
            timer_forward.interval = 1000
            timer_forward.start()
            action.text = qsTr("Play")
        }
    }
    Button {
        text: "Pause"
        anchors.horizontalCenter: parent.horizontalCenter
        anchors.verticalCenter: parent.verticalCenter
        anchors.horizontalCenterOffset: -100
        anchors.verticalCenterOffset: 100
        onClicked: {
            timer_forward.stop()
            action.text = qsTr("Pause")
        }

    }
    Button {
        text: "Stop"
        anchors.horizontalCenter: parent.horizontalCenter
        anchors.verticalCenter: parent.verticalCenter
        anchors.horizontalCenterOffset: 200
        anchors.verticalCenterOffset: 100
        onClicked: {
            timer_forward.stop()
            timer_backward.stop()
            progressBar.value = 0
            action.text = qsTr("Stop")
        }
    }
    Button {
        text: "Rewind"
        anchors.horizontalCenter: parent.horizontalCenter
        anchors.verticalCenter: parent.verticalCenter
        anchors.horizontalCenterOffset: 0
        anchors.verticalCenterOffset: 100
        onClicked: {
            timer_forward.stop()
            timer_backward.start()
            action.text = qsTr("Rewind 4X")
        }
    }
    Button {
        text: "Forward"
        anchors.horizontalCenter: parent.horizontalCenter
        anchors.verticalCenter: parent.verticalCenter
        anchors.horizontalCenterOffset: 100
        anchors.verticalCenterOffset: 100
        onClicked: {
            timer_backward.stop()
            timer_forward.interval = 250
            timer_forward.start()
            action.text = qsTr("Forward 4X")
        }
    }
}
