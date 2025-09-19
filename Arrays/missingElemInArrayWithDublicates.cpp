#include<iostream>
#include<algorithm>
using namespace std;

//---------Method1-----------------
// void findMissing(int a[],int n){
//     for(int i = 0;i<n;i++){
//         int index = abs(a[i]);
        
//         if(a[index-1] > 0){
//             a[index-1] *= -1;
//         }
//     }

//     for(int i =0;i<n;i++){
//         if(a[i] > 0){
//             cout << i+1 << " "; 
//         }
//     }
// }

// int main(){

//     int arr[] = {1,3,5,3,4};
//     int n = 5;

//     findMissing(arr,n);
//     return 0;
// }


//------------Method2------------

void findMissing2(int arr[],int n){
    int i = 0;

    while(i<n){
        int index = arr[i] - 1;

        if(arr[index]  ){
            swap(arr[index],index) ;
        }
    }

}

int main(){

    int arr[] = {1,3,5,3,4};
    int n = 5;

    findMissing2(arr,n);
    return 0;

    return 0;
}