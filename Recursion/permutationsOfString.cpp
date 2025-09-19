#include <iostream>
using namespace std ;


//String is passed  by value so this solution dosent need back-tracking.
// void findPermutations(string str , int i){
//     if(i>=str.length()){
//         cout << str << endl;
//         return ;
//     }

//     for(int j = i ; j<str.length();j++){
//         swap(str[i],str[j]);
//         findPermutations(str,i+1);
        
//         // As such no need for swapping -> Only going to change the sequence 
//         // swap(str[i],str[j]);
        

//     }
    
// }

//Now string is passed by reference -> Apply backtracking
void findPermutations(string &str , int i){
    if(i>=str.length()){
        cout << str << endl;
        return ;
    }

    for(int j = i ; j<str.length();j++){
        swap(str[i],str[j]);
        findPermutations(str,i+1);
        swap(str[i],str[j]);
    }
    
}
int main(){
    string str = "abc";
    int i = 0 ;
    

    findPermutations(str,i);
}