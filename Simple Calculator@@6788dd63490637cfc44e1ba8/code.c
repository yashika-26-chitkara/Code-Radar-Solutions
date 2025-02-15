#include <stdio.h>
int main(){
    float a,b;
    char c;
    scanf("%d %d %f",&a,&b,&c);
    if(c=='+'){
        printf("%f",a+b);
    }else if(c=='-'){
        printf("%f",a-b);
    }else if(c=='*'){
        printf("%f",a*b);
    }else if(c=='/'){
        printf("%f",a/b);
    }else{
        printf("error");
    }
}