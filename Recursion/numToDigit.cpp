#include <iostream>
using namespace std ;

void numToDigit(int num){
    if(num==0){
        return;
    }

    int digit = num % 10 ;
    cout << digit << endl;
    numToDigit(num/10);
}
int main(){
    int num = 389 ;

    numToDigit(num);
}