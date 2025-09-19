#include <iostream>
#include <vector>
using namespace std;

void printOdd(int arr[],int size ,int index,vector<int> &ans){
    if(index == size){
        return;
    }
    if(!(arr[index]%2==0)){
        ans.push_back(arr[index]);
    }
    printOdd(arr,size,index+1,ans);
}

int main(){
    int arr[10] = {1,2,3,4,5,6,7,8,9};
    int size = 9;
    int index =  0;
    vector<int> ans;
    printOdd(arr,size,index,ans);

    for(auto num:ans){
        cout << num << endl;
    }
    return 0;
}