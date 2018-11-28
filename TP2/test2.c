#include <stdio.h>
#include <stdlib.h>

//1) type M = int **tab 

//3) Saisie2 
 
 void Saisie2(int nb_lignes, int nb_colonnes, int **mat)
 {
     for (int i =0; i<nb_lignes;i++)
     {
         for (int j = 0; j<nb_colonnes; j++)
         {
             printf("Veuillez entrer l'entier de coordonnées (%d,%d): ",i,j);
             scanf("%d", &(mat[i][j])); 
         }

     }
 }

  void Saisie2p(int nb_lignes, int nb_colonnes, int **mat)
 {
     int *aux ; 
     for (int i =0; i<nb_lignes;i++)
     {
         aux = *(mat+i) ; 
         for (int j = 0; j<nb_colonnes; j++)
         {
             printf("Veuillez entrer l'entier de coordonnées (%d,%d): ",i,j);
             scanf("%d",aux+j) ; 
         }

     }
 }





 void afficher(int nb_lignes, int nb_colonnes, int **mat)
 {
     for (int i =0; i<nb_lignes;i++)
     {
         
         
         for (int j = 0; j<nb_colonnes; j++)
         {
             printf(" %d ", mat[i][j]);
         }
       
         printf("\n");
     }
 }

void afficher2(int nb_lignes, int nb_colonnes, int **mat)
 {
     int *aux ; 
     for (int i =0; i<nb_lignes;i++)
     {
         aux = *(mat+i) ; 
         for (int j = 0; j<nb_colonnes; j++)
         {
             printf("  %d ",*(aux+j)); 
         }
         printf("\n") ; 

     }
 }
 
//7) 
void init(int ***mat)
{
    int nb_ligne ,nb_colonne; 
    printf("sizes %d %d %d\n", sizeof(int), sizeof(int *), sizeof(char*)) ; 
    printf("Entrez le nombre de ligne : ") ; 
    scanf("%d",&nb_ligne) ; 
    printf("Entrez le nombre de colonne : ") ; 
    scanf("%d",&nb_colonne) ; 

    *mat=malloc(nb_ligne*sizeof(int*)) ; 
    for (int i=0; i<nb_ligne; i++ )
    {
        *(*(mat)+i)= malloc(nb_colonne*sizeof(int*)); 
    }
}







int main()
{
    int **mat; 
    //2) 
    init(&mat);      
    Saisie2p(2, 2, mat);
    afficher2(2, 2, mat) ; 

    return 0 ; 
}

