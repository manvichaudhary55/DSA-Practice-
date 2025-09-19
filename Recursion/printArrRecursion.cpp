#include <iostream>
using namespace std ;

void printArr(int arr[],int size ,int index ){
    if(index == size){
        return;
    }

    cout << ""<< arr[index];

    printArr(arr,size,index+1);
}
int main(){
    int arr[] ={1,2,3,4,5,6,7};
    int size = 7;
    int index = 0;

    printArr(arr,size,index);

}