#include<stdio.h>
void produit_incrementer(int a,int b)
{
    int i,j,produit=0;
    for(i=0;i<b;i++)
    {
        for(j=0;j<a;j++)
        {
            produit=produit+1;
        }
    }
    printf("le produit de %d * %d = %d :",a,b,produit);
}

int main()
{
    int a,b;
    do
    {
        printf("entrer la valeur de a:");
        scanf("%d",&a);
        printf("entrer la valeur de b:");
        scanf("%d",&b);
    }while(a<0 && b<0);

    // appel de la fonction pour effectuer l'operation 
    produit_incrementer(a,b);
    
 return 0;
}