# KU-IEEE Irrigation Project

This repository contains the source code and documentation for the KU IEEE Irrigation Project. All code is written and maintained using **Arduino IDE v2.3.6** with the **Espressif ESP32 plugin v3.3.2**.

This project was selected as **1 of 5 projects** from a pool of **25 proposals**, and we are grateful to **KU IEEE** for the opportunity and support that made this project possible.

**Special thanks to:**  
**Noah Hickman** and **Joe Lieber** for their major contributions and dedication to the project.

---

## Meetings
**Tuesday, 8:00 PM – 9:00 PM**  
KU LEEP 132X

---

## Parts List
- Freenove ESP32 Board  
- 12" Plant Container with Drainage Hole  
- 4× DC Motors  
- 5V 4-Channel Relay Module  
- Gravity IP65 Capacitive Soil Moisture Sensor  
- 5-Herb Seed Variety Kit  

---

## Features Under Consideration
The following components and features are still being evaluated:
- Water tank level sensor (to prevent motor damage when the tank is empty)
- Final water tank size
- 5V grow lights controlled via relay for optimized plant growth
- Additional ESP32 for future expansion (e.g., air quality, sunlight, or environmental sensors)

---

## Freenove ESP32 Board Notes
The Freenove ESP32 is less common than other ESP32 development boards and should be configured as a **generic ESP32 dev board** in the Arduino IDE.

On **Linux (Fedora 42)**, you may need to grant USB device permissions (sudo or read/write access) in order to successfully flash code to the board.

Despite these extra steps, the Freenove board offers key advantages. Its screw-terminal connections allow Dupont wires to be securely fastened, making the project more reliable and suitable for long-term use. This design choice also enables us to create a proper enclosure rather than relying on a breadboard, reducing the risk of loose connections.

As the project nears completion, **CAD files for the enclosure will be added to this repository**.
