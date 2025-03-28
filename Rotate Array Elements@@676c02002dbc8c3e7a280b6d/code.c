#include <stdio.h>
void rotation(int N,int size,int K);
int main(){
    int N;
    printf("enter the number of array elements:");
    scanf("%d",&N);
    int arr[N];
    for(int i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    rotation(N,size,K);
}

void rotation(int N,int size,int K){
    temp[size];
    
    for(int i=0;i<N;i++){
        temp[(i%size)+K]=arr[i];
    }
    arr[i]=temp[size];
    printf("%d",arr[i]);
}
