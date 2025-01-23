//for largest element of array
int largest(int arr[], int n) {

    int largest=arr[0];

    for (int i=0;i<n;i++){

        if(arr[i]>largest){

            largest=arr[i];
        }
    } 
    return largest;
}

//for second largest element
  int print2largest(int arr[], int n) {
        // code here
  int lar = arr[0];
        int lar2 = -1;
        for(int i = 1; i < n; i++){
            if(arr[i] > lar){
               lar2 = lar;
               lar = arr[i];

            if(arr[i] < lar && arr[i] > lar2){
                lar2 = arr[i];
            }
        }
        return lar2;
  }
  }