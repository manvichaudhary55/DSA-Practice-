#include<iostream>
#include<stack>
#include<algorithm>
#include<vector>
using namespace std;

void prevSmaller(int arr[],int n,vector<int> &ans){
    stack<int> s;
    s.push(-1);

    for(int i=0;i<n;i++){

        int elem = arr[i];
        
        while(!s.empty() && s.top()>elem){
            s.pop();
        }

        ans.push_back(s.top());
        s.push(elem);
    }
}


int main(){

    int arr[] = {8,4,2,6,3};
    int n = 5;

    vector<int> ans;

    prevSmaller(arr,n,ans);

    for(auto elem : ans){
        cout << elem << " ";
    }

    return 0;
}