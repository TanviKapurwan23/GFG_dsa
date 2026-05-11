//Naive Approach

bool boolIsPair(int arr[], int n, int x){
    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            if(arr[i]+ arr[j] == x){
                return true;
            } return false;
        }
    }
}
// TC: O(N^2) AS: O(1)


// Efficient Solution

bool isPair(int arr[], int n , int x){
    int i=0, j=n-1;
    while(i < j){
        if(arr[i] + arr[j] == x){
            return true;
        }else if(arr[i] + arr[j] < x){
            i++;
        }else{
            j--;
        }
    } return false;
}

// TC: O(N)
// AS: O(1)


 


