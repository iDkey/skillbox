import QtQuick 2.15
        import QtQuick.Window 2.15

        Window {
        width: 640
        height: 480
        visible: true
        title: qsTr("Transition")

        Rectangle {
        id: scene
        anchors.fill: parent
        state: "initialState"

        Rectangle {
        id: leftRect
        x: 100
        y: 200
        color: "lightgrey"
        width: 100
        height: 100
        border.color: "black"
        border.width: 3
        radius: 25

        MouseArea {
        anchors.fill: parent
        onClicked: {
        ball.x += Math.random()*50 + 25
        if ((ball.x + ball.width) >= rightRect.x){
        scene.state = "initialState"
        }else {
        scene.state = "otherState"
        }


        }
        }
        }

        Rectangle {
        id: rightRect
        x: 500
        y: 200
        color: "lightgrey"
        width: 100
        height: 100
        border.color: "black"
        border.width: 3
        radius: 25

        MouseArea {
        anchors.fill: parent
        onClicked: scene.state = "initialState"
        }
        }

        Rectangle {
        id: ball
        x: leftRect.x + 5
        y: leftRect.y + 5
        color: "red"
        width: leftRect.width -10
        height: width
        border.color: "black"
        border.width: 0
        radius: width / 2
        }

        states: [
        State {
        name: "initialState"
        PropertyChanges {
        target: ball
        x: leftRect.x+5
        }
        },

        State {
        name: "otherState"
        PropertyChanges {
        target: ball
        x: ball.x
        }
        }
        ]

        transitions: [
        Transition {
        from: "otherState"
        to: "initialState"
        NumberAnimation {
        properties: "x,y"
        duration: 1000
        easing.type: Easing.OutBounce
        }

        }
        ]
        }
        }
