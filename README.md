# Zambretti Forecaster on Solar WiFi Weather Station
Based on the work of Open Green Energy.
https://www.instructables.com/id/Solar-Powered-WiFi-Weather-Station-V20/
Authors of the base code: Keith Hungerford and Debasish Dutta - Excellent work, gentlemen!

Major changes:
- simplified, restructured code (used Adafruit libraries for BME280 instead, sorry for this Keith)
- added relative pressure, dewpoint, dewpoint spread and heatindex calculations
- allow Blynk, ThingSpeak and MQTT data transmission
- redesigned box (simplified printing, less plastic usage, full snap-in)
- available languages (a big thank you to the contributors!)
  - English
  - German
  - Italian (Chak10)
  - Polish (TomaszDom)
  - Romanian (zangaby)
  - French (Ludestru)
  - Spanish (Fedecatt)
  - Turkish (Mert Sarac)
  - Dutch (Rickthefrog)
  - Norwegian (solbero)

Changes in V2.3
- included famous Zambretti forecaster (see Blynk example)
- added translation table for Zambretti forecast
- added multi language feature

Changes in V2.31
- added Dewpoint Spread
- fixed some minor things
- added Zambretti forecast in Thingspeak (thank you ThomaszDom)

Changes in V2.31 (MQTT version)
- allows to publish data to MQTT broker (alternative .ino file)

Changes in V2.32
- Battery monitoring and going to hibernate if battery low (battery protection)
- Warning text will be shown instead of Zambretti prediction if batt low

Changes in V2.33
- Corrected bug in the winter/summer adjustment for the Zambretti forecast

Changes in V2.34
- added August-Roche-Magnus approximation to automatically adjust humidity with temperature corrections
- Code cleanup

Changes in V2.34.2
- Code cleanup due to the fact that I dont need Blynk, MQTT, and Thingspeak. To have it more lightweight.
- Implemented influxDB to log into an influxDB over WiFI to visualize the data with Grafana. Thanks to FrankUlbrich for his work!
- Fixed the behavior how the Wifi Connection is established. 
- additional variable added for naming the device. 

Note: In my point of view its a security issue when the ESP8266 creates an open and unencrypted Wifi AP every time it wakes up. This should be fixed with the code. 

Note_2: Thanks a lot to all the contributors of this! Without you people this would not have been possible. 

Note_3: It seems that the new code of u3kdelta is using even less power. I used before the code of FrankUlbrich and changed it to my needs. 

Print the box yourself: https://www.thingiverse.com/thing:3551386

[![Solar Wifi Weather Station](https://github.com/3KUdelta/Solar_WiFi_Weather_Station/blob/master/IMG_2951.jpg)](https://github.com/3KUdelta/Solar_WiFi_Weather_Station)




Showing the data on a LED display: https://github.com/3KUdelta/MDparola_MQTT_monitor
[![LED matrix MQTT monitor](https://github.com/3KUdelta/MDparola_MQTT_monitor/blob/master/pictures/IMG_3180.JPG)](https://github.com/3KUdelta/MDparola_MQTT_monitor)




