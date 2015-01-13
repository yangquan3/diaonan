import mosquitto
mqttc = mosquitto.Mosquitto("python_pub")
mqttc.connect("mqtt.phodal.com", 1883, 60, True)

mqttc.publish("lettuce", "Hello, World!")