#include <stdio.h>
int rotation(int N,int size,int K);
int main(){
    int N;
    printf("enter the number of array elements:");
    scanf("%d",&N);
    int arr[N];
    int size;
    scanf("%d",&size);
    int K;
    scanf("%d",&K);
    for(int i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }

    
    rotation(N,size,K);
}

int rotation(int N,int size,int K){
    
    int temp[size];
    int arr[N];
   
    for(int i=0;i<N;i++){
        temp[(i%size)+K]=arr[i];
        arr[i]=temp[size];
    printf("%d",arr[i]);
    }
   
}
