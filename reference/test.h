#if 0

/* this file just holds a fragment of code
   if you declare an 'int led_map[]', then this loop will light each LED in turn, so that you can check your ordering */

for (;;) {
  for (l = 0; l < sizeof(led_map) / sizeof(led_map[0]); l++) {
    digitalWrite(led_map[l], LOW);
  }
  for (l = 0; l < sizeof(led_map) / sizeof(led_map[0]); l++) {
    digitalWrite(led_map[l], HIGH);
    delay(500);
  }
  delay(500);
}

#endif