#include <iostream>
using namespace std;

void solve(int *arr,int size){
    cout << sizeof(arr);
}

int main(){
    int a = 5 ;
    // cout << a << endl ;
    // cout << &a << endl;
    // int b = a ;
    // cout << b << endl;
    // int c = &a;

    // int *ptr = &a;
    // cout << sizeof(ptr)<< endl;


    // char ch = 'a';
    // char *ptr1 = &ch;
    // cout <<  sizeof(ptr1) << endl;

    // long l = 38323;
    // long *ptr2 = &l;
    // cout << sizeof(ptr2) << endl;
    
    // float f = 0.46;
    // float *ptr3 = &f ;
    // cout << sizeof(ptr3) << endl;


    //-------ARRAYS WITH POINTERS---------

    int arr[] = {10,20,30};
    // arr = arr + 1;
    int size = 3 ;
    solve(arr,size);

    // char ch[] = "manvi";
    // cout << ch ;


}