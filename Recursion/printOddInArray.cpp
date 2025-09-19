#include <iostream>
using namespace std;

void printOdd(int arr[],int size ,int index){
    if(index == size){
        return;
    }
    if(!(arr[index]%2==0)){
        cout << arr[index] << endl;
    }
    printOdd(arr,size,index+1);
}

int main(){
    int arr[10] = {1,2,3,4,5,6,7,8,9};
    int size = 9;
    int index =  0;

    printOdd(arr,size,index);
    return 0;
}