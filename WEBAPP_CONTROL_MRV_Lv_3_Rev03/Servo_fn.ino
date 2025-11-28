 //-----------------------------------------------Servo1 Function--------------------------------------------------//
void M1_1() {
  pos1++;
  delay(delay_value);
  Serial.print("servo1 ");
  Serial.println(pos1);
  idektep.setPWM(servo1, 0, angleToPulse(pos1));
  if (pos1 >= 180) {
    pos1 = 180;
    idektep.setPWM(servo1, 0, angleToPulse(pos1));
  } 
}
void M1_2() {
  pos1--;
  delay(delay_value);
  Serial.print("servo1 ");
  Serial.println(pos1);
  idektep.setPWM(servo1, 0, angleToPulse(pos1));
  if (pos1 <= 0) {
    pos1 = 0;
    idektep.setPWM(servo1, 0, angleToPulse(pos1));
  }
}

//-----------------------------------------------Servo2 Function--------------------------------------------------//
void M2_1() {
  pos2--;
  delay(delay_value);
  Serial.println("servo2 ");
  Serial.println(pos2);
  idektep.setPWM(servo2, 0, angleToPulse(pos2));
  if (pos2 <= 38 ) {
    pos2 = 38; 
    idektep.setPWM(servo2, 0, angleToPulse(pos2));
  }
}
void M2_2() {
  pos2++;
  delay(delay_value);
  Serial.println("servo2 ");
  Serial.println(pos2);
  idektep.setPWM(servo2, 0, angleToPulse(pos2));
  if (pos2 >= 100 ) {
    pos2 = 100;
    idektep.setPWM(servo2, 0, angleToPulse(pos2));
  }
}

//-----------------------------------------------Servo3 Function--------------------------------------------------//
void M3_1() {
  pos3--;
  delay(delay_value);
  Serial.println("servo3 ");
  Serial.println(pos3);
  idektep.setPWM(servo3, 0, angleToPulse(pos3));
  if (pos3 <= 10) { 
    pos3 = 10;
    idektep.setPWM(servo3, 0, angleToPulse(pos3));
  }
}
void M3_2() {
  pos3++;
  delay(delay_value);
  Serial.println("servo3 ");
  Serial.println(pos3);
  idektep.setPWM(servo3, 0, angleToPulse(pos3));
  if (pos3 >= 100) {   
    pos3 = 100;
    idektep.setPWM(servo3, 0, angleToPulse(pos3));
  }
}

//-----------------------------------------------servo4 Function--------------------------------------------------//
void M4_1() {
  pos4--;
  delay(delay_value);
  Serial.println("servo4 ");
  Serial.println(pos4);
  idektep.setPWM(servo4, 0, angleToPulse(pos4));
  if (pos4 <= 30) {
    pos4 = 30;
    idektep.setPWM(servo4, 0, angleToPulse(pos4));
  }
}
void M4_2() {
  pos4++;
  delay(delay_value);
  Serial.println("servo4 ");
  Serial.println(pos4);
  idektep.setPWM(servo4, 0, angleToPulse(pos4));
  if (pos4 >= 180) {
    pos4 = 180;
    idektep.setPWM(servo4, 0, angleToPulse(pos4));
  }
}

//-----------------------------------------------servo5 Function--------------------------------------------------//
void M5_1() {
  pos5++;
  delay(delay_value);
  Serial.println("servo5 ");
  Serial.println(pos5);
  idektep.setPWM(servo5, 0, angleToPulse(pos5));
  if (pos5 >= 130) {
    pos5 = 130;
    idektep.setPWM(servo5, 0, angleToPulse(pos5));
  }
}
void M5_2() {
  pos5--;
  delay(delay_value);
  Serial.println("servo5 ");
  Serial.println(pos5);
  idektep.setPWM(servo5, 0, angleToPulse(pos5));
  if (pos5 <= 10) {
    pos5 = 10;
    idektep.setPWM(servo5, 0, angleToPulse(pos5));
  }
}