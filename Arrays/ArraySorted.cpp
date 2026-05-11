#include<iostream>
using namespace std;

bool isSorted(int arr[], int n){
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(arr[j] < arr[i])
                return false;
          
        }
    }
    return true;
}


int main(){
   int arr[] = {7, 2, 30, 10}, n=4;

   printf("%s", isSorted(arr, n) ? "true" : "false");

    return 0;

}



bool sorted(int arr[], int n){
    if(n == 0 || n == 1){
        return true;
    }

    for(int i=1; i<n ; i++){
        if(arr[i-1] > arr[i]){
            return false;
        }
    }
    return true;
}


// 10 5 20 30



