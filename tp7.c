#include<stdio.h>
void inverse_tableau(int t[100],int n)
{
    int i;
    for(i=n;i>=1;i--)
    {
      printf("[%d,]",t[i]);
    }
}

int main()
{
    int n,t[100],i;
    printf("entrer la taille du tableau :");
    scanf("%d",&n);
    printf("entrer les element du tableau:");
     
    for(i=1;i<=n;i++)
    {
      printf("\nl'element %d:",i);
      scanf("%d",&t[i]);
    }
    printf("\nTableau");
    for(i=1;i<=n;i++)
    {
        printf("[%d,]",t[i]);
    }
    printf("\n L'inverse du tableau:");
    inverse_tableau(t,n);
    return 0;
    
}