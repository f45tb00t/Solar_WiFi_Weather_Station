/*----------------------------------------------------------------------------------------------------
  Project Name : Solar Powered WiFi Weather Station V2.34.2
  Features: temperature, dewpoint, dewpoint spread, heat index, humidity, absolute pressure, relative pressure, battery status and
  the famous Zambretti Forecaster (multi lingual)
  Authors: Keith Hungerford, Debasish Dutta and Marc Stähli
  Website : www.opengreenenergy.com

******* configuration control constant for use of Blynk and/or Thingspeak ***/

const String App1 = "INFLUXDB";    // empty string if not applicable -> "" else "INFLUXDB"


/****** WIFI Settings ****************************************/

char ssid[] = "SSID";                           // WiFi Router ssid
char pass[] = "WIFI_PASS";             // WiFi Router password


#define INFLUXDB_HOST "123.123.123.123"          // INFLUX Server (DB) address
#define INFLUXDB_PORT 8086                    // INFLUX Server (DB) port
#define INFLUXDB_DATABASE "DBname"         // INFLUX  (DB) database
#define INFLUXDB_USER "Username"                 // INFLUX Server (DB) influx
#define INFLUXDB_PASS "Password"          // INFLUX Server (DB) password
/*********************************************************************************/


/****** Additional Settings **************************************************/

#define DEVICENAME "sws-garden"                 // Name your device e.g sws-garden

#define LANGUAGE 'DE'               //check translation.h for available languages. Currently EN/DE/FR/IT/PL/RO/SP/TR/NL/NO

#define TEMP_CORR (0)              //Manual correction of temp sensor (mine reads 1 degree too high)
#define HUMI_CORR (+4)              // not used anymore in V2.34 (automatically calculated)

#define ELEVATION (444)             //Enter your elevation in m ASL to calculate rel pressure (ASL/QNH) at your place

#define sleepTimeMin (5)           //setting of deepsleep time in minutes (default: 10)

// NTP   --> Just a remark - the program needs the time only for the timestamp, so for the Zambretti forecast
//           the timezone and the DST (Daylight Saving Time) is irrelevant. This is why I did not take care of DST 
//           in the code. I saw a fork on Github (truckershitch) which I believe has covered this.

#define NTP_SERVER      "de.pool.ntp.org"
#define TZ              1           // (utc+) TZ in hours
#define DST_MN          60          // use 60mn for summer time in some countries

#define TZ_SEC          ((TZ)*3600)  // don't change this
#define DST_SEC         ((DST_MN)*60)// don't change this
