#include <stdio.h>
#include <stdlib.h> 

int main()
{
    int i;
    int tab[10] ; 
    int j=200;
    int *p ; 
    for (i=0;i<10;i++) 
    {
        j--;
        tab[i]=i ; 
        p = &(tab[i]) ; 
        
    }
    return 0;
}