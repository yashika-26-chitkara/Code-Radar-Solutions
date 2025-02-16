#include <stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    if(N>1 && N/1==N && N/N==1 && !(N%2==0)){
        if(N==2){
        printf("Prime");
    }
    }else{
        printf("Not Prime");
    }
}