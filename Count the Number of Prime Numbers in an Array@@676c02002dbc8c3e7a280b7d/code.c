#include <stdio.h>

int checkPrime(int num);
int countPrime(int N,int arr[]);
int main(){
    int N;
    scanf("%d",&N);
    int arr[N];
    for(int i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    int result=countPrime(N,arr);
    printf("%d",result);
    
    }

int checkPrime(int num){
    if(num==1){
        return 0;
    }
    for(int i=2;i*i<=num;i++){
        if(num%i==0){
        return 0;
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
    }
    return count;
}