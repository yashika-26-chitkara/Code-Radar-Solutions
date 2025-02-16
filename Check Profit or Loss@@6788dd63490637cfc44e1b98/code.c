#include <stdio.h>
int main(){
    int costPrice,selPrice;
    scanf("%d %d",&costPrice,&selPrice);

    if(costPrice < selPrice){
        printf("Profit");
    }else if(selPrice < costPrice){
        printf("Loss");
    }else{
        printf("No Profit No Loss");
    }
}