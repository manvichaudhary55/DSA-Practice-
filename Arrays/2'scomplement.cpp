#include <iostream>
#include <vector>
using namespace std;

vector<int> findComp(vector<int> &binary){
    int n = binary.size();
    vector<int> twosComp(n+1,0);
    int m = twosComp.size();
    //1's Complement 
    for(int i = n-1 ,  k = m-1 ; i>=0 ; i-- ,k--){
        twosComp[k] = (binary[i] == 0 ? 1 : 0); 
    }

    for(auto i : twosComp){
        cout << i ;
    }
    cout << endl;

    //2's Complement
    int carry = 1;
    for(int i = m-1;i>=0;i--){
        int sum = twosComp[i] + carry;
        twosComp[i] = sum % 2;
        carry = sum / 2 ;
    }

    //If carry is equal to 1 and not 0  
    if(carry){
        twosComp[0] = carry;
    }

    return twosComp;
}

int main(){
    vector<int> binary = {0,0,0,0};
    vector<int> twosComp = findComp(binary);

    for(auto i : twosComp){
        cout << i ;
    }
    return 0;
}