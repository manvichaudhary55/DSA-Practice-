#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;


int main() {

    vector<int> arr;
    arr.push_back(22);
    arr.push_back(11);
    arr.push_back(55);
    arr.push_back(66);
    arr.push_back(77);

    //creates max heap -> o(n) T.C.
    make_heap(arr.begin(), arr.end());

    // for(int a: arr) {
    //     cout << a << " " ;
    // }cout << endl;

    //insertion
    arr.push_back(99);
    //push_heap -> log n complexity 
    push_heap(arr.begin(), arr.end());
    // for(int a: arr) {
    //     cout << a << " ";
    // }cout << endl;

    //deletion
    // o(1) -> T.C.
    pop_heap(arr.begin(), arr.end());
    arr.pop_back();


    //O(n)->T.C.
    sort_heap(arr.begin(), arr.end());
    for(int a: arr) {
        cout << a << " ";
    }cout << endl;




    return 0;
}