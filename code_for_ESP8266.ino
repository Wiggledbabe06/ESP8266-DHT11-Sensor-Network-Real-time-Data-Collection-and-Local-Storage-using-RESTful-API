#include <ESP8266HTTPClient.h>
#include <ESP8266WiFi.h>
#include <ArduinoJson.h>
#include "time.h"
#include "DHT.h"

char jsonOutput[128];

#define DHT11PIN 4
DHT dht(DHT11PIN, DHT11);

const char* ntpServer = "pool.ntp.org";
const long  gmtOffset_sec = 19800;
const int   daylightOffset_sec = 0;

void setup() {
 
  Serial.begin(115200);                 //Serial connection
  delay(4000);
  WiFi.begin("HOME_1", "12345678");   //WiFi connection
  
  while (WiFi.status() != WL_CONNECTED) {  //Wait for the WiFI connection completion
 
    delay(500);
    Serial.println("Waiting for connection");
 
  }
   Serial.println("Connected to the WiFi network");
   configTime(gmtOffset_sec, daylightOffset_sec, ntpServer);
   dht.begin();
}
 
void loop() 
{
 

  float humi = dht.readHumidity();
  float temp = dht.readTemperature();
  String time = printLocalTime();
  String stemp = (String)temp;
  String shumi = (String)humi;

  if (WiFi.status() == WL_CONNECTED) { //Check WiFi connection status
    WiFiClient client;
    HTTPClient http;    //Declare object of class HTTPClient
    http.setTimeout(10000);
    
    http.begin(client,"http://192.168.38.140:5000/api/DHT11_data");  //Specify destination for HTTP request
    http.addHeader("Content-Type", "application/json");             //Specify content-type header
    
    const size_t CAPACITY = JSON_OBJECT_SIZE(1);
    StaticJsonDocument<CAPACITY> doc;

    JsonObject object = doc.to<JsonObject>();
    object["Time_Stamp"] = (String)time;
    object["Temperature"] = (String)stemp;
    object["Humidity"] = (String)shumi;
    
    serializeJson(doc,jsonOutput);
    
    int httpres = http.GET();
    Serial.println("Get reponse code : ")
    Serial.println(httpres);
    int httpResponseCode = http.POST(jsonOutput);   //Send the actual POST request
      //Send the request
    if(httpResponseCode>0){
      
        String response = http.getString();                       //Get the response to the request
        Serial.println("Post sent Succesfully");   //Print return code
        Serial.println(httpResponseCode);           //Print request answer
   }
   else
   {
    Serial.print("Error on sending get: ");
    Serial.println(httpResponseCode);
   }
   http.end();  //Free resources
  }
 else
 {
    Serial.println("Error in WiFi connection");   
 }
  delay(10000);  //Send a request every 10 seconds
}

String printLocalTime()
{
  struct tm timeinfo;
  if(!getLocalTime(&timeinfo))
  {
    Serial.println("Failed to obtain time");
    return "";
  }

  char timeHour[3];
  strftime(timeHour,3, "%H", &timeinfo);
  char time1[10];
  strftime(time1,10, "%A", &timeinfo);
  char timeMinutes[4];
  strftime(timeMinutes,3, "%M", &timeinfo);
  char timeSeconds[3];
  strftime(timeSeconds,3, "%S", &timeinfo);
 
  String ctime;
  ctime = (String) strcat(strcat(time1,timeHour),strcat(timeMinutes,timeSeconds));
  
  return ctime;
}