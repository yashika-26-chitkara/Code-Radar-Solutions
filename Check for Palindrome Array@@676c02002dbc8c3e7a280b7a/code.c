#include <stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    int arr[N];
    for(int i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    int reversedArr[N];
    for(int i=0;i<N;i++){
        reversedArr[i]=arr[N-i-1];
    }
    int isPalindrome=1;
    for(int i=0;i<N;i++){
        if(arr[i]!=reversedArr[i]){
         isPalindrome=0;
         break;
   }
}
if(isPalindrome){
    printf("YES");
}else{
    printf("NO");
}
}