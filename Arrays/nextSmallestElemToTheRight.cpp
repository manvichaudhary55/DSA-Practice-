#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int> v = {8,4,6,2,3};
    vector<int> ans;

    for(int i = 0 ; i<v.size() ;i++){
        bool foundSmaller = false;
        for(int j = i+1 ; j<v.size() ;j++){
            if(v[j]<v[i]){
                ans.push_back(v[j]);
                foundSmaller = true;
                break;
            }
        }
        if(foundSmaller == false){
            ans.push_back(-1);
        }
    }

    for(auto elem : ans){
        cout << elem << " "; 
    }

    return 0;
}