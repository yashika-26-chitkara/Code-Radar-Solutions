#include <stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    int arr[N];
    for(int i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    int reversedArr[N];
    for(int i=0;i<N;i--){
        reversedArr[i]=arr[N-i-1];
    }
    if(arr==reversedArr){
        printf("YES");
    }else{
        printf("NO");
    }
}
