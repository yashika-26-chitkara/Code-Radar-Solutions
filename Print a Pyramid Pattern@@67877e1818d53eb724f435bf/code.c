#include <stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    for(int i=N;i>=1;i--){
        for(int spaces=1;spaces<=N-i;spaces++){
            printf(" ");
        }
        for(int j=1;j<=2*i-1;j++){
            printf("*");
        }
        printf("\n");
    }
}