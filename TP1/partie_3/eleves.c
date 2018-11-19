#include <stdio.h>
#include <stdlib.h>
#include "eleves.h"
#include <string.h>
void affiche_eleve(struct etudiant fiche) 
{
    printf("Nom de l'élève :  %s \n",fiche.name) ; 
    printf("Promo : %d \n", fiche.promo) ; 
} 



struct etudiant init(char nom[MAXNOM], int promo)
{
    struct etudiant resultat;
    strcpy(resultat.name,nom) ; 

    resultat.promo = promo;
    return resultat;
}
