#include <stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    if(N>1 && N/1==N && N/N==1 && !(N%2==0) && !(N%3==0)){
        printf("Prime");
    }else{
        if(N==2){
            printf("Prime");
        }else{
            printf("Not Prime");
    }
}
}
