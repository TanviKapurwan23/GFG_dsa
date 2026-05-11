// Naive O(n^2)

int getWater(int arr[], int n){
    int res = 0;
    for(int i=1; i<n-1; i++){
        int lMax = arr[i];
        for(int j=0; j<i; j++){
            lMax = max(lMax, arr[j]);
        }
        int rMax = arr[i];
        for(int j=i+1; j<n; j++){
            rMax = max(rMax, arr[j]);
        }
        res = res + (min(lMax, rMax) - arr[i]);
    }
}

//optimised

int getWater(int arr[], int n){
    int res = 0;

    //  1: Precompute maximum heights from the left
    int lMax[n];
    lMax[0] = arr[0];
    for(int i = 1; i < n; i++) {
        lMax[i] = max(arr[i], lMax[i - 1]); // max of current height and previous max
    }

    //  2: Precompute maximum heights from the right
    int rMax[n];
    rMax[n - 1] = arr[n - 1];
    for(int i = n - 2; i >= 0; i--) {
        rMax[i] = max(arr[i], rMax[i + 1]); // max of current height and next max
    }

    //  3: Calculate the trapped water for each bar
    for(int i = 1; i < n - 1; i++) {
        // The water trapped above the current bar is the difference between
        // the smaller of lMax and rMax and the height of the current bar
        res += min(lMax[i], rMax[i]) - arr[i];
    }

    return res;
}


// O(N): TC and O(N) : AX