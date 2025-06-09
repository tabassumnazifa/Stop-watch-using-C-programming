# Stop-watch-using-C-programming
## 👩‍💻 Author: Nazifa Tabassum
### 📄 Description
This is a Digital Stopwatch application written in C that allows the user to input a target time (hour, minute, second), and then visually counts up from 00:00:00 to that time. It's a simple console-based application and a great project to understand loops, conditionals, and basic time functions in C.
### 🚀 Features
- Takes user input for target time.
- Displays a digital-style stopwatch in the console.
- Updates time every second using sleep() function.
- Clears the screen after each tick to simulate real-time movement.
- Compatible with both Windows and Linux systems.
### 🛠 Prerequisites
- To run this program, you need:
- A C compiler (like GCC or Turbo C)
- A terminal or IDE that supports system("cls") or clear for screen clearing
- Support for <unistd.h> (Linux) or use of Windows-native tools.
### ⚠️ Notes
- On Linux, <unistd.h> is used for sleep().
- On Windows, sleep() is replaced with Sleep(1000) from <windows.h>. You might want to modify this if you're targeting Windows specifically.
## Here's some output screenshot for better understanding:

### Taking input:
![image alt](https://github.com/tabassumnazifa/Stop-watch-using-C-programming/blob/main/inputvalue.png?raw=true)

### Working View:
![image alt](https://github.com/tabassumnazifa/Stop-watch-using-C-programming/blob/main/activity.png?raw=true)


