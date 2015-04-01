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

void wypelnij_ngram(ngram_t *ngr, char *prefix_r, char *sufix_r) { 
 	ngr->sufix =malloc((strlen(sufix_r)+1)*sizeof*(ngr->sufix));
	strcpy(ngr->sufix,sufix_r);
} 

listan_t read_ngram(char *nazwa_pliku, int ngram) {
    FILE *in=fopen(nazwa_pliku, "r");
    char prefix[20];
    char sufix[20];
    
    listan_t l=NULL;
    while(fscanf(in,"%s %s", prefix, sufix) == ngram) {
        listan_t nw=malloc(sizeof*nw);
        wypelnij_ngram(&(nw->ngr),prefix,sufix);
        nw->next=l;
        l=nw;
        }
        fclose(in);
        
        return l;
}

void  read_ngramy(char *nazwa_pliku, int ngram) {
    FILE *in=fopen(nazwa_pliku, "r");
    char prefix_roboczy[20];
    char sufix_roboczy[20];

    listan_t l=NULL;
    while(fscanf(in,"%s %s", prefix_roboczy, sufix_roboczy) == ngram) {
        listan_t *nw=malloc(sizeof*nw);
	ngram_t *ng=malloc(sizeof*ng);
        wypelnij_ngram(&(nw->ngr),prefix_roboczy,sufix_roboczy);
	ng=nw->ngr;
	printf("%s\n",nw->ngr->sufix);
        nw->next=l;
        l=nw;
        }
        fclose(in);
}

