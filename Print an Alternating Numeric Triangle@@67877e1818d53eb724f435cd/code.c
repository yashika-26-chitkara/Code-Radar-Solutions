#include <stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    for(int i=N;i<=1;i++){
        for(int spaces=1;spaces<=N-i;spaces++){
            printf("%d",i-i);
        }
        for(int j=1;j<i;j++){
            printf("%d",j-(j-1));
        }
    }
    printf("\n");
}