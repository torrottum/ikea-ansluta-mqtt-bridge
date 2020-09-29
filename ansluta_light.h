#include "esphome.h"

class Ansluta : public Component, public CustomMQTTDevice
{
private:
  Radio *radio = new Radio();

public:
  void setup() override
  {
    radio->setup();
  }

  void loop()
  {
    radio->readPacket();

    delay(100);
  }
};
