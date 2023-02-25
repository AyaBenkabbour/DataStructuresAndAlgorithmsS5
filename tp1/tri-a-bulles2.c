#include<stdio.h>
int main(void) 
{
int n,i,j,aide,b[100];
printf("saisir la taille du tableau:\n");
scanf("%d",&n);
for(i=0;i<n;i++){
    printf("b[%d]=",i);
    scanf("%d",&b[i]);
}
for(i=0;i<=n-2;i++){ 
    for(j=n-1;j>=i+1;j--){      
        if(b[j-1]>b[j]){
            aide=b[j];
            b[j]=b[j-1];
            b[j-1]=aide;
        }

    }
}
printf("voici le nouvel ordre du tableau:\n");
for(i=0;i<n;i++){
    printf("b[%d]=%d\t",i,b[i]);
}
}
