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
    countPrime(N,arr);
    
    }

int checkPrime(int num){
    if(num==1){
        return 1;
    }
    for(int i=0;i*i<=num;i++){
        if(num%i==0){
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