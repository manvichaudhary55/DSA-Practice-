#include <iostream>
using namespace std;

void maxInArray(int arr[],int size ,int index,int &maxi){
    if(index == size){
        return;
    }
    maxi = max(maxi,arr[index]);
    maxInArray(arr,size,index+1,maxi);
}

int main(){
    int arr[10]={1,4,70,30,8,20};
    int size = 6;
    int index = 0;
    int maxi = INT_MIN;

    maxInArray(arr,size,index,maxi);

    cout << maxi;
    return 0;
}