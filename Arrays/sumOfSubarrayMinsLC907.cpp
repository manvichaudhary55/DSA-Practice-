#include<iostream>
#include<vector>
using namespace std;

//MAximum Subarray LC53 more optimal solution 

vector<vector<int>> subarray(int arr[],int n){
    vector<vector<int>> result;

    for(int i = 0;i<n;i++){
        for(int j = i; j<n; j++){
            vector<int> subarray;
            for(int k = i;k<=j;k++){
                subarray.push_back(arr[k]);
            }
            result.push_back(subarray);
        }
    }

    return result;
}

int main(){

    int arr[] ={3,1,2,4};
    int size = 4;

    vector<vector<int>> result = subarray(arr,size);

    for(auto res : result){
        for(auto num : res){
            cout << num << " " ;
        }
        cout << endl;
    }

    cout << endl;
    cout << "Adding minimums of each:" << endl;

    vector<int> mins;
    for(auto res : result){
        int min = INT_MAX;
        for(auto num : res){
            if(num<min){
                min = num;
            }
        }
        mins.push_back(min);
        cout << min << endl;
    }

    int sum = 0;
    for(auto min : mins){
        sum = sum + min;
    }

    cout << "Sum of mins id : " << sum << endl;
    return 0;
}