#include <iostream>
#include <vector>
using namespace std;

void quickSort(int arr[],int arrSize,int brr[],int brrSize,vector<int> &ans){
    int i = 0 ,j = 0;
    while(i<arrSize&&j<brrSize){

        if(arr[i]<brr[j]){
            ans.push_back(arr[i]);
            i++;
        }
        else{
            ans.push_back(brr[j]);
            j++;
        }

    }

    while(i<arrSize){
        ans.push_back(arr[i]);
        i++;
    }

    while(j<brrSize){
        ans.push_back(brr[j]);
        j++;
    }

}

int main(){
    int arr[]= {10,30,60,70,80};
    int arrSize = 5 ;

    int brr[]={20,40,50};
    int brrSize = 3 ;

    vector<int> ans ;

    quickSort(arr,arrSize,brr,brrSize,ans);

    for(int num: ans){
        cout << num << " ";
    }

    
}