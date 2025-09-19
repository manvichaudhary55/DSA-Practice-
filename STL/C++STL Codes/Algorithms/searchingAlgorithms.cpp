#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;



int main() {

    



    //min/max in a range
    // vector<int> arr;
    // arr.push_back(10);
    // arr.push_back(20);
    // arr.push_back(30);
    // arr.push_back(40);
    // arr.push_back(50);

    // auto it = max_element(arr.begin(), arr.end());
    // cout << *it << endl;

    // auto it = min_element(arr.begin(), arr.end());
    // cout << *it << endl;



    //2 number -> compare
    // int a = 10;
    // int b = 15;
    // cout << max(a,b) << endl;
    // cout << min(a,b) << endl;



    vector<int> arr;
    arr.push_back(10);
    arr.push_back(20);
    arr.push_back(30);
    arr.push_back(40);
    arr.push_back(50);

    int target = 34 ;
    //Needed to be sorted 
    sort(arr.begin(),arr.end());
    auto it = equal_range(arr.begin(),arr.end(),target);

    // Where sub range is defined by two iterators, one pointing to the first element that is not less than val and another pointing to the first element greater than val.

    cout << "Lower Bound of 34 is: "<<*it.first << endl;  
    cout << "Upper Bound of 34 is: "<<*it.second << endl;

    // auto it = upper_bound(arr.begin(), arr.end(), 40); 
    // cout << *it << endl;
    // auto it = lower_bound(arr.begin(), arr.end(), 35);
    // cout << *it << endl;

    // int target = 40;
    // bool it = binary_search(arr.begin(), arr.end(), target);
    // cout << it << endl;
    // // o(logn)




    return 0;
}