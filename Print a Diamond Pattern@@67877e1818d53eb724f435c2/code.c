#include <stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    for(int i=1;i<=N;i++){
        for(int spaces=1;spaces<=N-i;spaces++){
            printf(" ");
        }
        for(int j=1;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
}