#include<iostream>
#include<vector>


using namespace std;

int main(){
    vector<int> v;


    for(int i=1; i <= 5; i++){
        v.push_back(i);

        cout<<"Size : "<<v.size();

        if(v.empty() == false){
            cout<<"\n Vector is not empty";
        }else{
            cout<<"\n Vector is empty";
        }

        cout<<"\n Output of begin and end: ";
        for(auto i=v.begin(); i != v.end(); ++i){
            cout<<*i<<" ";
        }

        v.emplace(v.begin(), 5);
        cout<<"\n The First element is :"<<v[0];

        v.emplace_back[20];
        int n = v.size();
        cout<<"\n The last element is:"<<v[n-1];

        v.clear();
        cout<<"\n Vector size after erase() : "<<v.size();

        return 0;
        
        
     }
}