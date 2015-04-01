#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ngram.h"

int main( int argc, char **argv ) {
  if( argc < 2 ) {
    fprintf( stderr, "Uzycie: %s <nazwa-pliku>\n", argv[0] );
    return 0;
  }

  listan_t l = czytaj_ngramy( argv[1] );


  listan_t it = l;

  while( it != NULL ) {
    printf( "%-15s %-25s \n", it->s.prefix, it->s.sufix );
    it = it->nast;
  }
  lista_t *tmp=get_address(it,Ala);
    if (tmp!=NULL) printf("%s\n",it->s.sufix);
    else printf("NULL\n");

   return 0;
}

