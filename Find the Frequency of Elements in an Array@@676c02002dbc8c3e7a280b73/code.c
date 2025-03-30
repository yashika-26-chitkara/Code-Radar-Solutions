#include <stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    int freq[N+1];
    for(int i=0;i<N;i++){
        freq[i]=0;
    }
    int arr[N];
    for(int i=0;i<N;i++){
        scanf("%d",&arr[i]);
        freq[arr[i]]++;
    }
   
    for(int i=0;i<N;i++){
        if(freq[i]>0){
            printf("%d %d\n",i,freq[i]);
        }
    }
    return 0;
}