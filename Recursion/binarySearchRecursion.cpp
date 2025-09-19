#include <iostream>
using namespace std;

int  binarySearch(int arr[],int s,int e,int key){
    if(s>e){
        return -1;
    }
    int mid = (s+e)/2;
    
    if(key==arr[mid]){
        return mid ;
    }

    // Right side
    if(key>arr[mid]){
        return binarySearch(arr,mid+1,e,key);
    }

    //Left
    if(key<arr[mid]){
        return binarySearch(arr,s,mid-1,key);
    }
}

int main(){
    int arr[] = {10,20,30,40,50,60};
    int size = 6 ;
    int key = 40;

    int s = 0 ;
    int e = size -1 ;
    

    cout << binarySearch(arr,s,e,key);
    return 0;
}