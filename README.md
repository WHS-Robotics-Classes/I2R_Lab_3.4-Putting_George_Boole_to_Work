# 3.4-Putting George Boole to Work
## One of the fundamental concepts of robotics is decision making.  Without Boolean logic and math our systems cannot make decisions.  `for()` and `while()` loops will allow us to begin to do some interesting things.
---
### Step One: Build the Prototype
Create the following prototype on your breadboard:
![Boole prototype](https://github.com/WHS-Robotics-Classes/3.4-Putting_George_Boole_to_Work/blob/main/Boole_Circuit.PNG?raw=true)

### Step Two: Review `for()` and `while()`
Read [this reference page](https://www.arduino.cc/reference/en/language/structure/control-structure/for/) about the new function `for()` and [this reference page](https://www.arduino.cc/reference/en/language/structure/control-structure/while/) acout `while()` which we are learning.  

### Step Three: Write the Code
Let's break the sketch down into two parts.  For this assignment, you have two starter code files.  By the end, you will merge them into one file.  

1. Open the file called Starter_while.ino first.
    - Modify this code so that the while loop runs exactly three times, turns on LEDs 2, 3 and 4 in sequence and prints to the Serial Monitor as it does in the video at the bottom of the page.  For this part, refer to the `while()` loop example in the video.
    
2. Open the file called Starter_for.ino next.
    - Modify this code so that LED1 fades from off to 100% duty cycle and then back to off over the course of two seconds as in the video at the bottom of the page.  For this part, refer to the `for()` loop example in the video.

3. Combine the code by nesting the `for()` loop inside the `while()` loop.  This will create what you see below.  For this part, refer to the nested loops example in the video.

[![Boole_Video](http://img.youtube.com/vi/YLVuv-kYwoE/0.jpg)](https://www.youtube.com/watch?v=YLVuv-kYwoE "Boole Video")

### Step Four: Debug and Submit
Make sure your prototype behaves the same way as the one in the video. As in the previous assignment, make a new file here on GitHub. Name it 3.4_Boole.ino and Commit it to the repository.

REMEMBER: THIS ASSIGNMENT REQUIRES BOTH A VIDEO OF YOUR PROTOTYPE AND CODE SUBMITTED ON GITHUB
