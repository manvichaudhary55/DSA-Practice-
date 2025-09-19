#include <iostream>
using namespace std;

void merge(int arr[],int s,int e,int mid){
    int leftLength = mid-s+1;
    int rightLength = e-mid;

    int *leftArr = new int[leftLength];
    int *rightArr = new int[rightLength];

    int index = s;

    for(int i = 0 ;i<leftLength;i++){
        leftArr[i]=arr[index];
        index++;
    }

    index = mid + 1;

    for(int i = 0;i<rightLength;i++ ){
        rightArr[i]=arr[index];
        index++;
    }

    //Merge Logic

    int i = 0;
    int j = 0;
    int mainArrayIndex = s ;

    while(i<leftLength&&j<rightLength){

        if(leftArr[i]<rightArr[j]){
            arr[mainArrayIndex]=leftArr[i];
            i++;
            mainArrayIndex++;
        }
        else{
            arr[mainArrayIndex]=rightArr[j];
            j++;
            mainArrayIndex++;
        }

    }

    while(i<leftLength){
        arr[mainArrayIndex]=leftArr[i];
        i++;
        mainArrayIndex++;
    }

    while(j<rightLength){
        arr[mainArrayIndex]=rightArr[j];
        j++;
        mainArrayIndex++;
    }

    delete[] leftArr;
    delete[] rightArr;
}
void mergeSort(int arr[] ,int s , int e){
    if(s>=e){
        return;
    }
    int mid = (s+e)/2;

    //Sorting left array
    mergeSort(arr,s,mid);

    //Sorting right array
    mergeSort(arr,mid+1,e);

    //Merge both arrays
    merge(arr, s , e , mid);
}

int main(){
    int arr[]={90,10,30,20,40,60,50,80};
    int arrLength = 8;

    int s = 0 ;
    int e = arrLength-1;

    mergeSort(arr,s,e);

    for(int i = 0 ;i<arrLength;i++){
        cout << arr[i]<<" ";
    }
}