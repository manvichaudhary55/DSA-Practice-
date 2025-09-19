#include <iostream>
using namespace std;

void printExtremes(int arr[],int size){
    int i = 0 ;
    int j = size-1;

    while(i<=j){
        if(i==j){
            cout<<arr[i]<<endl;
            i++;
        }
        else{
            cout<< arr[i] << endl;
            i++;
            cout << arr[j] << endl;
            j--;
        }
    }
}
int main(){
    int arr[] = {10,20,30,40,50,60,70};
    int size = 7 ;
    printExtremes(arr,size);
}