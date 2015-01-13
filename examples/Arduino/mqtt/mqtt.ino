#include <SPI.h>
#include <Ethernet.h>
#include <PubSubClient.h>

byte mac[]    = {  0xDE, 0xED, 0xBA, 0xFE, 0xFE, 0xED };
byte server[] = { 192, 168, 168, 78 }; // MQTT服务地址
byte ip[]     = { 192, 168, 168, 250 }; // 设备IP

void callback(char* topic, byte* payload, unsigned int length) {
// handle message arrived
}

EthernetClient ethClient;
PubSubClient client(server, 1883, callback, ethClient);

void setup()
{
    Ethernet.begin(mac, ip);
    if (client.connect("arduinoClient")) {
        client.publish("outTopic","hello world");
        client.subscribe("inTopic");
    }
}

void loop()
{
    client.loop();
}
