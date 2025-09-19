#include <iostream>
using namespace std ;

int main(){
    // char arr[100];
    // cin >> arr ;

    // cout << arr[0] << "=" << (int)arr[0] << endl;
    // cout << arr[1] << "=" << (int)arr[1]<< endl;
    // cout << arr[2] << "=" << (int)arr[2]<< endl;
    // cout << arr[3] << "=" << (int)arr[3]<< endl;
    // cout << arr[4] << "=" << (int)arr[4]<< endl;
    // cout << arr[5] << "=" << (int)arr[5]<< endl;

    char brr[80];

    cout << "Enter full name" << endl;
    
    cin.getline(brr, 80, '\t');
    cout << brr << endl;

    return 0 ;
}