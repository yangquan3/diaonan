##吊兰

> 吊兰是一个在线的物联网测试平台，你可以用他来测试你的物联网设备。

##源码 

``Coming Soon``

##简介 

REST示例如下所示:

    $ curl -X PUT -d '{ "dream": 1 }' \
    -H "Content-Type: application/json" \
    http://mqtt.phodal.com/topics/lettuce

    $ curl http://mqtt.phodal.com/topics/lettuce
    { "dream": 1 }

Mosquitto示例

    mosquitto_pub -h mqtt.phodal.com -d -t lettuce -m "Hello, MQTT. This is my first message."

Python MQTT示例:

    import mosquitto
    mqttc = mosquitto.Mosquitto("python_pub")
    mqttc.connect("mqtt.phodal.com", 1883, 60, True)

    mqttc.publish("lettuce", "Hello, World!")

CoAP GET示例:

    coap-client -m get coap://mqtt.phodal.com:5683/topics/zero

CoAP POST示例

    echo -n 'hello world' | coap post coap://mqtt.phodal.com/topics/zero
    echo -n '{"lettuce": 123}' | coap post coap://mqtt.phodal.com/topics/zero

让我们用MQTT, REST, CoAP做一些有趣的事!

Arduino示例见[https://gist.github.com/phodal/fd1be9ea3cc13cd48ffa](https://gist.github.com/phodal/fd1be9ea3cc13cd48ffa)


###协议支持###

 - MQTT
 - HTTP GET/POST
 - WebSocket
 - CoAP


###支持设备


- Arduino
- 8051/51 Family
- Raspberry Pi
- PCduino
- STM32
- ARM
- Android Devices
- iOS Devices
- Windows Phone Devices
- ...
