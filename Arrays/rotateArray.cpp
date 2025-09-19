#include <iostream>
using namespace std ;

void rotateArray(int arr[],int size,int shift){
    
    int finalShift = shift%size;
    

    if(finalShift==0){
        return;
    }
    //Copying the last two elements 
    int temp[1000];
    int index = 0 ;
    for(int i = size-finalShift ; i<size;i++){
        temp[index] = arr[i]; 
        index++;
    }

    //Shift the elements  
    for(int i=size-1; i>0;i--){
        if(i-finalShift>=0){
            arr[i]= arr[i-finalShift];
        }
    }

    //Place the copied array in front of the original array

    for(int i=0;i<finalShift;i++){
        arr[i]=temp[i];
        
    }
}

int main(){
    int arr[] ={10,20,30,40,50,60};
    int size = 6 ;
    int shift = 8 ; 

    for(int i=0;i<size;i++){
        cout << arr[i]<< endl;
    }
    rotateArray(arr,size,shift);

    // Printing the final array 
    for(int i=0;i<size;i++){
        cout << arr[i]<< " ";
    }
}