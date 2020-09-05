# bioMech-hand

This project is about building a fully operating prosthetic hand from scratch. The aim of this project is to encourage maker movement, in the sense of creating affordable hand prosthetics solution for disabled people. 

![Alt Text](https://github.com/BatuhanYilmaz/bioMech-hand/blob/master/el-pc-video.gif)

The hand can be built with:

- x1 Arduino Nano
- x1 Myo Armband
- x5 MG90s/SG90 micro servos
- Some buttons, resistors and jumpers
- Some 3D printing material, rubber bands and fish line
- A little enthusiasm


## Design

For the ease of assembly, the design is kept as simple as possible. In the design folder, there are 7 types of parts and 20 parts in total for building a full hand.

### Parts

- IND_MID_RING_DEEP.stl

![Alt Text](https://github.com/BatuhanYilmaz/bioMech-hand/blob/master/3D%20Design%20Files/IND_MID_RING_DEEP.PNG)

- IND_MID_RING_MID.stl

![Alt Text](https://github.com/BatuhanYilmaz/bioMech-hand/blob/master/3D%20Design%20Files/IND_MID_RING_MID.PNG)

- IND_MID_RING_PINKY_TIP.stl

![Alt Text](https://github.com/BatuhanYilmaz/bioMech-hand/blob/master/3D%20Design%20Files/IND_MID_RING_PINKY_TIP.PNG)

- MAIN_BODY.stl

![Alt Text](https://github.com/BatuhanYilmaz/bioMech-hand/blob/master/3D%20Design%20Files/MAIN_BODY.PNG)

- MAIN_JOINT_LOWER.stl

![Alt Text](https://github.com/BatuhanYilmaz/bioMech-hand/blob/master/3D%20Design%20Files/MAIN_JOINT_LOWER.PNG)

- MAIN_JOINT_UPPER.stl

![Alt Text](https://github.com/BatuhanYilmaz/bioMech-hand/blob/master/3D%20Design%20Files/MAIN_JOINT_UPPER.PNG)

- PINKY_DEEP.stl

![Alt Text](https://github.com/BatuhanYilmaz/bioMech-hand/blob/master/3D%20Design%20Files/PINKY_DEEP.PNG)

- PINKY_MID.stl

![Alt Text](https://github.com/BatuhanYilmaz/bioMech-hand/blob/master/3D%20Design%20Files/PINKY_MID.PNG)

- THUMB_TIP.stl

![Alt Text](https://github.com/BatuhanYilmaz/bioMech-hand/blob/master/3D%20Design%20Files/THUMB_TIP.PNG)

## Code

To keep it simple, an Arduino Nano is used for controlling the finger movements. One can utilize other types of Arduino, or program the hand with the help of a desired board.

## Setup 

 In this project, Myo Armband will be connected to Arduino with a BLE module such as HM-10 or HM-11 and operated with [MyoBridge library](https://github.com/vroland/MyoBridge/wiki). Nevertheless, the connection cannot be established with default configuration of the BLE module.
 In order to make the hand communicate only with Myo Armband, the chip in the BLE module (CC254x) has to be programmed externally with a firmware. This tutorial will help to pair the hand and Myo Armband: [How to burn the chip to communicate with Myo Armband](https://github.com/vroland/MyoBridge/wiki/Getting-Started-with-MyoBridge-Firmware)

The connection setup will be added soon.
