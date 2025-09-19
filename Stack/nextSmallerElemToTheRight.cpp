#include<iostream>
#include<stack>
#include<algorithm>
#include<vector>
using namespace std;

void nextSmaller(int arr[],int n,vector<int> &ans){
    stack<int> s;
    s.push(-1);

    //Starting from the last of array
    for(int i = n-1;i>=0;i--){
        int elem = arr[i];

        //Pop the element from the stack till 
        //Elems in stack are greater than the current element of array 
        //Loop cuz there has to me more than one element in stack
        //grater than curr array elem
        while (!s.empty() && s.top()>elem){
            s.pop();
        }

        //Elem in stack which is smaller than the current array elem 
        //will be pushed to ans vector 
        ans.push_back(s.top());

        //Always push the current array element to stack
        s.push(elem);
    }
}

int main(){

    int arr[] = {8,4,6,2,3};
    int n = 5;

    vector<int> ans;

    nextSmaller(arr,n,ans);

    //Becuz vector is giving reverse ans 
    reverse(ans.begin(),ans.end());


    for(auto elem : ans){
        cout << elem << " ";
    }

    return 0;
}