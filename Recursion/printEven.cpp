#include <iostream>
using namespace std;

void printEvenNums(int arr[],int index,int size){
    if(index==size){
        return;
    }
    if((arr[index])%2==0){
        cout<<arr[index]<<endl;
    }
    printEvenNums(arr,index+1,size);

}
int main(){
    int arr[] ={20,21,30,31,50,51};
    int index = 0;
    int size = 6;

    printEvenNums(arr,index,size);
}
