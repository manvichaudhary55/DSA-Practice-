#include <iostream>
using namespace std;
#include <vector>

void solve(int arr[],int arrLen,int brr[],int brrLen,vector<int> &ans){
    int i = 0 ;
    int j = 0 ;

    while(i<arrLen&&j<brrLen){
        if(arr[i]<brr[j]){
            ans.push_back(arr[i]);
            i++;
        }
        else{
            ans.push_back(brr[j]);
            j++;
        }
    }


    while(i<arrLen){
        ans.push_back(arr[i]);
        i++;
    }

    while(j<brrLen){
        ans.push_back(brr[j]);
        j++;
    }
}

int main(){
    int arr[]={20,40,60,80,90};
    int arrLen= 5 ;
    int brr[]={10,30,50,70};
    int brrLen = 4 ;
    vector<int> ans ;

    solve(arr,arrLen,brr,brrLen,ans);

    for(auto num : ans){
        cout << num << " ";
    }
}