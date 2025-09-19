#include <iostream>
using namespace std;


int main(){
    // //Stack memory 
    // int a = 5 ;
    // cout << a << endl ;
    // //arrays
    // int arr[2]={0};
    // cout << arr[0] << arr[1] << endl ;

    // //Heap memory 
    // int *p = new int ;
    // *p = 5 ;
    // cout << *p << endl ; 
    // delete p ;

    // //arrays 
    // int *brr = new int[5];
    // cout << brr[0] << brr[1] << endl;
    // delete[] brr;



    //2-D arrays  with heap memory 

    int **crr = new int*[4];

    for(int i = 0 ; i<4 ; i++){
        crr[i] = new int[3];
    }

    // Taking input 
    cout << "taking input";
    for(int i = 0 ; i<4 ; i++ ){
        for(int j = 0 ; j<3 ; j++){
            cin >> crr[i][j];
        }
    }

    //Taking output 
    for(int i = 0 ; i<4 ; i++ ){
        for(int j = 0 ; j<3 ; j++){
            cout << crr[i][j];
        }
    }

    for(int i = 0 ; i<4 ; i++ ){
        delete[] crr[i];
    }

}