int factorialRange(int num){
    int start;
    scanf("%d",&start);
    int end;
    scanf("%d",&end);
    int num;
    for(int i=start;i<=end;i++){
        if(start>end || start<0){
            return 0;
        }
        return 1;
    }
    if(factorialRange(start,end)){
        printf("%d\n",num*factorialRange(num-1));
    }else{
        printf("Invalid Range");
    }
}