#include <stdio.h>
int main() {
    char userName[100];
    int age;
    char hobby[100];
    scanf("%s %d %s",&userName,&age,&hobby);
    printf("Name: %s \n Age: %d \n Hobby: %s",userName,age,hobby);
    return 0;
}