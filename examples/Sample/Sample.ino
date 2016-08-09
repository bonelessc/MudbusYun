#include <MudbusYun.h>

MudbusYun Mb;

void setup() {
  delay(10000);
  Bridge.begin();
  pinMode(13, OUTPUT);
}

void loop() {
  Mb.Run(); // start MbTcp subroutine
  delay(1000);

  Mb.R[0] = 20;
  Mb.R[1] = 21;
  Mb.R[2] = 22;
  Mb.R[3] = 23;
  Mb.R[4] = 24;
  Mb.R[5] = 25;
  Mb.R[6] = 26;
  Mb.R[7] = 27;

  if   (!Mb.C[7]) {
    digitalWrite(13, HIGH);
  }
  else {
    digitalWrite(13, LOW);
  }


}
