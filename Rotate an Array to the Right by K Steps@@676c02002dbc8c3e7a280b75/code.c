#include <stdio.h>
void rotation(int N,int arr[],int K);
int main(){
    int N;
    scanf("%d",&N);
    int arr[N];
    for(int i =0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    int K;
    scanf("%d",&K);
    rotation(N,arr,K);

}
void rotation(int N,int arr[],int K){
    int temp[N];
    for(int i=0;i<N;i++){
        temp[(i+K)%N]=arr[i];
    }
    for(int i=0;i<N;i++){
        arr[i]=temp[i];
    }
    for(int i=0;i<N;i++){
        printf("%d",arr[i]);
    }

}