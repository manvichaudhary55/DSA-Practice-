#include <iostream>
using namespace std;

// // My logic 
// bool solve(int arr[],int index,int size){
//     if(index == size-1){
//         return true;
//     }

//     if(arr[index]>arr[index+1]){
//         return solve(arr,index+1,size);
//     }

//     return false;

// }


// // vedio logic

bool solve(int arr[],int index,int size){
    if(index == size-1){
        return true;
    }

    bool currAns = false;
    bool recurAns = false;

    if(arr[index]>arr[index+1]){
        currAns = true ;
    }

    recurAns = solve(arr,index+1,size);

    return(currAns&&recurAns);
}

int main(){
    int arr[] = {80,70,60,50,40,30,20};
    int index = 0;
    int size = 7;

    bool ans = solve(arr,index,size);

    cout << ans ;
    return 0;
}