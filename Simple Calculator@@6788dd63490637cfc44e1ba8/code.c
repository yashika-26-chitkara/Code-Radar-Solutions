#include <stdio.h>
int main(){
    int a,b;
    char c;
    scanf("%d %d ",&a,&b);
    if(c=='+'){
        printf("%d",a+b);
    }
    else if(c=='-'){
        printf("%d",a-b);
    }
    else if(c=='*'){
        printf("%d",a*b);
    }
    else if(c=='/'){
        printf("%d",a/b);
    }
    else{
        printf("error");
    }
}