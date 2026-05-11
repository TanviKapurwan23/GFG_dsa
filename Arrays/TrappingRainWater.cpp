#include<iostream>

using namespace std;

int maxWater(int arr[], int n){

    int res = 0;

    for(int i=0; i<n-1; i++){

        // find max element on its left
        int lMax = arr[i];

        for(int j=0; j<i; j++){
            lMax = max(lMax, arr[j]);
        }

        // find max element on its right

        int rMax = arr[i];

        for(int j=i+1; j<n; j++){
            rMax = max(rMax, arr[j]);
        }

        res = res + (min(lMax, rMax) - arr[i]);
    }
    return res;
}

int main()
{
    int arr[] = { 0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1 };
    int n = sizeof(arr)/sizeof(arr[0]);

    cout<<maxWater(arr, n);

    return 0;
}