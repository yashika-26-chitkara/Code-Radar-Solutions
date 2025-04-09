void bubbleSort(int arr[],int n){
    for(int i=0;i<N;i++){
        if(arr[i]>arr[i+1]){
            arr[i+1]=arr[i];
            arr[i]=arr[i+1];
        }
    }
    for(int i=0;i<N;i++){
    printf("%d",arr[i]);
}
}