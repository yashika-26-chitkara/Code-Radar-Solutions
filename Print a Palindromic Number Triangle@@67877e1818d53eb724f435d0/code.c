#include <stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    switch(N){
    case 1:(N==1);
           printf("1");
           break;
    case 2:(N==2);
           printf(" 1\n121");
           break;
    case 3:(N==3);
           printf("  1\n 121\n12321");
           break;
    case 4:(N==4);
           printf("   1\n  121\n 12321\n1234321");
           break;
    case 5:(N==5);
           printf("    1\n   121\n  12321\n 1234321\n123454321");
           break;
    case 6:(N==6);
           printf("     1\n    121\n   12321\n  1234321\n 123454321\n12345654321");
           break;
    case 7:(N==7);
           printf("      1\n     121\n    12321\n   1234321\n  123454321\n 12345654321\n1234567654321");
           break;
}
}