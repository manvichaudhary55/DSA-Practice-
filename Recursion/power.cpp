#include <iostream>
using namespace std;

int pow(int n){
    if(n==1){
        return 2;
    }
    int ans = 2 * pow(n-1);
    return ans ;
}

int main(){
    int  n;
    cout << "Enter the power" << endl;
    cin >> n ;
    cout << pow(n) << endl;
    return 0;
}