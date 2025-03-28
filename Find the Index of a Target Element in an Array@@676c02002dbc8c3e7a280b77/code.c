#include <stdio.h>
int targetIndex(int N,int arr[],int T);
int main(){
    int N;
    scanf("%d",&N);
    int arr[N];
    for(int i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    int T;
    scanf("%d",&T);

    int result=targetIndex(N,arr,T);
    printf("%d",result);
}

int targetIndex(int N,int arr[],int T){
    for(int i=0;i<N;i++){
        if(arr[i]==T){
            return i;
        }
    }
    return -1;
}