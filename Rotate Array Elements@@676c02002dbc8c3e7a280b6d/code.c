#include <stdio.h>
void rotation(int N,int arr[size],int K);
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

void rotation(int N,int arr[size],int K){
    
    int temp[size];

    for(int i=0;i<N;i++){
        temp[(i%size)+K]=arr[i];
        arr[i]=temp[size];
    printf("%d",arr[i]);
    }
   
}
