#include <stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    int freq[N+1]={0};
    int arr[N];
    for(int i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    freq[arr[i]]++;
    for(int i=0;i<N;i++){
        if(freq[i]==0){
            continue;
        }
        printf("%d %d",i,freq[i]);
    }
}