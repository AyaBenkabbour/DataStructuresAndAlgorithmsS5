#include<stdio.h>
int main(){
int t1[3][3],t2[3][3],mult[3][3]={0},i ,j,k,m;
printf("saisir les données du tableau1:\n");
for(i=0;i<3;i++){
    for(j=0;j<3;j++){
        printf("t1[%d][%d]=",i,j);
        scanf("%d",&t1[i][j]);
        
    }
    printf("\n");
}
printf("saisir les données du tableau2:\n");
for(i=0;i<3;i++){
    for(j=0;j<3;j++){
        printf("t2[%d][%d]=",i,j);
        scanf("%d",&t2[i][j]);
         
    }
    printf("\n");
}
for(k=0;k<3;k++){
    for(m=0;m<3;m++){
        for(i=0;i<3;i++){
            mult[k][m]+=t1[k][i]*t2[i][m];
        }
    }    
}
for(i=0;i<3;i++){
    for(j=0;j<3;j++){
        printf("mult[%d][%d]=%d",i,j,mult[i][j]);
       

    }
     printf("\n");
}
return 0;
}    