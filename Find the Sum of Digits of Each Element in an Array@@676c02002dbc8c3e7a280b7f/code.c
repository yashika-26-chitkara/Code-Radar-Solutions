#include <stdio.h>
int sumOfDigits(int num);


int main(){
    int N;
    scanf("%d",&N);
    int arr[N];
    for(int i =0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<N;i++){
        printf("%d",sumOfDigits(int num));
    }
}
int sumOfDigits(int num){
    int sum=0;
    while(num!=0){
        sum+=num%10;
        num/=10;
    }
        

    }

