#include<iostream>
using namespace std ;

int main(){
    int arr[] ={0,1,1,1,0,1,0,1,0,1};
    int n = 10 ;
    int zeros = 0 ;
    int ones = 0 ; 
    int i ,j ;
    for( i = 0 ; i<n ;i++){
        if(arr[i]==0){
            zeros++;
        }
        if(arr[i]==1){
            ones++;
        }
    }
    for( i = 0; i < zeros ; i ++){
        arr[i]=0;
        
    }
    for(j=zeros;j<n;j++){
        arr[j]=1;
    }
    for(i =0;i<n;i++ ){
        cout << arr[i];
    }
    
}