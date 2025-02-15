#include <stdio.h>
int main(){
    int N,M;
    scanf("%d",&N);
    if(N>=18 && (M==1)){
        printf("Eligible");
    }else{
        if(N<18 && M==0){
        printf("Not Eligible");
    }
    }
}