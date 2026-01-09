PUSH BUTTON COUNTER
Candidate Name: Maharaja M
Selected For: Embedded Systems
Organization: Codtech IT Solutions Private Limited
Duration: 4 Weeks
Internship Period: 13 December 2025 - 10 January 2026
Intern ID: CTIS088
Mentor: Neela Santhosh

TASK DESCRIPTION:

The Push Button Counter using Arduino is a fundamental embedded systems project designed to demonstrate the interfacing of digital input devices, display modules, and microcontroller-based control logic. This task focuses on counting the number of times a push button is pressed and displaying the count value in real time on a 16×2 LCD. It helps in understanding basic concepts such as digital input handling, debouncing, LCD interfacing, and real-time data display.

In this project, an Arduino Uno is used as the main control unit. The Arduino reads the input signal from a push button, processes the signal, and updates the count value accordingly. Every time the push button is pressed, the counter value increments by one. The updated count is then displayed on a 16×2 LCD module, providing immediate visual feedback to the user.

The push button is connected to one of the digital input pins of the Arduino through a resistor, which acts either as a pull-down or pull-up resistor to ensure a stable logic level and prevent floating inputs. When the button is pressed, the digital pin detects a change in logic state, which the Arduino program interprets as a valid button press. To avoid false triggering due to mechanical bouncing of the button, a small delay or software debouncing logic is included in the program.

The LCD is interfaced with the Arduino in 4-bit mode, which reduces the number of I/O pins required while maintaining efficient data communication. Control pins such as RS and EN, along with data pins D4–D7, are connected to the Arduino’s digital pins. A potentiometer is used to adjust the contrast of the LCD, ensuring clear visibility of characters. The LCD continuously displays a label (such as “Button Count:”) along with the current count value.

Power is supplied to the entire circuit through the Arduino’s 5V and GND pins. All components are mounted on a breadboard, allowing easy connections and modifications. The Arduino program is written using the Arduino IDE, utilizing the LiquidCrystal library to control the LCD functions such as initialization, cursor positioning, and text display.

This project has practical relevance in many real-world applications. Push button counters are commonly used in digital tally systems, attendance counters, event counters, industrial machine cycle counters, and user interface controls. The simplicity of the design makes it ideal for beginners while still introducing essential embedded system concepts.

Overall, the Push Button Counter task provides hands-on experience in hardware interfacing, microcontroller programming, and real-time system behavior. It strengthens understanding of digital electronics and embedded programming, making it a strong foundation project for further exploration in automation, IoT, and control systems.
