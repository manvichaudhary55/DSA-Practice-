#include <iostream>
#include <vector>
using namespace std;

void printSubsequence(string str,string output ,int i,vector<string> &ans){
    //base case 
    if(i == str.length()){
        // cout << output << endl ;
        ans.push_back(output);
        return;
    }
    char ch = str[i];

    
    //include 
    printSubsequence(str,output+ch,i+1,ans);

    //exclude 
    printSubsequence(str,output,i+1,ans);
}
int main(){
    string str ="abc";
    string output = "";
    int index = 0 ;

    // For storing in vector 
    vector<string> ans ;
    printSubsequence(str,output,index,ans);

    cout << ans.size() << endl ;
    for(auto i : ans){
        cout << i << endl;
    }
}
