Driving stepper motor using Arduino and Python.

# Purpose:

I made casting manufacturing product quality inspection system using computer vision. 

Project video link: https://youtu.be/4sDfwS48p0A

I have to make such mechanism that can push out defective products from assemly line. When I started to make this type of mechnism I suffer lots and search so many time on google and can't got that I wanted. This repo is for those who want make similar things like mine.


# Components:

These are components that I used,

1. Arduino Uno
2. 10.1 Kg-cm 6 wire Stepper motor
3. 12V power supply
4. 4 Male to Female and 1 Male to male jumper wire
5. L298N stepper motor driver 
5. Laptop
6. USB A-B cable

# prerequisites:

You have to find curect winding pair of your stepper motor. I have one tick for doing this without A meter.

Take only your stepper motor and choose 1 wire of motor and choose one wire from remaining wire. Touch both wire and try to rotate stepper motor with your hand. If motor rotates that wire is not pair of same windings. If motor lock and can't rotate this wire is pairs and part of same winding. do for all wires and identify same winding clustor for all wire.   
  
If you have 4 wire stepper motor you will end up with 2 pairs and if you have 6 wire stepper motor you will have 3 pairs.  
  
  But for stepper connection for this repo only need 2 pair of wire so tap out any 1 pair with wire tap seperatly make sure both wire can't touch each others.

# Step by step explanation

* Download [Arduino IDE](https://www.arduino.cc/en/Main/Software) in your laptop in case you don't have.
* Open command prompt and Clone this repo
    ```
    git clone https://github.com/ravirajsinh45/driving-stepper-motor-using-arduino-and-python.git
    

    cd driving-stepper-motor-using-arduino-and-python
    ```
* Install requirements
    ```
    pip install -r requirements.txt
    ```
    You can also make seperate vitual environment for this project.
* Connect Arduino with laptop/PC and open aduino IDE. Than open `arduino_code_for_stepper_motor` this folder and upload code into arduino.

* Now Time to some wiring stuff...

<img src='https://github.com/ravirajsinh45/driving-stepper-motor-using-arduino-and-python/blob/master/assets/circuit_diagram.jpg' >  
  
  I made connection using this diagram and my wire connection is show below. 
      
<img src='https://github.com/ravirajsinh45/driving-stepper-motor-using-arduino-and-python/blob/master/assets/circuit_image.jpeg'>  

* Do wiring exactly same as shown in figure. connect 8,9,10,11 digital pin on arduino with IN1,IN2,IN3,IN4 on stepper motor driver. and don't forget to coonect 12V power supply with driver and GND pin with arduino and stepper motor driver. 

* Open command line and open jupyter lab inside current path using following command  
    ```
    jupyter-lab
    ```
* Open `driving_motor_using_python.ipynb` this notebook and run all command.
* Your stepper motor will turn 1 Round clockwise and one round anti-clockwise.
* If your motor don't start try to read this repo carefully and check your wiring.
  
    
# Thank You







