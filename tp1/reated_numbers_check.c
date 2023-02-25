#include<stdio.h>
int main(){
    int seen[10]={0}, i ,a, N; 
/*  
    int n, tab[n];
    printf("saisir la taille du tableau");
    scanf("%d",&n);
    for ( i = 0; i < n; i++)
    {
        printf("tab[%d]=",i);
        scanf("%d",&tab[i]);
    }       */ 
    printf("saisir le nombre");
    scanf("%d",&N);
    while(N>0)
    {
        a=N%10;
        if(seen[a]==1){
            break;
        }
        seen[a]=1;
        N=N/10;
    }
    if(N==0){
        printf("not repeated");
    }
    else
    {
        printf("yes,repeated");
    }
    

return 0;    
}