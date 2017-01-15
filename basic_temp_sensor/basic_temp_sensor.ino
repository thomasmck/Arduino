#include <OneWire.h>
#include <DallasTemperature.h>
/*-----( Declare Constants )-----*/
#define ONE_WIRE_BUS 2 /*-(Connect to Pin 2 )-*/

int temp = 0;
/*-----( Declare objects )-----*/
/* Set up a oneWire instance to communicate with any OneWire device*/
OneWire ourWire(ONE_WIRE_BUS);
/* Tell Dallas Temperature Library to use oneWire Library */
DallasTemperature sensors(&ourWire);

void setup() /*----( SETUP: RUNS ONCE )----*/
{
delay(1000);
Serial.begin(9600);
Serial.println("YourDuino.com: Electronic Brick Test Program");
Serial.println("Temperature Sensor DS18B20");
delay(1000);
sensors.begin();
}/*--(end setup )---*/

void loop() /*----( LOOP: RUNS CONSTANTLY )----*/
{
Serial.println();
sensors.requestTemperatures(); // Send the command to get temperatures
Serial.print("Device 1 (index 0) = ");
Serial.print(sensors.getTempCByIndex(0));
Serial.println(" Degrees C");
delay(1000);
}
