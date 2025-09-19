#include <iostream>
using namespace std;

void solve(int num){
    if(num==0){
        return;
    }

    int newNum = num / 10;
    solve(newNum);

    int digit = num % 10;
    cout << digit << endl;

}

int main(){
    int num = 389;
    solve(num);
    return 0;
}