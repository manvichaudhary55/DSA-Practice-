#include<iostream>
#include<stack>
using namespace std;

bool checkSorted(stack<int> &s,int prev){
    if(s.empty()){
        return true;
    }

    int curr = s.top();
    s.pop();
    if(curr<prev){
        bool aageKaAns = checkSorted(s,curr);
        s.push(curr);//backtrack
        return aageKaAns;
    }

    else{
        s.push(curr);//backtrack
        return false;
    }
}

int main(){

    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);

    int prev = INT_MAX;

    bool sorted = checkSorted(s,prev);

    cout << sorted << endl;

    return 0;
}