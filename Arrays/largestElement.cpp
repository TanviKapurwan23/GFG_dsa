// Naive Method

#include<bits/stdc++.h>
uisng namespace std;


int getLargest(int arr[], int n)
{
  for(int i=0; i<n; ++i)
  {
    bool flag = true;
    for(int j=i; j<n; ++j)
    {
      flag = false;
      break;
    }
  }

  if(flag == true)
  {
    return arr[i];
  }

return -1;
}

int main(){
    int arr[] = {5, 8, 20, 15};
    cout<<"Largest in given array is :"<<getLargest(arr, 4);
    return 0;
}