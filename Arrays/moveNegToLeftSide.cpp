#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int arr[] = {-5, 2, -1, 3, -7, -4, 4, -9};
    int size = sizeof(arr) / sizeof(arr[0]);

    // // METHOD 1 
    // // Use pointers to define the range for sorting
    // sort(arr, arr + size);

    // // Print the sorted array
    // for (auto i : arr) {
    //     cout << i << " ";
    // }


    // // DUTH NATIONAL FLAG

    int i = 0;
    int j =size - 1;

    while(i<=j){
        if(arr[i]<0){
            i++;
        }
        else if(arr[j]>0){
            j--;
        }
        //i->positive and j->negative
        else{
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
    }

    // Print the sorted array
    for (auto i : arr) {
        cout << i << " ";
    }

    return 0;
}