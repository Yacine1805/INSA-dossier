#include <stdio.h>
#include <stdlib.h>


// Tableaux statiques à double dimension 

//1) Les éléments indispensables que le compilateur doit connaître pour calculer l'adresse d'un élement sont : 
// i et j , la taille d'un élement pour avancer dans la ligne et la longueur de la ligne pour avancer dans une colonne 


//2)
void saisie( int nb_ligne, int nb_colonne, int tab[nb_ligne][nb_colonne])
{
    int i ; 
    int j ; 
    for(i=0; i<nb_ligne ;i++)
    {   for(j=0;j<nb_colonne; j++) 
        {
            printf("Entrez le nombre pour la case : [%d] [%d] \n",i,j) ; 
            scanf("%d",&(tab[i][j])); 
        }
    }
        
}


//3)
void affiche( int nb_ligne, int nb_colonne,int tab[nb_ligne][nb_colonne])
{
    int i,j ;
    printf("On va afficher la matrice  : \n\n") ; 
    for(i=0; i<nb_ligne;i++)
    {   
        for(j=0;j<nb_colonne; j++) 
        {
            printf("%d  ", tab[i][j]);  

        }
        printf("\n") ; 

    }
    printf("\n") ; 

}

//4) On accède à l'élément (i,j) ... 

void saisiep(int nb_ligne, int nb_colonne, int *tab ) 
{

    int i ; 
    int j ; 
    for(i=0; i<nb_ligne; i++)
    {   for(j=0;j<nb_colonne; j++) 
        {
            printf("Entrez le nombre pour la case : [%d] [%d]:  ",i,j) ; 
            scanf("%d",tab+nb_colonne*i+j); 

        }
    }
        
}
void affiche1(int nb_ligne, int nb_colonne, int *tab)
{
    int i,j ;
    printf("On va afficher la matrice  : \n\n") ; 
    for(i=0; i<nb_ligne;i++)
    {   
        for(j=0;j<nb_colonne; j++) 
        {
            printf("%d  ", *(tab+nb_colonne*i+j));  

        }
        printf("\n") ; 

    }
    printf("\n") ; 


}




int main() 
{
    int a ,b; 
    printf("Entrez le nombre de ligne : ") ; 
    scanf("%d",&a) ; 
    printf("Entrez le nombre de colonne : ") ; 
    scanf("%d",&b) ; 
    int * tab ; 
    tab = malloc(sizeof(int)*a*b) ; 
    saisiep(a,b,tab) ; 
    affiche1(a,b,tab) ; 


    return 0 ; 
}
