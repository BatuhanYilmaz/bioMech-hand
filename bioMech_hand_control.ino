#include <Servo.h>
#include <MyoBridge.h>
#include <SoftwareSerial.h>

//SoftwareSerial connection to MyoBridge
SoftwareSerial bridgeSerial(2,3);

//initialize MyoBridge object with software serial connection
MyoBridge bridge(bridgeSerial);
Servo barnak;
Servo barnak2;
Servo barnak3;
Servo barnak4;

//declare a function to handle pose data
void handlePoseData(MyoPoseData& data) {
  
  //convert pose data to MyoPose
  MyoPose pose;
  pose = (MyoPose)data.pose;
  barnak.write(0);
  barnak2.write(0);
  barnak3.write(0);
  barnak4.write(0);

  digitalWrite(LED_BUILTIN,LOW);
  if(pose==MYO_POSE_FIST || pose==MYO_POSE_WAVE_IN){
    barnak.write(180);
  barnak2.write(180);
  barnak3.write(180);
  barnak4.write(180);
 
    digitalWrite(LED_BUILTIN,HIGH);
    delay(5);
  }
  else if(pose==MYO_POSE_DOUBLE_TAP){
  barnak.write(180);
  barnak4.write(180);
  
    digitalWrite(LED_BUILTIN,HIGH);
    delay(5);
  }
  /*else if(pose==MYO_POSE_WAVE_OUT){
    barnak.write(0);
  barnak2.write(0);
  barnak3.write(0);
  barnak4.write(0);
  barnak5.write(0);
    digitalWrite(LED_BUILTIN,HIGH);
    delay(5);
  }  
  /*else if(pose==MYO_POSE_DOUBLE_TAP){
    barnak.write(0);
  barnak2.write(0);
  barnak3.write(135);
  barnak4.write(0);
  barnak5.write(180);
    digitalWrite(LED_BUILTIN,HIGH);
    delay(5);
  } */ 
  
  //print the pose
  Serial.println(bridge.poseToString(pose));
}

void setup() {
  pinMode(LED_BUILTIN,OUTPUT);
  barnak.attach(4);
  barnak2.attach(5);
  barnak3.attach(6);
  barnak4.attach(7);
  //initialize both serial connections
  Serial.begin(115200);
  bridgeSerial.begin(115200);

  //wait until MyoBridge has found Myo and is connected. Make sure Myo is not connected to anything else and not in standby!
  Serial.println("Searching for Myo...");
  bridge.begin();
  Serial.println("connected!");

  //set the function that handles pose events
  bridge.setPoseEventCallBack(handlePoseData);
  //tell the Myo we want Pose data
  bridge.enablePoseData();
  //make sure Myo is unlocked
  bridge.unlockMyo();
  
  //You have to perform the sync gesture to receive Pose data!
}

void loop() {
  //update the connection to MyoBridge
  bridge.update();

  
}
