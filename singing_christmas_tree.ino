#include <ASTC_notes.h>
#include <ASTC_tune.h>

/* use one or the other */
#include <ASTC_tune_jinglebells.h>
//#include <ASTC_tune_rudolph.h>

#define SING

int led_map[] = {
  7, 5, A0, A1, 11, 3, 4, 6, 9, 10, 8, 12, 13
};

void setup(void) {
  int i;
  
  /* setup the piezo output */
  pinMode(2, OUTPUT);
  
  /* setup the LED outputs */
  for (i = 0; i < sizeof(led_map) / sizeof(led_map[0]); i++) {
    pinMode(led_map[i], OUTPUT);
    digitalWrite(led_map[i], HIGH);
  }
  
  /* give a pause before singing */
  delay(1500);
}

void loop(void) {
  /* used for tone control: */
  int t, freq;
  
  /* used for LED control */
  int l, r;

#ifdef SING

  /* play the tune, one note at a time... */
  for (t = 0; t < sizeof(tune) / sizeof(tune[0]); t++) {
    
    /* when we find a note with a duration of '-1' we stop playing the tune */
    if (tune[t].duration == -1) break;
    
    /* if the octave or note are set to '-1', then we consider this to be a break */
    if (tune[t].octave != -1 && tune[t].note != -1) {
      
      /* fetch the frequency of the note... */
      freq = note[tune[t].octave][tune[t].note];
    
      /* ... if the frequency resolves to '0Hz', then we give a pause instead of a tone
         (some frequencies are out of range for the Arduino or Piezo element) */
      if (freq != 0) {
        /* play the tone... */
        tone(2, freq);
        
        /* ... and update the LEDs using a random algorithm */
        r = random(10);
        for (l = 0; l < sizeof(led_map) / sizeof(led_map[0]); l++) {
          if (random(10) < r) {
            if (digitalRead(led_map[l]) == HIGH) {
              digitalWrite(led_map[l], LOW);
            } else {
              digitalWrite(led_map[l], HIGH);
            }
          }
        }
      }
    }
    
    /* now wait for the correct duration... */
    delay(tune[t].duration);
    /* ... before stopping the tone, and advancing */
    noTone(2);
  }

#endif
  
  /* once we've finished singing, we loop forever, blinking the LEDs
     using the same random algorithm as during the tune */
  for (;;) {
    r = random(10);
    for (l = 0; l < sizeof(led_map) / sizeof(led_map[0]); l++) {
      if (random(10) < r) {
        if (digitalRead(led_map[l]) == HIGH) {
          digitalWrite(led_map[l], LOW);
        } else {
          digitalWrite(led_map[l], HIGH);
        }
      }      
    }
    
    delay(random(250,750));
  }
}
