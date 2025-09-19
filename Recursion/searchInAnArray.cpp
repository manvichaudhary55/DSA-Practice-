#include <iostream>
using namespace std;

int search(int arr[],int size ,int index,int target){
    if(index == size){
        return -1;
    }
    if(arr[index]==target){
        return index;
    }
    int ans = search(arr,size,index+1,target);
    return ans ;
}

int main(){
    int arr[] ={20,21,30,31,50,51};
    int size = 6 ;
    int index = 0 ;
    int target = 30;
    cout << search(arr,size,index,target);
}