#include<stdio.h>
#include<stdlib.h>
typedef void objet;
typedef struct element {
    objet*  reference;
    struct element* suivant;

} 
element;

typedef struct {
    element* premier;
    element* dernier;
    element* courant;
    int nbElt;
    int type; 
    char* (*afficher) (objet*) ;
    int  (*comparer) (objet*, objet*) ;

}