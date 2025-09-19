#include <iostream>
using namespace std;

void solve(string &str,int index,string &output){
    if(index>=str.length()){
        return;
    }
    //getting last character
    char lastChar = str.back();
    //removing the last charcter from the string
    str.pop_back();
    output = output+lastChar;
    solve(str,index,output);

}

int main(){
    string str = "robber";
    int index = 0 ;
    string output = "";

    solve(str,index,output);

    cout << output ;
}

