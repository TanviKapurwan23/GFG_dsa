#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> ar;
    ar.push_back(1);
    ar.push_back(2);
    ar.push_back(3);
    ar.push_back(4);
    ar.push_back(5);

    // vector<int> ar = { 1, 2, 3, 4, 5 };


    vector<int>::iterator ptr;

    cout << "The vector elements are :";

    for (ptr = ar.begin(); ptr != ar.end(); ptr++) {
        cout << *ptr << " ";
    }

    return 0;
}


/*
Operations of iterators:-

1. begin():- This function is used to return the beginning position of the container.

2. end():- This function is used to return the after-end position of the container.
*/
