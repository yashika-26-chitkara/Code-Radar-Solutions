#include <stdio.h>
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    if(b == a*a){
        printf("Yes");
    }else{
        printf("No");
    }
}