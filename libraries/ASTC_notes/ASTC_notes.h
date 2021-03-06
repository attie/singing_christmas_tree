#ifndef ASTC_NOTES_H
#define ASTC_NOTES_H

/* The Arduino tone() function can't generate frequencies below ~32 Hz
   The piezo element tops out at ~5.8kHz */

#define NOTE_C  0
#define NOTE_Cs 1
#define NOTE_D  2
#define NOTE_Eb 3
#define NOTE_E  4
#define NOTE_F  5
#define NOTE_Fs 6
#define NOTE_G  7
#define NOTE_Gs 8
#define NOTE_A  9
#define NOTE_Bb 10
#define NOTE_B  11

int note[9][12] = {
  { /* octave 0 */
    0, /* C  = 32.70 */
    0, /* C# = 34.65 */
    0, /* D  = 36.71 */
    0, /* Eb = 38.89 */
    0, /* E  = 41.20 */
    0, /* F  = 43.65 */
    0, /* F# = 46.25 */
    0, /* G  = 49.00 */
    0, /* G# = 51.91 */
    0, /* A  = 55.00 */
    0, /* Bb = 58.27 */
    0, /* B  = 61.74 */
  },
  { /* octave 1 */
    33, /* C  = 32.70 */
    35, /* C# = 34.65 */
    37, /* D  = 36.71 */
    39, /* Eb = 38.89 */
    41, /* E  = 41.20 */
    44, /* F  = 43.65 */
    46, /* F# = 46.25 */
    49, /* G  = 49.00 */
    52, /* G# = 51.91 */
    55, /* A  = 55.00 */
    58, /* Bb = 58.27 */
    62, /* B  = 61.74 */
  },
  { /* octave 2 */
    65,  /* C  = 65.41 */
    69,  /* C# = 69.30 */
    73,  /* D  = 73.42 */
    78,  /* Eb = 77.78 */
    82,  /* E  = 82.41 */
    87,  /* F  = 87.31 */
    93,  /* F# = 92.50 */
    98,  /* G  = 98.00 */
    104, /* G# = 103.8 */
    110, /* A  = 110.0 */
    117, /* Bb = 116.5 */
    124, /* B  = 123.5 */
  },
  { /* octave 3 */
    131, /* C  = 130.8 */
    139, /* C# = 138.6 */
    147, /* D  = 146.8 */
    156, /* Eb = 155.6 */
    165, /* E  = 164.8 */
    175, /* F  = 174.6 */
    185, /* F# = 185.0 */
    196, /* G  = 196.0 */
    208, /* G# = 207.7 */
    220, /* A  = 220.0 */
    233, /* Bb = 233.1 */
    248, /* B  = 246.9 */
  },
  { /* octave 4 */
    262, /* C  = 261.6 */
    277, /* C# = 277.2 */
    294, /* D  = 293.7 */
    311, /* Eb = 311.1 */
    330, /* E  = 329.6 */
    349, /* F  = 349.2 */
    370, /* F# = 370.0 */
    392, /* G  = 392.0 */
    415, /* G# = 415.3 */
    440, /* A  = 440.0 */
    466, /* Bb = 466.2 */
    494, /* B  = 493.9 */
  },
  { /* octave 5 */
    523, /* C  = 523.3 */
    554, /* C# = 554.4 */
    587, /* D  = 587.3 */
    622, /* Eb = 622.3 */
    659, /* E  = 659.3 */
    699, /* F  = 698.5 */
    740, /* F# = 740.0 */
    784, /* G  = 784.0 */
    831, /* G# = 830.6 */
    880, /* A  = 880.0 */
    932, /* Bb = 932.3 */
    988, /* B  = 987.8 */
  },
  { /* octave 6 */
    1047, /* C  */
    1109, /* C# */
    1175, /* D  */
    1245, /* Eb */
    1319, /* E  */
    1397, /* F  */
    1480, /* F# */
    1568, /* G  */
    1661, /* G# */
    1760, /* A  */
    1865, /* Bb */
    1976, /* B  */
  },
  { /* octave 7 */
    2093, /* C  */
    2217, /* C# */
    2349, /* D  */
    2489, /* Eb */
    2637, /* E  */
    2794, /* F  */
    2960, /* F# */
    3136, /* G  */
    3322, /* G# */
    3520, /* A  */
    3729, /* Bb */
    3951, /* B  */
  },
  { /* octave 8 */
    4186, /* C  */
    4435, /* C# */
    4699, /* D  */
    4978, /* Eb */
    5274, /* E  */
    5588, /* F  */
    0,    /* F# = 5920 */
    0,    /* G  = 6272 */
    0,    /* G# = 6645 */
    0,    /* A  = 7040 */
    0,    /* Bb = 7459 */
    0,    /* B  = 7902 */
  }
};

#endif /* ASTC_NOTES_H */