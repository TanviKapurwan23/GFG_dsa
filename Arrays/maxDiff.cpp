// Naive

int maxDiff(int arr[], int n){
    int res = arr[1] - arr[0];
    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            res = max(res, arr[j] - arr[i]);
        }
    }
    return res;
}

// efficient Solution

int maxDiff(int arr[], int n){
    int res = arr[1] - arr[0], minVal = arr[0];
    for(int j=1; j<n; j++){
        res = max(res, arr[j] - minVal);
        minVal = min(minVal, arr[j]);
    }
    return res;
}






