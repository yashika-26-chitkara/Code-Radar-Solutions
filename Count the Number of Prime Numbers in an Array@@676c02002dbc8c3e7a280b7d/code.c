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
void checkPrime(int num){
    if(num==1){
        return 1;
    }
    for(int i=0;i*i<N;i++){
        if(N%i==0){
        printf("Not Prime");
        }
    }
    return 1;
}

int countPrime(int N,int arr[]){
    int count =0;
    for(int i=0;i<N;i++){
        if(checkPrime(arr[i])){
            count++;
        }
        return count;
    }
}