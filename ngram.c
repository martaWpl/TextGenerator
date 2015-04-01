#include <stdio.h>
#include <stdlib.h>
#include "ngram.h"
#include <string.h>

/*listan_t *get_address(listan_t *F, char *wyraz) {
    listan_t *temp;
    temp=F;
    while (temp!=NULL && (temp->ngr.prefix)!=wyraz)
        temp=temp->nast;
    return temp;
}*/

void wypelnij_ngram(ngram_t *ngr, char *prefix, char *sufix) { 
    ngr->prefix = malloc( (strlen(prefix)+1) * sizeof *(ngr->prefix) ); 
    strcpy( ngr->prefix, prefix ); 
    ngr->sufix = malloc( (strlen(sufix)+1) * sizeof *(ngr->sufix) ); 
    strcpy( ngr->sufix, sufix ); 
} 

listan_t czytaj_ngramy(char *nazwa_pliku) {
    FILE *in=fopen(nazwa_pliku, "r");
    char prefix[20];
    char sufix[20];
    
    listan_t l=NULL;
    while(fscanf(in,"%s %s", prefix, sufix) == 2) {
        listan_t nw=malloc(sizeof*nw);
        wypelnij_ngram(&(nw->ngr),prefix,sufix);
        nw->next=l;
        l=nw;
        }
        fclose(in);
        
        return l;
}


