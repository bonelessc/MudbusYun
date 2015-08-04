#include <MudbusYun.h>
#include <Bridge.h>
#include <YunClient.h>
#include <YunServer.h>
#include <SPI.h>

MudbusYun Mb;

void setup() {
  delay(10000);
  Bridge.begin();
  pinMode(13, OUTPUT);
}

void loop() {
  Mb.Run(); // start MbTcp subroutine
  delay(1000);

  Mb.R[0] = 0;
  Mb.R[1] = 1;
  Mb.R[2] = 2;
  Mb.R[3] = 3;
  Mb.R[4] = 4;
  Mb.R[5] = 5;
  Mb.R[6] = 6;
  Mb.R[7] = 7;

  if   (!Mb.C[7]) {
    digitalWrite(13, HIGH);
  }
  else {
    digitalWrite(13, LOW);
  }


}
