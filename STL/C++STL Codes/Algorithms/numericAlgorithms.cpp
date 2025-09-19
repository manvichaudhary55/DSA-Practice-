#include<iostream>
#include<algorithm>
#include<numeric>
#include<vector>
using namespace std;


int main() {

    vector<int> first(5);

    iota(first.begin(), first.end(), 250);

    for(int a: first) {
        cout << a << " ";
    }

    // //   NOTE 
    // // Fills consequtive value from assigntd value
    // // 250,251,252,253,254



    // vector<int> first;
    // first.push_back(1);
    // first.push_back(2);
    // first.push_back(3);
    // first.push_back(4);

    // vector<int> result(first.size());

    // partial_sum(first.begin(), first.end(), result.begin());

    // for(int a: result ) {
    //     cout << a << " ";
    // }
    // cout << endl;

    // // NOTE THAT
    // // 1 , 1+2 , 1+2+3 ,1+2+3+4
    // // 1,3,6,10

    

        
    // vector<int> second;
    // second.push_back(3);
    // second.push_back(4);
    // second.push_back(5);

    // int ans = inner_product(first.begin(), first.end(), second.begin(),0);
    // cout << ans << endl;
    

    // // NOTE THAT
    // // [1,2,3] 
    // // [4,5,6]
    // // 1*4  2*5  3*6
    // // 4+10+18 = 32 is the inner_product




    // vector<int> arr(5);
    // arr[0] = 10;
    // arr[1] = 20;
    // arr[2] = 30;
    // arr[3] = 40;
    // arr[4] = 50;



    // int totalSum = accumulate(arr.begin(), arr.end(), 0);
    // cout << totalSum << endl;





    return 0;
}