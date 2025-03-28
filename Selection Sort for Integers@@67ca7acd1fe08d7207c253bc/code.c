int selectionSort(int arr[],int n){
    int i,j,temp,minindex;
    for(i=0;i<n;i++){
        minindex=i;
        for(j=i+1;j<n;j++){
            if(arr[j]<arr[minindex]){
                minindex=j;
            }
        }
        if(minindex!=i){
            temp=arr[i];
            arr[i]=arr[minindex];
            arr[minindex]=temp;
        }

    }
    int printArray(int arr[],int n){
        for(int i=0;i<n;i++){
            printf("%d",arr[i]);
        }
    }
}