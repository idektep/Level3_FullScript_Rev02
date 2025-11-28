void setServoHome(int& pos, int targetPos, int servo) {
  if (pos < targetPos) {
    pos++;
  } else if (pos > targetPos) {
    pos--;
  }
  idektep.setPWM(servo, 0, angleToPulse(pos));
  delay(1);  // เพิ่มเวลาหน่วงเล็กน้อยเพื่อความเสถียร
}

void HomePos() {
  Home = 1;
  if (Home == 1) {
    // ตั้งค่าตำแหน่งของเซอร์โวแต่ละตัว
    setServoHome(pos1, 90, servo1);
    setServoHome(pos2, 90, servo2);
    setServoHome(pos3, 90, servo3);
    setServoHome(pos4, 30, servo4);
    setServoHome(pos5, 10, servo5);
  }
}
