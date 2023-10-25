# ESP8266-DHT11-Sensor-Network-Real-time-Data-Collection-and-Local-Storage-using-RESTful-API
**Project Objective:** To engineer a robust IoT solution for real-time environmental monitoring and data-driven decision-making to improve efficiency & resource management.
## Overview
This project involved setting up a network of ESP8266 micro-controllers combined with DHT11 sensors to implement a local wireless network and custom RESTful API, to store the generated data locally in JSON format to be trained upon by AI/ML models.

## Tools & technologies used:
OS : Ubuntu
Programming Language : Python, Embedded C, Flask, SQLite.

Libraries required for API development : Flask, 

Libraries required to program ESP8266 & DHT11 : ESP8266HTTPClient.h, ESP8266WiFi.h, ArduinoJson.h, time.h, DHT.h.

Hardware required : ESP8266 Micro-controller, DHT11 Temperature and Humidity Sensor.

## Project Description
The ESP8266-DHT11 Sensor Network project aims to create a system for real-time collection of temperature and humidity data and local storage using a RESTful API. The proposed system will consist of multiple ESP8266 microcontrollers connected to DHT11 temperature and humidity sensors, which will collect data at regular intervals and transmit it to a central server.

<p align="center">

<img src ="https://github.com/Wiggledbabe06/ESP8266-DHT11-Sensor-Network-Real-time-Data-Collection-and-Local-Storage-using-RESTful-API/assets/98098708/f939902c-0cfb-439f-a728-c1fc641b8069" width="500" height = "300">

</p>
<div align="center">
  
  **Fig. Communication pathway indicating Data Flow**
</div>


RESTful API architecture will be used by the central server to receive data from the ESP8266s and store it in a local database in form of JSON file. The data will be organized using SQLite divided into various attributes and parameters such as sensor ID, Timestamp, Temperature data, Humidity, Location and Node Status allowing users to easily retrieve and analyze historical data



<p align="center">

<img src ="https://github.com/Wiggledbabe06/ESP8266-DHT11-Sensor-Network-Real-time-Data-Collection-and-Local-Storage-using-RESTful-API/assets/98098708/cacfc16b-5275-4024-a12a-9068a9469dc8" width="500" height = "300">

</p>
<div align="center">
  
 **Fig. Data flow sequence of the project**

  
</div>
## Usage

- **Environment Setup**: Ensure you have Python, Arduino IDE and the necessary libraries (flask, api, ArduinoJson.h etc.) installed. You can install required packages using `pip install -r requirement.txt`for the RESTful API. You may have to add additional Libraries manually in the Arduino IDE.

- **Code for API**: The project code is available in both Jupyter Notebook (`app.ipynb`) and Python script (`app.py`) formats.

- **Code for ESP8266**: The project code is available in .ino (`code_for_ESP8266.ino`) format to program the ESP8266 using Arduino IDE.

## Getting Started

1. Clone the project repository.
2. Connect according to the Pin connection diagram & table for the Edge Node.

<p align="center">

<img src ="https://github.com/Wiggledbabe06/ESP8266-DHT11-Sensor-Network-Real-time-Data-Collection-and-Local-Storage-using-RESTful-API/assets/98098708/781f3ec7-0d3d-4572-9e59-607f0dfeb85d" width="500" height = "300">

</p>
<div align="center">
  
  **Fig. Connection Diagram for Edge Node**

| Serial no.  | Pin of ESP8266 | Pin of DHT11 |
|:-------------: | :-------------: | :------------: |
| 1 | GPI02 | OUT |
| 2  | 3.3V  | VCC|
| 3  | GND  | GND|

**Table. Pin connections of ESP8266-DHT11**
</div>


4. Add the necessary libraries and upload code_for_ESP8266.ino to ESP8266 using Arduino IDE.
   **Remember to edit the Wifi SSID to your local network authentication key**
6. Add the following table_definition_SQLite.sql in SQLite.
<p align="center">

<img src ="https://github.com/Wiggledbabe06/ESP8266-DHT11-Sensor-Network-Real-time-Data-Collection-and-Local-Storage-using-RESTful-API/assets/98098708/650c3b80-3d6e-4821-a074-98fcc5ca8627" width="500" height = "300">

</p>
<div align="center">
  
**Fig. Table Definition in SQLite**

</div>



8. Open command prompt with  

## Contributions

Contributions, issues, and feature requests are welcome. If you find any issues or want to improve the project, please feel free to submit a pull request or open an issue.

## Acknowledgments

We would like to thank the UCI Machine Learning Repository for providing the Iris dataset, making it accessible for educational purposes.




