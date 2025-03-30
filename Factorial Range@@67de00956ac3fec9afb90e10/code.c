int factorialRange(int start,int end){
    int start;
    scanf("%d",&start);
    int end;
    scanf("%d",&end);
    for(int i=start;i<=end;i++){
        if(start>end || start<0){
            return 0;
        }
        return num*factorialRange(num-1);
    }
    if(factorialRange(start,end)){
        printf("")
    }
}