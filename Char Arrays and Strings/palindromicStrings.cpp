#include <iostream>
#include <string>
using namespace std ;




    int expandAroundCenter(string s , int i, int j ){
        int count  = 0 ;
        while(i>=0 && j<s.length() && s[i]==s[j]){
            count++;
            i--;
            j++;
        }
        return count ;
    }

    int main() {
        int totalCount = 0 ;
        string s = "madam";
        for(int center = 0 ; center<s.length() ; center++){
            //For event substrings
            int i = center ;
            int j = center ;

            int oddLength = expandAroundCenter(s,i,j);
            cout << "odd" << oddLength << endl;

            i = center ;
            j = center + 1 ;

            int evenLength = expandAroundCenter(s,i,j);
            cout << "even"<< evenLength << endl;

            totalCount = totalCount + oddLength + evenLength; 
        }
        cout <<  totalCount << endl ;

        return  0 ; 
    }