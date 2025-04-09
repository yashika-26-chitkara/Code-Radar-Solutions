#include <stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    int arr[N];
    for(int i=0;i<N;i++){
        scanf("%d",&arr[i]);
        }
        for(int i=0;i<N;i++){
        if(arr[i]<0){
            arr[i]=-arr[i];
        }
        if(arr[i]>arr[i+1]){
            arr[i+1]=arr[i];
        }else{
            continue;
        }
        }
        printf("%d %d",arr[0],arr[N-1]);
    
}