#include<stdio.h>
#include <stdbool.h>
void recherche_sequentiel(int x,int t[],int n)
{
    int i;
    bool trouve;
    trouve=false;
    i=1;
    while(trouve=false && i<=n)
    {
        if (t[i]=x)
        {
            trouve=true;
        }
        else 
        {
            i=i+1;
        }
    }
    if(trouve=true)
    {
        printf("l'element %d se trouve a la position %d",x,t[i]);
    }
    else
    {
        printf("l'element chercher ne se trouve pas dans le tableau");
    }
}

// fonction principale

int main()
{
    int t[100],n,i,x;
    printf("entrer la taille du tableau :");
    scanf("%d",&n);
    printf("entrer les element du tableau:");

    for(i=1;i<=n;i++)
    {
      printf("\nl'element %d:",i);
      scanf("%d",&t[i]);
    }
    printf("entrer l'element a rechercher :");
    scanf("%d",&x);
  
    // appel de la fonction
    recherche_sequentiel(x,t,n);
 return 0;
}