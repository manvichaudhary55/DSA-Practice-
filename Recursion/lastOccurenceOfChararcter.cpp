#include <iostream>
#include <string>
using namespace std;

//Mistake -> did not pass string by reference 
void solve(string& str, char ch, int index, int& occurrenceAt) {
    if (index >= str.length()) {
        return;
    }
    if (str[index] == ch) {
        occurrenceAt++;
    }
    solve(str, ch, index + 1, occurrenceAt);
}

int main() {
    string str = "maanvi";
    int index = 0;
    char ch = 'a';
    int occurrenceAt = 0;

    solve(str, ch, index, occurrenceAt);

    cout << occurrenceAt << endl; // Print the number of occurrences

    return 0;
}
