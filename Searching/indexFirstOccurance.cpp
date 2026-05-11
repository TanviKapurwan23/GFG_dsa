int firstOccurance(int arr[], int n, int x){
    for(int i=0; i<n; i++){
        if(arr[i] == x){
            return i;
        }   
    }
    return -1;
}

// O(N) Time Complexity
// O(1) Auxilary Space

// recursive binary search

int firstOccurance(int arr[], int low, int high, int x){
    if(low > high) return -1;
    int mid = (low + high)/2;

    if(x > arr[mid]){
        return firstOccurance(arr, mid+1, high, x);  // right
    } else if(x < arr[mid]){
        return firstOccurance(arr, low, mid-1, x);   // left
    }

    else{
        if(mid == 0 || arr[mid-1] != arr[mid]){
            return mid;
        } else{
            return firstOccurance(arr, low, mid-1, x);
        }
    }
}


// Iterative Solution


int firstOccurance(int arr[], int n, int x){
    int low = 0, high = n-1;
    while(low <= high){
        int mid = (low + high)/2;
        if(arr[mid] > x){
            high = mid - 1;
        }else if(arr[mid] < x){
            low = mid + 1;
        }else{
           if(mid == 0 || arr[mid-1] != arr[mid]){
            return mid;
           }else{
            high = mid - 1;
           }
        }
        return -1;
    }
}