bool isSubSum(int arr[], int n, int sum) {
    for (int i = 0; i < n; i++) {
        int curr = 0;
        for (int j = i; j < n; j++) {
            curr += arr[j];
            if (curr == sum) {
                return true;  // Subarray found
            }
        }
    }
    return false;  // No subarray found
}