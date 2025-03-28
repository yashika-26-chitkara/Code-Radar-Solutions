#include <stdio.h>
void checkPrime(int N,int arr[]);
int main(){
    int N;
    scanf("%d",&N);
    int arr[N];
    for(int i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    if(checkPrime(N,arr[N])){
        printf("%d",count);
    }

}
void checkPrime(int N,int arr[]){
    int count=0;
    if(arr[i]==1){
        return 1;
    }
    for(int i=0;i<arr[N];i++){
        if(arr[i]%i!=0 || arr[i]==2){
        count++;
        }
    }
    return 1;
}