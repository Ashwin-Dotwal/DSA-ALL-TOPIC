//for smallest element of array
int smalest (int arr[], int n) {

    int smallest=arr[0];

    for (int i=0;i<n;i++){

        if(smallest>arr[i]){

            smallest=arr[i];
        }
    } 
    return smallest;
}


//second smallest element in array;


public static int getSecondSmallest(int arr[] , int total){  
int temp;  
for (int i = 0; i < total; i++)   
        {  
            for (int j = i + 1; j < total; j++)   
            {  
                if (arr[i] > arr[j])   
                {  
                    temp = arr[i];  
                    arr[i] = arr[j];  
                    arr[j] = temp;  
                }  
            }  
        }  
       return arr[1];//2nd element because index starts from 0  
}


