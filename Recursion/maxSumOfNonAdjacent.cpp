#include <iostream>
#include <vector>
using namespace std ;

int maxSumOfNonAd(int arr[],int size,int i){
    if(i>=size){
        return 0;
    }

    int includeAns = arr[i] + maxSumOfNonAd(arr,size,i+2);
    int excludeAns= 0+maxSumOfNonAd(arr,size,i+1);

  
    return max(includeAns,excludeAns);

}

int main(){
    int arr[]={10,20,30,70,60,100};
    int size = 6;
    int index = 0;

    
    int ans = maxSumOfNonAd(arr,size,index);
    cout << ans;
}