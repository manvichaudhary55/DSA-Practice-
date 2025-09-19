#include <iostream>
using namespace std;

bool checkSorted(int arr[],int size,int index){
    if(index==size-1){
        // array se bahar nikal gya 
        // If there is single element in the array 
        return true;
    }
    bool myAnswer = false ;
    bool recusiveAnswer = false ;

    if(arr[index]<arr[index+1]){
        myAnswer=true; 
    }
    recusiveAnswer =  checkSorted(arr,size,index+1);
    
    return (myAnswer&&recusiveAnswer);

//     if(myAnswer==true&&recusiveAnswer==true){
//         return true ;
//     }
//     return false;
}
int main(){
  
    int arr[] = {10,20,30,40,50};
    int size = 5;
    int index = 0;
    bool ans = checkSorted(arr,size, index);
    cout << "Array is sorted or not: " << ans << endl;
    
}