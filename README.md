# design-and-programming-of-digital-and-analog-sensor

This repository showcases the design, simulation, and implementation of two types of Arduino sensor systems:

- ✅ Digital Sensor – simulated using Tinkercad only  
- ✅ Analog Sensor – simulated in Tinkercad **and** implemented on real hardware  

---

## 📌 Summary

| Sensor Type     | Simulation | Real Hardware | Serial Monitor |
|------------------|------------|----------------|----------------|
| Digital Sensor   | ✅ Yes      | ❌ No           | ✅ Displays 1 or 0 |
| Analog Sensor    | ✅ Yes      | ✅ Yes          | ✅ Displays 0–1023 |

---

## 🔧 Digital Sensor

- **Input:** Pushbutton (Digital)
- **Output:** LED (ON/OFF)
- **Tested using:** Tinkercad simulation only  
- **Code file:** `digital.ino`  
- **Serial Monitor:** Displays `1` (pressed) or `0` (not pressed)

🎥 **Simulation Video:**  
- `digital_sensor_simulation_video.mov`

---

## 🎚️ Analog Sensor

- **Input:** Potentiometer (Analog)
- **Output:** LED with variable blinking based on analog input
- **Tested using:**  
  - ✅ Tinkercad (`analog_tinkercad.ino`)  
  - ✅ Real Arduino hardware (`analog.ino`)  
- **Serial Monitor:** Displays analog values from `0` to `1023` depending on potentiometer position

🎥 **Videos:**
- Simulation: `analog_sensor_simulation_video.mov`
- Real Hardware: `analog_sensor_realworld_video.mov`

---

## 🧪 Serial Monitor Output

Both sensors were tested using the **Serial Monitor**:

- **Digital Sensor:**  
  Outputs `1` when the button is pressed, and `0` when released.

- **Analog Sensor:**  
  Continuously outputs analog values between `0`–`1023`.

---

## 📁 File List

| File                              | Description                                      |
|-----------------------------------|--------------------------------------------------|
| `digital.ino`                     | Code for digital sensor (Tinkercad simulation)   |
| `analog_tinkercad.ino`            | Analog sensor simulation code (Tinkercad)        |
| `analog.ino`                      | Code for real-world analog sensor                |
| `digital_sensor_simulation_video.mov`   | Video of digital sensor simulation              |
| `analog_sensor_simulation_video.mov`   | Video of analog sensor in Tinkercad             |
| `analog_sensor_realworld_video.mov`    | Video of analog sensor on real hardware         |

---

## 🗓️ Date

August 2025

## 📁 Files

- `.ino` Arduino code files for both tasks
- Demonstration videos
