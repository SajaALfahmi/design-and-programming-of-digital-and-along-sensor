# design-and-programming-of-digital-and-along-sensor

This repository showcases the design, simulation, and implementation of two types of Arduino sensor systems:

- ✅ Digital Sensor – simulated using Tinkercad
- ✅ Analog Sensor – simulated in Tinkercad and implemented on real hardware

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
- **Tested using:** Tinkercad only
- **Serial Monitor:** Displays `1` (pressed) or `0` (not pressed)

### 🎥 Video:
- `digital_sensor_simulation_video.mov`

---

## 🎚️ Analog Sensor

- **Input:** Potentiometer (Analog)
- **Output:** LED with variable brightness
- **Tested using:** Tinkercad & physical circuit
- **Serial Monitor:** Displays values from `0` to `1023` based on potentiometer rotation

### 🎥 Videos:
- `analog_sensor_simulation_video.mov`
- `analog_sensor_realworld_video.mov`

---

## 🧪 Testing

Both sensors were tested using the **Serial Monitor**:
- For digital: `1` (pressed) and `0` (released)
- For analog: live analog values between `0–1023`

---

## 📁 Files

- `.ino` Arduino code files for both tasks
- Demonstration videos
