#include <stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    int arr[N];
    for(int i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    int original=arr[N];
    int reversedArr[N];
    for(int i=N;i>1;i--){
        reversedArr[i];
    }
    if(original==reversedArr){
        printf("Yes");
    }else{
        printf("No");
    }
}
