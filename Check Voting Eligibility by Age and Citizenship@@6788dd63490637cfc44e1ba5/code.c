#include <stdio.h>
int main(){
    int N,M;
    scanf("%d",&N);
    if(N>=18 && (M==1 || M==0)){
        printf("Eligible");
    }else{
        printf("Not Eligible");
    }
}