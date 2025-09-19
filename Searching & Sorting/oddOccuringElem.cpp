#include<iostream>
using namespace std;

int find(int arr[],int size){
    int s = 0;
    int e = size-1;

    int mid = s + (e-s)/2;

    while(s<=e){
        if(s==e){
            return s;
        }

        //Case1 -> Dublicate does not exist 
        else if((mid-1>0 &&  arr[mid]!=arr[mid-1]) && (mid+1<size &&  arr[mid]!=arr[mid+1])){
            return mid;
        }
        //Case2 -> Dublicate exist in left side 
        else if(mid-1>0  &&  arr[mid] == arr[mid-1]){
            int indexOfDublicate = mid-1;

            if(indexOfDublicate&1){
                //if the index is odd 
                //move left side 
                e = mid - 1;
            }
            else{
                //index is even 
                //ans would be right 
                //move to right 
                s = mid + 1; 
            }
        }

        //Case3 -> Dublicate exist in right side  
        else if(mid+1 <size &&  arr[mid] == arr[mid + 1]){
            int indexOfDublicate = mid;

            if(indexOfDublicate&1){
                //if the index is odd 
                //move left side 
                e = mid - 1;
            }
            else{
                //index is even 
                //ans would be right 
                //move to right 
                s = mid + 1; 
            }
        }
        mid = s + (e-s)/2;
    }
    return -1;
}

int main(){

    int arr[] = {1,1,2,2,3,3,4,5,5,3,3};
    int n = 11;

    int index = find(arr,n);

    cout << "Index :" << index << endl;
    cout << "Elem :" << arr[index] << endl;
    return 0;
}