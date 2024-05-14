# Number Processing and Output Utility

This utility is a simple C++ console application that demonstrates the use of while loops to process and output numbers and characters based on user input. It covers multiple tasks from outputting odd numbers within a range to summing even numbers and displaying ASCII characters.

## Features
- **Number Range Processing**: Input a range and see odd numbers and sum of even numbers within that range.
- **Square Numbers**: Outputs the squares of numbers from 1 to 10.
- **Sum of Squares**: Calculates the sum of squares of odd numbers within a given range.
- **Character Output**: Displays all uppercase letters from the ASCII table.

## How It Works
The program prompts the user for two integers, `firstNum` and `secondNum`, where `firstNum` should be less than `secondNum`. It then proceeds to:
- Display all odd numbers between `firstNum` and `secondNum`.
- Calculate and display the sum of all even numbers between these two numbers.
- Output squares of numbers from 1 to 10.
- Calculate and output the sum of squares of odd numbers within the given range.
- Display all uppercase ASCII letters.

## Installation
To run this program, you need a C++ compiler that supports C++11 or later. Common compilers such as GCC, Clang, or MSVC can be used.

### Steps:
1. Clone this repository or download the source file.
   ```bash
   git clone https://github.com/your-username/number-processing-utility.git
   ```
2. Navigating to the directory containing your program on a command line interface (CLI) depends on your operating system. Here’s how you can do it on Windows, macOS, and Linux:
   ### On Windows
   - **Open Command Prompt**: You can search for "cmd" in the Start menu and click on the "Command Prompt" to open it.
   - **Change Directory**: Use the `cd` (change directory) command to navigate to the directory where your program is located. For example, if your program is in a folder named "NumberUtility" on your desktop, you would type:
      ```bash
      cd Desktop\NumberUtility
      ```
   Make sure to replace "Desktop\NumberUtility" with the actual path where your program is stored.

   ### On macOS and Linux
   - **Open Terminal**: You can find the Terminal in your Applications folder under Utilities on macOS, or search for it in your applications menu on Linux.
   - **Change Directory**: Use the `cd` command just like in Windows, but the path might look slightly different. For example, if your program is in a folder named "NumberUtility" on your desktop, you would type:
      ```bash
      cd ~/Desktop/NumberUtility
      ```
   Here, `~` signifies your home directory, and paths are typically case-sensitive on macOS and Linux.

   ### General Tips for Using the `cd` Command
   - **Go to Home Directory**: Just type `cd` and press enter, or `cd ~`.
   - **Go Up One Directory**: Type `cd ..` to move up one level in the directory structure.
   - **View Directory Contents**: Before changing directories, you might want to see what's inside the current directory. You can type `dir` on Windows or `ls` on macOS and Linux to list the contents of the directory.
   
   These commands should help you navigate the filesystem in the command line interface effectively, allowing you to locate and manage your program files.
   
4. Compile the program using a C++ compiler.
   ```bash
   g++ -o NumberUtility main.cpp
   ```
5. Run the compiled executable.
   ```bash
   ./NumberUtility
   ```

## Usage
Once the program is running:
1. Enter two integers as prompted (ensure the first is less than the second).
2. View the output directly on the console.

## Contributing
Contributions to this project are welcome. You can contribute by:
- Submitting bugs and feature requests.
- Improving the efficiency of the algorithms used.
- Enhancing the functionality with additional features.

Please feel free to fork the repository and submit a pull request.

## License
This project is licensed under the CC0 1.0 Universal License - see the [LICENSE](LICENSE) file for details.

## Why This Project Exists
This C++ program was developed as a part of a school assignment aimed at demonstrating the practical use of `while` loops in solving real-world programming challenges. The detailed prompt for this assignment was to:

### Assignment Prompt
Write a C++ program that uses while loops to perform the following steps:
- Prompt the user to input two integers: firstNum and secondNum (firstNum must be less than secondNum).
- Output all odd numbers between firstNum and secondNum.
- Separate each number with a space.
- Output the sum of all even numbers between firstNum and secondNum.
- Output the numbers and their squares between 1 and 10.
- Output the sum of the square of the odd numbers between firstNum and secondNum.
- Output all uppercase letters.
- Separate each letter with a space.

The tasks associated with the prompt include:
- **Task #01**: Use of while loops.
- **Task #02**: Accept user input.
- **Task #03**: Odd number output.
- **Task #04**: Sum of even numbers output.
- **Task #05**: Output numbers 1-10 squared.
- **Task #06**: Output sum of odd numbers squared.
- **Task #07**: Output uppercase letters.

### Educational Objectives
The purpose of these tasks was to solidify the fundamentals of while loops, ensure proficiency in using basic arithmetic operations, and handle user inputs and outputs effectively. This project is also intended to serve as a resource for other students who might be faced with similar assignments, providing a reference implementation that demonstrates how to integrate multiple functionalities within a single C++ program.

By exploring this project, students can gain insights into:
- Effective use of control structures like while loops.
- Handling input and output operations in C++.
- Performing arithmetic calculations and character operations.
