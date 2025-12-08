#include <stdio.h>
#include <stdlib.h>

int main() {

   int scores[5];

   for (int i = 0; i < 5; i++) {
     printf("Scores: %i\n",scores[i]);
   }
}

// its dangerous to not iniatilize variables like
// this, it may reveal users passwords or pin no or some sort.
// you see remnants from unfinished programs.