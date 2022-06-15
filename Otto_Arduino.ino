#include <Otto.h>
Otto Otto;

int Action = 0;
int Walk = 0;
int Emotion = 0;
int Turn = 0;
int Dancing = 0;
int Block = 0

#define LeftLeg 2 // left leg pin, servo[0]
#define RightLeg 3 // right leg pin, servo[1]
#define LeftFoot 4 // left foot pin, servo[2]
#define RightFoot 5 // right foot pin, servo[3]
#define Buzzer 13 //buzzer pin

long ultrasound_distance_1() {
   long duration, distance;
   digitalWrite(9,LOW);
   delayMicroseconds(2);
   digitalWrite(9, HIGH);
   delayMicroseconds(10);
   digitalWrite(9, LOW);
   duration = pulseIn(8, HIGH);
   distance = duration/58;
   return distance;
}

double random_int(int a,int b) {
  if (a > b) {
    int c = a;
    a = b;
    b = c;
  }
  return (double) random(a,b+1);
}

void setup() {
  Otto.init(LeftLeg, RightLeg, LeftFoot, RightFoot, true, Buzzer);
Otto.home();

  pinMode(9, OUTPUT);
  pinMode(8, INPUT);
  randomSeed(analogRead(0));
    // Here is where your robot is configured, the servo pins connections and buzzer
  Otto.sing(S_happy_short);
  Otto.home();
  delay(random_int(1, 2)*1000);
  attachInterrupt(digitalPinToInterrupt(9), Block, CHANGE);
}

}

void loop() {
    if (ultrasound_distance_1() < 100) {
      Otto.sing(S_surprise);
      set Block to True
      for (int count=0 ; count<10 ; count++) {
        Otto.turn(1,1000,1); // LEFT
      }
      Otto.sing(S_superHappy);
      set Block to False
    }
    Otto.bend(1,1000,-1);
    Otto.sing(S_cuddly);
    Action = random_int(1, 7);
    if (Action == 1) {
      Walk = random_int(1, 3);
      if (Walk == 1) {
        for (int count=0 ; count<random_int(50, 600) ; count++) {
          Otto.walk(1,1000,1); // FORWARD
        }
      }
      if (Walk == 2) {
        for (int count=0 ; count<random_int(50, 600) ; count++) {
          Otto.walk(1,1000,1); // FORWARD
        }
      }
      if (Walk == 3) {
        for (int count=0 ; count<random_int(50, 600) ; count++) {
          Otto.walk(1,750,1); // FORWARD
        }
      }
      Otto.home();
    }
    if (Action == 2) {
      Emotion = random_int(1, 11);
      if (Emotion == 1) {
        Otto.sing(S_superHappy);
        Otto.playGesture(OttoSuperHappy);
        Otto.home();
      }
      if (Emotion == 2) {
        Otto.sing(S_happy);
        Otto.playGesture(OttoHappy);
        Otto.home();
      }
      if (Emotion == 3) {
        Otto.sing(S_sad);
        Otto.playGesture(OttoSad);
        Otto.home();
      }
      if (Emotion == 4) {
        Otto.sing(S_confused);
        Otto.playGesture(OttoConfused);
        Otto.home();
      }
      if (Emotion == 5) {
        Otto.sing(S_OhOoh2);
        Otto.playGesture(OttoFretful);
        Otto.home();
      }
      if (Emotion == 6) {
        Otto.sing(S_cuddly);
        Otto.playGesture(OttoLove);
        Otto.home();
      }
      if (Emotion == 7) {
        Otto.sing(S_surprise);
        Otto.playGesture(OttoAngry);
        Otto.home();
      }
      if (Emotion == 8) {
        Otto.sing(S_OhOoh2);
        Otto.playGesture(OttoMagic);
        Otto.home();
      }
      if (Emotion == 9) {
        Otto.sing(S_happy_short);
        Otto.playGesture(OttoVictory);
        Otto.home();
      }
      if (Emotion == 10) {
        Otto.sing(S_happy_short);
        Otto.playGesture(OttoVictory);
        Otto.home();
      }
      if (Emotion == 11) {
        Otto.sing(S_fart1);
        Otto.playGesture(OttoFart);
        Otto.home();
      }
    }
    if (Action == 3) {
      Turn = random_int(1, 2);
      if (Turn == 1) {
        for (int count=0 ; count<random_int(1, 5) ; count++) {
          Otto.turn(1,1000,1); // LEFT
          Otto.home();
        }
      }
      if (Turn == 2) {
        for (int count=0 ; count<random_int(1, 5) ; count++) {
          Otto.turn(1,1000,-1); // RIGHT
          Otto.home();
        }
      }
    }
    if (Action == 4) {
      Dancing = random_int(1, 15);
      if (Dancing == 1) {
        Otto.moonwalker(1, 1000, 25, 1);
        Otto.moonwalker(1, 1000, 25, -1);
      }
      if (Dancing == 2) {
        Otto.crusaito(1, 1000, 25, 1);
        Otto.crusaito(1, 1000, 25, -1);
      }
      if (Dancing == 3) {
        Otto.flapping(1, 1000, 25, 1);
        Otto.flapping(1, 1000, 25, -1);
      }
      if (Dancing == 4) {
        Otto.swing(1, 1000, 25);
      }
      if (Dancing == 5) {
        Otto.updown(1, 1000, 25);
      }
      if (Dancing == 6) {
        Otto.tiptoeSwing(1, 1000, 25);
      }
      if (Dancing == 7) {
        Otto.jitter(1, 1000, 25);
      }
      if (Dancing == 8) {
        Otto.ascendingTurn(1, 1000, 25);
      }
      if (Dancing == 9) {
        Otto.bend(1,1000,1);
      }
      if (Dancing == 10) {
        Otto.bend(1,1000,-1);
      }
      if (Dancing == 11) {
        Otto.jump(1,1000);
      }
      if (Dancing == 12) {
        Otto.shakeLeg(1,1000,-1);
      }
      if (Dancing == 13) {
        Otto.shakeLeg(1,1000,1);
      }
      if (Dancing == 14) {
        Otto.walk(1,1000,1); // FORWARD
      }
      if (Dancing == 15) {
        Otto.walk(1,1000,-1); // BACKWARD
      }
    }
    if (Action == 5) {
      Walk = random_int(1, 3);
      if (Walk == 1) {
        for (int count=0 ; count<random_int(50, 600) ; count++) {
          Otto.walk(1,1000,1); // FORWARD
        }
      }
      if (Walk == 2) {
        for (int count=0 ; count<random_int(50, 600) ; count++) {
          Otto.walk(1,1000,1); // FORWARD
        }
      }
      if (Walk == 3) {
        for (int count=0 ; count<random_int(50, 600) ; count++) {
          Otto.walk(1,750,1); // FORWARD
        }
      }
    }
    if (Action == 6) {
      Turn = random_int(1, 2);
      if (Turn == 1) {
        for (int count=0 ; count<random_int(10, 50) ; count++) {
          Otto.turn(1,1000,1); // LEFT
          continue;
        }
      }
      if (Turn == 2) {
        for (int count=0 ; count<random_int(10, 50) ; count++) {
          Otto.turn(1,1000,-1); // RIGHT
          continue;
        }
      }
    }
    if (Action == 7) {
      delay(random_int(1, 10)*1000);
    }

  if (ultrasound_distance_1() < 15) {
    Otto.sing(S_surprise);
    for (int count=0 ; count<5 ; count++) {
      Otto.turn(1,1000,1); // LEFT
    }
    Otto.sing(S_superHappy);
  }

}
