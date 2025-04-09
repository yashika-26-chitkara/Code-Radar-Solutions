#include <stdio.h>
int reverse(int num){
    int rev=0;
    rev=rev*10+(num%10);
    num=num/10;
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
        if(arr[i]==reverse[i]){
            count++;
        }else{
            continue;
        }
    }
   printf("%d",count);
}