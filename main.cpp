#include <iostream>

using namespace std;

int main() {
    string str;
    cout << "Enter the string: ";
    cin >> str;
    if (str.length() % 4 == 0)
    {
        string newStr;
        for (int i = str.length()/2; i < str.length(); ++i)
        {
            newStr += str[i];
        }
        for (int i = 0; i < str.length()/2; ++i) {
            newStr += str[i];
        }
        cout << "Resulted str: " << newStr;
    } else
    {
        cout << "Nothing happened.";
    }
    return 0;
}
