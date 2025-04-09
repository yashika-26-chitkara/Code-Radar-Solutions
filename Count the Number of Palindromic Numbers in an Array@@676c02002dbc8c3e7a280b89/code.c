#include <stdio.h>
int reverse(int num){
    int rev=0;
    while(num!=0){
    rev=rev*10+(num%10);
    num=num/10;
    }
    return rev;
}
int main(){
    int N;
    scanf("%d",&N);
    int arr[N];
    for(int i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    int count =0;
    for(int i=0;i<N;i++ ){
        if(arr[i]<0){
            continue;
        }
        if(arr[i]==reverse(arr[i])){
            count++;
        }

    }
   printf("%d",count);
}