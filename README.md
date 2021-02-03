# 3.3-Utilizing_analogWrite
## For this assignment you will be working with a new function, `analogWrite()`.  Unlike `digitalWrite()` which only has two possible power settings for an output pin, `analogWrite()` allows us to use an 8-bit value for power control (up to 256 possible variations).  While this is not a true analog power signal, it can be uesd to imitate analog controls.
---
### Step One: Build the Prototype
Create the following prototype on your breadboard:
![analogWrite()_prototype](https://github.com/WHS-Robotics-Classes/3.3-Utilizing_analogWrite/blob/main/analogWrite_prototype.PNG?raw=true)

### Step Two: Review `analogWrite()`
Read [this reference page](https://www.arduino.cc/reference/en/language/functions/analog-io/analogwrite/) about the new function we are learning.  Pay attention to the difference between `digitalWrite()` and `analogWrite()` (What is the primary difference in the code and which pins may be used with this function?)

### Step Three: Write the Code
Write a sketch that makes the lights on your breadboard alternate continuously between three levels of light.  
- Red LED
  - full power
  - one second delay
  - 40% power
  - one second delay
  - 0% power
  - one second delay
- Green LED (repeat the cycle)
- Blue LED (repeat the cycle)

Repeat this forever.

There is some starter code above to help.

See the video here for an example: 

[![Lab 3.3 Prototype](http://img.youtube.com/vi/riyNHcp8Qs4/0.jpg)](https://www.youtube.com/watch?v=riyNHcp8Qs4 "Lab 3.3 Prototype")

### Step Four: Debug and Submit
Make sure your prototype behaves the same way as the one in the video. As in the previous assignment, make a new file here on GitHub. Name it 3.3_Utilizing_analogWrite.ino and Commit it to the repository.

REMEMBER: THIS ASSIGNMENT REQUIRES BOTH A VIDEO OF YOUR PROTOTYPE AND CODE SUBMITTED ON GITHUB
