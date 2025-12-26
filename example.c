#include <stdio.h>
#include "cudec.h"


int main()
{
  char *samples[] = {
    "Κνωσός", "\u5317\u4EAC", "kožušček",
    "30 \U0001d5c4\U0001d5c6/\U0001d5c1",
    "Привет, как дела?",
    "Καλή μέρα! Πώς σε λένε",
    "Bûche à Noël au balcon, Pâques aux tisons."
  };
  char dst[256];
  int i;
  
  cudec_init();

  for (i = 0; i < sizeof(samples)/sizeof(samples[0]); ++i) {
    printf ("%s => %s\n", samples[i], cudec_xlat (samples[i], dst));
  }
  
  return 0;
}
