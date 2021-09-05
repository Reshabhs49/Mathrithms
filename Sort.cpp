void swap(int* x, int* y) 
{ 
    int t = *x; 
    *x= *y; 
    *y = t; 
} 
  
int partition (int arr[], int low, int high) 
{ 
    int pivot = arr[high]; 
    int i = (low - 1); 
  
    for (int j = low; j <= high - 1; j++) 
    { 
        if (arr[j] < pivot) 
        { 
            i++; 
            swap(&arr[i], &arr[j]); 
        } 
    } 
    swap(&arr[i + 1], &arr[high]); 
    return (i + 1); 
} 
  
void algorithm(int arr[], int low, int high) 
{ 
    if (low < high) 
    { 
        int pivot = partition(arr, low, high); 
        algorithm(arr, low, pivot - 1); 
        algorithm(arr, pivot + 1, high); 
    } 
} 
