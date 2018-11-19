#include <stdio.h>
#include <stdlib.h>



void Affiche(char Chaine[])
{
    printf("%s\n",Chaine);
}

int Fact(int n)
{
    if (n==0)
    {
        return 1;
    }
    else
    {
        return n*Fact(n-1);
    }
}

void Date1()
{
    system("date");
}