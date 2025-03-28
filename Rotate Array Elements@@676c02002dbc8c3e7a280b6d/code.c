#include <stdio.h>
void rotation(int N,int arr[],int K);
int main(){
    int N;
    printf("enter the number of array elements:");
    scanf("%d",&N);
    int arr[N];
     for(int i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    int K;
    scanf("%d",&K);
   
    rotation(N,size,K);
    return 0;
}

void rotation(int N,int size,int K){
    
    int temp[size];
    int arr[N];
   
    for(int i=0;i<N;i++){
        temp[(i%size)+K]=arr[i];
     }
     for(int i=0;i<N;i++){
         arr[i]=temp[size];
     } 
     for(int i=0;i<N;i++){
        printf("%d",arr[i]);
    }
   
}
