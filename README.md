The Clock Awakens
=================

Using LEDs and an ESP8266 to make a smart, futuristic Star Wars clock

See [the project page](https://hackaday.io/project/7681-the-clock-awakens)
for details such as the parts list, building instructions, etc.

Uses the [Sunrise-Sunset API](http://sunrise-sunset.org/api) among others.

Setting up the environment
--------------------------

1. Set up the ESP8266 in the Arduino IDE
   ([instructions](https://github.com/esp8266/Arduino))
2. Install the [Time](https://github.com/PaulStoffregen/Time),
   [Adafruit NeoPixel](https://github.com/adafruit/Adafruit_NeoPixel),
   [WiFiManager](https://github.com/tzapu/WiFiManager), and
   [ESP8266Scheduler](https://github.com/nrwiersma/ESP8266Scheduler)
   libraries through the Library Manager
   ([instructions](https://www.arduino.cc/en/Guide/Libraries#toc3))
3. Install the
   [ESP8266FS tool](https://github.com/esp8266/arduino-esp8266fs-plugin)
   located in `lib`
   ([instructions](http://arduino.esp8266.com/versions/1.6.5-1160-gef26c5f/doc/reference.html#uploading-files-to-file-system))
4. Make the necessary changes to `src/firmware/config.h.template`
    and save them in `src/firmware/config.h`
5. Open `src/firmware/firmware.ino` in the Arduino IDE
6. Upload the sketch data by going to Tools > ESP8266 Sketch Data Upload
7. Upload the sketch to the device
