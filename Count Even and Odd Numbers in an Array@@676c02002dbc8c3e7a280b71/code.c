#include <stdio.h>
int check_even_odd(int n);
int count_even_odd(int N,int arr[]);
int main(){
    int N;
    scanf("%d",&N);
    int arr[N];
    for(int i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    int n;
    scanf("%d",&n);
    int result =count_even_odd(N,arr);
    printf("%d",result);
}
int check_even_odd(int n){
    if(n%2!=0){
        return 0;
    }
    return 1;
    
}

int count_even_odd(int N;int arr[]){
    int count_even=0;
    int count_odd=0;
    for(int i=0;i<N;i++){
        if(check_even_odd(n)){
            count_even++;
        }else{
            count_odd++;
        }
    }
    return count_even,count_odd;
}
