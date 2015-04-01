#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "ngram.h"

  int main( int argc, char **argv) {
    if( argc > 1 ) {
      printf( "Użycie: %s <nazwa pliku>\n", argv[1] );
    }
    int n = atoi(argv[2]);
   printf("Program dla %d gramow!\n", n);

   listan_t lista_ngramow=read_ngram(argv[1],n);
   


  return 0;
   }

