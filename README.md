# MSP430 Embedded Systems Project

This repository contains the source code and documentation for a modular MSP430-based embedded systems project. It demonstrates advanced concepts such as ADC/DAC, signal processing, FSM, and modular programming using abstraction layers.

---

## 📋 Project Overview

### Features
- **GPIO and Buttons**:
  - Input handling with interrupt-driven logic and debouncing.
- **LCD Integration**:
  - Displaying dynamic and static data, including voltage measurements and system states.
- **ADC/DAC**:
  - Processing analog signals, including reading, filtering, and outputting values.
- **FSM Architecture**:
  - Implementing state transitions triggered by button presses or external events.
- **Signal Processing**:
  - Measuring and displaying maximum, minimum, and average values of an analog signal dynamically.
- **Portable Design**:
  - Modular code structure for portability between MSP430x2xx and MSP430x4xx families.

---

## 🔧 How to Run

### Software Requirements
- **IAR Embedded Workbench**:
  - Use to compile and debug `.s43` assembly files.

### Hardware Requirements
- MSP430 Development Board:
  - Buttons connected to `P1.0` and `P1.1`.
  - LCD connected to `P2` for data pins and `P1.5`, `P1.6`, `P1.7` for control pins.
  - Analog signal generator connected to `P1.3`.

### Execution Steps
1. **Code Preparation**:
   - Include all `.s43` files in the IAR project.
   - Configure the hardware connections as specified.
2. **Compile and Flash**:
   - Compile the project and upload it to the MSP430 microcontroller.
3. **Test Features**:
   - Use the signal generator to provide an analog input.
   - Interact with the buttons to measure and display max, min, and average voltages.

---

## 📝 Key Concepts and Features

### Abstraction Layers
1. **BSP (Board Support Package)**:
   - Hardware-specific configuration, including GPIO, ADC, and LCD setups.
2. **HAL (Hardware Abstraction Layer)**:
   - Mid-level routines for peripheral interaction (e.g., reading ADC values, updating the LCD).
3. **API (Application Programming Interface)**:
   - High-level logic for processing data and updating the user interface.
4. **Application Layer**:
   - Implements FSM logic, signal processing, and system management.

### FSM Implementation
- **Idle State**:
  - The system enters low-power sleep mode when idle.
- **State 1**:
  - Measures and displays the minimum and maximum voltages of an analog signal dynamically on the LCD.
- **State 2**:
  - Calculates and displays the average voltage of the input signal on the LCD.

### ADC/DAC Features
- **Analog Input Handling**:
  - Configured to process sinusoidal, triangular, or square wave signals.
- **Dynamic Updates**:
  - Real-time display of signal properties without historical data accumulation.

---
