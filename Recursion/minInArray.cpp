#include <iostream>
using namespace std ;

// pass by refrence becuz mini is storing a value 
void minInArray(int arr[],int index ,int size , int &mini){
    if(index==size){
        return;
    }
    mini = min(mini,arr[index]);
    minInArray(arr,index+1,size,mini);
}
int main(){
    int arr[]={20,10,30,60,90};
    int size = 5 ;
    int index = 0;
    int mini = INT_MAX;
    minInArray(arr,index,size,mini);
    cout << mini; 

}