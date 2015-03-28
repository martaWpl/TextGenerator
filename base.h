#ifndef _NGRAM_H_
#define _NGRAM_H_

typedef struct elem { //lista prefixów
    char *slowo;
    struct elem *next;
} elem_t, *list_prefix;

typedef struct { //struktura opisująca ngram: prefix kilkuelementowy, sufix jednoelementowy
    char *sufix;
    struct elem *prefix;
    int licznik;
} ngram_t;

typedef struct elemn {//lista ngramów
    ngram_t ngr;
    struct elemn *next;
} elemn_t, *listan_t;

typedef struct node {//drzewo -możliwe sufixy
        char *slowo;
        int licznik;
        struct tree_t *left, *right;
} node_t, *tree_t;

typedef struct {//macierz przejść-dla danych prefixów zestawienie mozliwych sufixów(w postaci drzewa)
        struct elem prefix;
        node sufix;
} Matrix_t;

typedef struct elemM { //lista zawierająca wszystkie możliwości sufix-prefix
        Matrix_t pre_suf;
        lista_M *next;
}elemM_t, *listaM_t;

listan_t read_ngram(char *nazwa_pliku, int ngram);//
list_prefix insert(list_prefix l, char *slowo);//wstawianie elementu do listy prefixów
list_prefix add_l_prefix(list_prefix l, char *slowo);//dodaje na końcu prefix
list_prefix delete_l_prefix(list_prefix l); //usuwa z początku prefix
void print_l_prefix(list_prefix l, FILE *);//zapisuje listę prefixów do pliku FILE
void insert_ngram(ngram_t *ngr, struct elem *prefix, char *sufix);
void insert_Matrix(Matrix_t *matrix, struct node *sufix, struct elem *prefix);
lista_M create_matrix(listan_t ngramy);//tworzy macierz przejść
tree_t insert( tree_t t, char *slowo, int licznik );  // wstawia element do drzewa


tree_t insert( tree_t t, char *sufix) {
    if( t == NULL) {
            node_t *n=malloc(sizeof *n);
            n->slowo = sufix;
            n->left = n ->right=NULL;
            return n;

    } else if(t->licznik>licznik) {
        t->left=insert(t->left, sufix);
        return t;
    } else if(t->licznik=)

    }



//lista_t *get_ngram(lista_t *F, char *wyraz);


#endif _NGRAM_H_


