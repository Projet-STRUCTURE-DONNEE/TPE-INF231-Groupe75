#include<stdio.h>
void test_triercroissant(int t[100],int n)
{
 int i;
 for(i=1;i<=n;i++)
 {
    if ((t[i]<t[i+1])|| (t[i]>t[i+1]))
    {
      printf("le tableau est trier ");
        
    }
    else
    {
      printf("le tableau n'est pas trier");
    }
 }
}

 // pour tester si le tableau est trier de maniere decroissante
void test_trierdecroissant(int t[100],int n)
{
 int i;
 for(i=1;i<=n;i++)
 {
    if (t[i]>t[i+1])
    {
      printf("le tableau est trier ");
        
    }
    else
    {
      printf("le tableau n'est pas trier");
    }
 }
}




// programme principale
int main()
{
    int n,i,t[100];
printf("entrer la taille du tableau :");
scanf("%d",&n);
printf("entrer les element du tableau:");
 
for(i=1;i<=n;i++)
{
  printf("\nl'element %d:",i);
  scanf("%d",&t[i]);
}

test_triercroissant(t,n);
  
 for(i=1;i<=n;i++)
 {
    printf("[%d,]",t[i]);
 }

return 0;
}