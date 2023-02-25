#include<stdio.h>
int main(){
int tab[3][3],rowsum[3]={0},i ,j,k;
printf("saisir les données du tableau:\n");
for(i=0;i<3;i++){
    for(j=0;j<3;j++){
        printf("tab[%d][%d]=",i,j);
        scanf("%d",&tab[i][j]);
    }
}
for(i=0;i<3;i++){
    for(j=0;j<3;j++){
        rowsum[i]+=tab[i][j];
    }
}
printf("the sum of each row is:");
for(i=0;i<3;i++){
    printf("sum of row %d=%d \n",i,rowsum[i]);
}
return 0;
}