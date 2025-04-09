#include <stdio.h>
int main(){
    int N,K;
    scanf("%d %d",&N,&K);
    int arr[N];
    for(int i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    for(int i =0;i<N;i++){
        int count=0;
        if(arr[i]>K){
            count++;
        }else{
            continue;
        }
        printf("%d",count);
    }
   
}