//Given a sorted array arr[] of size N, some elements of array are
//arr[i] may be moved to, either of the, adjacent positions, i.e.,
//present at arr[i+1] or arr[i—1] i.e. arr[i] can only be swapped
//with either arr[i+1] or arr[i—1]. The task is to search for an
//element in this array.



#include<iostream>
using namespace std;

int isPresent(int arr[],int n,int target){
    int s = 0;
    int e = n-1;

    int mid = s + (e-s)/2;

    while(s<=e){
        if(arr[mid] == target){
            return mid;
        }
        else if(arr[mid -1] ==  target){
            return mid-1;
        }
        else if(arr[mid + 1] == target){
            return mid+1;
        }

        else  if(target >  arr[mid]){
            s = mid + 1;
        }
        else{
            e = mid - 1;
        }
        mid = s + (e-s)/2;   
    }
}

int main(){

    int arr[] = {10,3,40,20,50,80,70};
    int n = 7;
    int target = 70;

    int ans = isPresent(arr,n,target);

    cout << ans << endl;

    return 0;
}