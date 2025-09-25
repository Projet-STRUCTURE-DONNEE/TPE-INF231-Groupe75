#include<stdio.h>
int main(){
int n,i,j;
printf("entrer la taille de la matrice carrees et du vecteur:\n");
scanf("%d",&n);
int M[n][n],v[n];
//saisie de la matrice M
printf("entrer la matrice carrees\n");
for(i=0;i<n;i++){
	for(j=0;j<n;j++){
		printf("M[%d][[%d]\n",i+1,j+1);
		scanf("%d",&M[i][j]);
	}
}
//saisie du vecteur
printf("entrer les %d composants du  vecteur v :\n",n);
for(i=0;i<n;i++){    
	printf("v[%d]\n", i+1);
    scanf("%d",&v[i]);
}
//pour chaque ligne i de M on calcule le produit scalaire avec v
for(i=0;i<n;i++){
	v[i]=0;
	for (j=0;j<n;j++)
	{
		v[i]+=M[i][j]*v[j];
	}
}
//resultat de la multiplication
printf("\n resultat du produit matrice-vecteur\n");
for(i=0;i<n;i++)
{
	printf("%d",v[i] );
	if(i<n-1); printf(", ");
}
printf("\n");
return 0;
}