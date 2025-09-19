#include <iostream>
#include <string>
#include <algorithm>
#include <cctype> // for tolower

using namespace std;

// Function to check if a character is a vowel
bool isVowel(char c) {
    c = tolower(c); // Convert to lowercase for uniformity
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}

// Function to remove vowels from a string
void removeVowels(string& str) {
    // Use remove_if to move vowels to the end of the string
    auto newEnd = remove_if(str.begin(), str.end(), isVowel);

    // Erase the "removed" part of the string
    str.erase(newEnd, str.end());
}

int main() {
    string str = "Hello, World!";
    
    cout << "Original string: " << str << endl;

    // Remove vowels from the string
    removeVowels(str);

    // Output the result
    cout << "String after removing vowels: " << str << endl;

    return 0;
}
