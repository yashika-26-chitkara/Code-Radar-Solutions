#include <stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    int arr[N];
    for(int i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    int count =0;
    for(int i=0;i<N;i++){
        while(i!=0){
        int rem=0;
        rem=i%10;
        int rev=0;
        rev=rev+rem;
        i=i/10;
        }
        if(arr[i]==rev){
            count++;
        }else{
            continue;
        }
    }
    printf("%d",count);
    
}