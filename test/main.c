#include <stdio.h> 
#include <stdlib.h> 

// Définition d'une liste 


typedef struct cellule cellule ; 
struct cellule
{
    int nombre ; 
    struct cellule *suiv ; 
} ; 

typedef struct liste liste ; 
struct liste 
{
    cellule*premier ; 
};


//1) Parcours exhaustifs de listes
void afficher(liste * liste)
{
    cellule * aux ; 
    if (liste == NULL)
    {
        printf("La liste est nulle\n") ; 
    }
    else 
    {
        aux = liste->premier ; 
        while(aux != NULL)
        {
            printf(" %d ->", aux->nombre) ; 
            aux= aux->suiv ; 
        }
        printf(" NULL \n") ; 
    }
}

int nb_element(liste*liste) 
{
    int resultat = 0 ; 
    cellule * aux ; 
     if (liste == NULL)
        {
            printf("La liste est nulle\n") ; 
        }
    else 
    {
        aux = liste->premier ; 
        while(aux != NULL)
        {
            aux= aux->suiv ; 
            resultat = resultat + 1 ; 
        }

    }
    return resultat ; 
}

int rang_max(liste *liste)
{
    int compteur = 0 ; 
    int max = -10000000;  
    cellule * aux ; 
    int resultat = 0 ; 

    if ( liste == NULL)
    {
        printf("Liste vide \n") ; 
    }
    else 
    {
        aux = liste->premier ; 
        while(aux != NULL) 
        {
            if ( max < aux->nombre)
            {
                max = aux->nombre; 
                resultat = compteur ; 
            }
            compteur = compteur + 1 ;
            aux = aux->suiv ; 
        }
    }
    return resultat; 
}

int rang_min(liste *liste)
{
    int compteur = 0 ; 
    int min = 10000000;  
    cellule * aux ; 
    int resultat = 0 ; 

    if ( liste == NULL)
    {
        printf("Liste vide \n") ; 
    }
    else 
    {
        aux = liste->premier ; 
        while(aux != NULL) 
        {
            if ( min > aux->nombre)
            {
                min = aux->nombre; 
                resultat = compteur ; 
            }
            compteur = compteur + 1 ;
            aux = aux->suiv ; 
        }
    }
    return resultat; 
}

int somme_l(liste *liste)
{
    int somme = 0 ; 
    cellule *aux ; 
    if ( liste == NULL)
    {
        printf("Liste vide \n") ; 
    }
    else 
    {
        aux = liste->premier ; 
        while (aux != NULL) 
        {
            somme = somme + aux->nombre ; 
            aux = aux->suiv ; 
        }
    }
    return somme ; 
}

float moyenne(liste*liste)
{
    float resultat = 0.0 ; 
    resultat= somme_l(liste) / nb_element(liste) ; 
    return resultat ; 
}

//2) Parcours interrompus 
int appartenance (liste*liste,int aux) 
{
    if(liste == NULL)
    {
        printf("LISTE VIDE \n") ; 
    }
    else 
    {
        cellule * resultat ; 
        resultat = liste->premier ; 

        while( resultat != NULL )
        {
           if (resultat->nombre == aux) 
           {
              return 0; 
           }
           else
           {
               return 1 ; 
           }
            resultat = resultat->suiv ; 
        }
    }
}

//3) Copie et saisie rapide 
 


cellule* saisie(int n , liste *p)
{
	cellule *q;
	q = (cellule*)malloc(sizeof(cellule));
	q->nombre = n;
	q->suiv  = p->premier;  
	return q ;
}

 cellule * copie(cellule *liste) 
{
     cellule * resultat ; 
    if (liste==NULL)
    {
        return NULL ; 
    }
    else
    {
       
        resultat =(cellule*)malloc(sizeof(cellule));
        resultat->nombre = liste->premier->nombre ; 
        resultat->suiv = copie(liste->premier->suiv) ; 
    }
    return resultat ; 

}


int main()
{ 
    liste * liste ; 
    liste=malloc(sizeof(struct liste)) ; 
    liste->premier= saisie(4,liste) ; 
    liste->premier= saisie(3,liste) ; 
    liste->premier= saisie(2,liste) ; 
    liste->premier= saisie(1,liste) ; 
    //liste->premier = malloc(sizeof(struct cellule)) ; 
    //liste->premier->nombre = 8 ; 
    //liste->premier->suiv = malloc(sizeof(struct cellule)) ; 
    //liste->premier->suiv->nombre = 10 ; 
    afficher(liste) ; 
    //printf("Il y a %d élements dans cette liste \n", nb_element(liste)) ; 
    //printf("Le rang de l'élément le plus grand de la liste est :  %d \n", rang_max(liste)) ; 
    //printf("Le rang de l'élément le plus petit de la liste est :  %d \n", rang_min(liste)) ; 
    //printf("La somme des éléments de la liste est égale à :  %d \n", somme_l(liste)) ;
    //printf("La moyenne des éléments de la liste est égale à :  %f \n", moyenne(liste)) ;

    return 0 ; 

}