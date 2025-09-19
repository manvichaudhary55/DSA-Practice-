//Given two integers one is a divident and the other is a divisor ,
//we need to find the quotien when the divident is divided by the divisor 
//without the use of any % or / operator 

#include<iostream>
using namespace std;

int find(int divident , int divisor){
    int s = 0;
    int e = divident;

    int quotient = INT_MIN;
    
    int mid = s + ((e-s)>>1);

    while(s<=e){

        if((divisor * mid) == divident){
            return mid;
        }
        else if((divisor * mid) < divident){
            quotient = mid;
            s = mid + 1;
        }
        else{
            e = mid - 1;
        }
        mid = s + ((e-s)>>1);
    }

    return quotient;
}

int main(){

    int divident = 10;
    int divisor = -1;

    int quotient = find(abs(divident),abs(divisor));

    if(((divident<0)&&(divisor>0)) || ((divident>0)&&(divisor<0))){
        //making it negative
        quotient = -quotient;
    } 
    cout << "Quotient is : " << quotient << endl;
    return 0;
}

