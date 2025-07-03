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
  pos3--;
  delay(delay_value);
  Serial.println("servo2 ");
  Serial.println(pos2);
  Serial.println("servo3 ");
  Serial.println(pos3);
  idektep.setPWM(servo2, 0, angleToPulse(pos2));
  idektep.setPWM(servo3, 0, angleToPulse(pos3));  
  if (pos2 <= 10 && pos3 <= 10) {
    pos2 = 10; 
    pos3 = 10;
    idektep.setPWM(servo2, 0, angleToPulse(pos2));
    idektep.setPWM(servo3, 0, angleToPulse(pos3));
  }
}
void M2_2() {
  pos2++;
  pos3++;
  delay(delay_value);
  Serial.println("servo2 ");
  Serial.println(pos2);
  Serial.println("servo3 ");
  Serial.println(pos3);
  idektep.setPWM(servo2, 0, angleToPulse(pos2));
  idektep.setPWM(servo3, 0, angleToPulse(pos3));
  if (pos2 >= 75 && pos3 >= 120) {
    pos2 = 75;
    pos3 = 120;
    idektep.setPWM(servo2, 0, angleToPulse(pos2));
    idektep.setPWM(servo3, 0, angleToPulse(pos3));
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
  if (pos3 >= 75) {
    pos3 = 75;
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
    pos4 = 90;
    idektep.setPWM(servo4, 0, angleToPulse(pos4));
  }
}
void M4_2() {
  pos4++;
  delay(delay_value);
  Serial.println("servo4 ");
  Serial.println(pos4);
  idektep.setPWM(servo4, 0, angleToPulse(pos4));
  if (pos4 >= poscountmax) {
    pos4 = poscountmax;
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
  if (pos5 <= 0) {
    pos5 = 0;
    idektep.setPWM(servo5, 0, angleToPulse(pos5));
  }
}
