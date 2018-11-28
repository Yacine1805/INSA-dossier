#include <stdio.h> 
#include <stdlib.h> 


typedef struct cellule cellule ; 
struct cellule
{
    int nombre ; 
    struct cellule *suiv ; 
} ; 


cellule * copie(cellule **liste) 
{ 
    cellule * current = *liste ; 
   
    if (current == NULL)
    {
        return NULL ; 
    }
    else
    {
        cellule * resultat = malloc (sizeof(cellule)) ; 
        resultat->nombre = current->nombre ; 
        resultat->suiv = copie(&(current->suiv)) ;  
        return resultat ; 
    }
} 



void afficher(cellule * liste)
{
    cellule * aux ; 
    if (liste == NULL)
    {
        printf("La liste est vide \n") ; 
    }
    else 
    {
        aux = liste ; 
        while(aux != NULL)
        {
            printf(" %d ->", aux->nombre) ; 
            aux = aux->suiv ; 
        }
        printf(" NULL \n") ; 
    }
}

cellule* saisie(int n , cellule *p)
{
	cellule *q;
	q = malloc(sizeof(cellule));
	q->nombre = n;
	q->suiv  = p;  
	return q ;
}

int main (int argc, char const *argv[])
{
    /* code */
    cellule * liste ; 
    cellule *liste2 ; 

    for(int i = 0 ; i<8 ; i++)
    {
        liste = saisie(i,liste) ; 
    }

    afficher(liste) ; 


    liste2 = copie(&liste) ; 

   afficher(liste2) ; 
    return 0;
}



