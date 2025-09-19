#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>
using namespace std;

// Function to check if a character is 'a', 'z', or a space
bool isSpecialChar(char c) {
    c = tolower(c); 
    return (c == 'a' || c == 'z' || c == ' ');
}

// Function to clean the string and check if it is a valid palindrome
bool validPal(string& str) {
    // Remove specified characters
    auto newEnd = remove_if(str.begin(), str.end(), isSpecialChar);
    str.erase(newEnd, str.end());
    
    // Convert all characters to lowercase
    transform(str.begin(), str.end(), str.begin(), ::tolower);
    
    // Check if the string is a palindrome
    string reversed = str;
    reverse(reversed.begin(), reversed.end());
    return str == reversed;
}

int main() {
    string str = "A man, a plan, a canal: Panama";
    cout << "Before: " << str << endl;
    
    bool ans = validPal(str);
    
    // Print the cleaned string
    cout << "After: " << str << endl;
    
    if (ans) {
        cout << "The string is a palindrome." << endl;
    } else {
        cout << "The string is not a palindrome." << endl;
    }
    
    return 0;
}
