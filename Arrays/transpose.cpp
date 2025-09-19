#include <iostream>
using namespace std;

int main(){

    int a[3][3] = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
        };
    int r = 3;
    int c = 3;
    
    for(int i = 0 ;i<r ; i++){
        for(int j = i ;j<c ;j++){
            swap(a[i][j],a[j][i]);
        }
    }



    for(int i = 0 ;i<r ; i++){
        for(int j =  0 ;j<c ;j++){
            cout << a[i][j];
        }
        cout << endl;
    }

    return 0;
}