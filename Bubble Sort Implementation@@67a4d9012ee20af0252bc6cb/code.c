void bubbleSort(int arr[],int n){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        if(arr[i]>arr[i+1]){
            arr[i+1]=arr[i];
            arr[i]=arr[i+1];
        }
    }
    for(int i=0;i<n;i++){
    printf("%d",arr[i]);
}
}