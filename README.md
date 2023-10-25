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

8. Open command prompt at the destination folder, access the activate file in bin folder and start the server by typing the following command.

  <p align="center">
    
<img src ="https://github.com/Wiggledbabe06/ESP8266-DHT11-Sensor-Network-Real-time-Data-Collection-and-Local-Storage-using-RESTful-API/assets/98098708/4e93a0b2-133b-4c59-ab8d-2a2f137e6b9d" width="800" height = "300">

</p>
<div align="center">
  
**Fig. Initializing RESTful Architecture**

</div>

## Results
1. Accessing the home page using IP address.

<p align="center">
    
<img src ="https://github.com/Wiggledbabe06/ESP8266-DHT11-Sensor-Network-Real-time-Data-Collection-and-Local-Storage-using-RESTful-API/assets/98098708/958b6a1d-17ba-4fbe-a1d0-781c75d186ef" width="800" height = "300">

</p>
<div align="center">
  
**Fig. Home Page**

</div>

2. Monitoring Serial output of the ESP8266 on the Serial Monitor.

<p align="center">
    
<img src ="https://github.com/Wiggledbabe06/ESP8266-DHT11-Sensor-Network-Real-time-Data-Collection-and-Local-Storage-using-RESTful-API/assets/98098708/fb881cef-af74-4ffb-9f15-fde2b57a7794" width="800" height = "300">

</p>
<div align="center">
  
**Fig. Serial Monitor Output**

</div>


3. Continous Data logging into SQLite with Accurate Time Stamp.

<p align="center">
    
<img src ="https://github.com/Wiggledbabe06/ESP8266-DHT11-Sensor-Network-Real-time-Data-Collection-and-Local-Storage-using-RESTful-API/assets/98098708/bf04aab5-7fb7-4773-82e0-0cf1a8e9434c" width="800" height = "300">

</p>
<div align="center">
  
**Fig. Data logging preview**

</div>




4. Data can be filtered using Unique key (Serial no.)

<p align="center">
    
<img src ="https://github.com/Wiggledbabe06/ESP8266-DHT11-Sensor-Network-Real-time-Data-Collection-and-Local-Storage-using-RESTful-API/assets/98098708/4e228fb9-ee38-4dbe-9f1a-34ea2ad85f4c" width="800" height = "300">

</p>
<div align="center">
  
**Fig. Filtering Data Using Unique Key**

</div>




5. Accessing data using IP address on the Web browser.
<p align="center">
    
<img src ="https://github.com/Wiggledbabe06/ESP8266-DHT11-Sensor-Network-Real-time-Data-Collection-and-Local-Storage-using-RESTful-API/assets/98098708/7564b71e-53be-47c6-b142-11f33a888710" width="800" height = "1200">

</p>
<div align="center">
  
**Fig. Accessing Data from Web browser**

</div>





## Conclusion
The ESP8266-DHT11 Sensor Network project has a wide range of applications, including environmental monitoring, smart home automation, and industrial process control. It showcases the power of IoT devices and demonstrates the potential for integrating multiple sensors into a cohesive system for data collection and analysis.

RESTful APIs are widely used in web and mobile applications as they provide a standardized approach to data exchange and integration between different systems. They are also scalable, flexible, and easy to maintain, making them a popular choice for building modern web applications.

## Future scope

Implementation of ESP8266-DHT11 Sensor Network: Real-time Data Collection and Local Storage using RESTful API can be further integrated with the cloud to create and train AI/ML models from the data collected to predict the future ambient temperature and humidity of an environmental setting. More nodes can be added with a status table reporting the activity of each node and their current status. Nodes can be made to run in a sleep wake cycle to ensure longer battery life and minimize unnecessary data collection. Due to the dynamic nature of ESP8266 various other sensors can be integrated to collect data regarding various parameters and make actionable insights for the application. HTTP get request can be used to command ESP8266 to actuate certain tasks. 

## Contributions

Contributions, issues, and feature requests are welcome. If you find any issues or want to improve the project, please feel free to submit a pull request or open an issue.





