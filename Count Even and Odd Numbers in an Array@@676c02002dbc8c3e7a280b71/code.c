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
   
    int result =count_even_odd(N,arr);
    printf("%d",result);

    int even_count=count_even_odd(N,arr);
    int odd_count=N-even_count;

    printf("%d  %d",even_count,odd_count);
}
int check_even_odd(int n){
    if(n%2==0){
        return 1;
    }
    return 0;
    
}

int count_even_odd(int N,int arr[]){
    int count_even=0;
    for(int i=0;i<N;i++){
        if(check_even_odd(arr[i])){
            count_even++;
        }
    }
    return count_even;
}
