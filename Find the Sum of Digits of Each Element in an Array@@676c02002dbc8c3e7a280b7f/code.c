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
        printf("%d ",sumOfDigits(arr[i]));
    }
}
int sumOfDigits(int num){
    if(num<0){
        num-=num;
    }
    int sum=0;
    while(num!=0){
        sum+=num%10;
        num/=10;
    }
       return sum; 

    }

