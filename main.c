#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "ngram.h"
#include "statistics.h"
#include "generations.h"
#include "base.h"

int main(int argc, char **argv[]) {

create_base( void **wsk, FILE *out_base);//tworzy plik bazowy(jeden ze wszystkich)
czytaj_ngramy(FILE *out, int ngram);//tworzy listę ngramów
create_matrix(lista_t ngramy);//tworzy macierz przejsc miedzy sufixami i prefixami
generate_text(lista_M matrix, FILE *out_gen, int warunek, int numbers_words, int numbers_paragraphs;//losuje na podstawie macierzy przejsć
generate_statistics(FILE *source, FILE *out);//generuje statystykę(wejściową lub wyjściową) do pliku
return 0;
}



