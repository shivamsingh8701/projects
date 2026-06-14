#include <iostream>
using namespace std;
int main() {

    string password;
    cout << "Enter your password: ";
    cin >> password;


    bool hasUpper = false, hasLower = false, hasDigit = false, hasSpecial = false;

    for (char ch : password) {
        if (isupper(ch)) hasUpper = true;
        else if (islower(ch)) hasLower = true;
        else if (isdigit(ch)) hasDigit = true;
        else hasSpecial = true;
    }

    if (password.length() >= 8 && hasUpper && hasLower && hasDigit && hasSpecial) {
        cout << "Password is strong." << endl;
    } else if (password.length() < 8 && password.length() > 4  && (hasUpper && hasLower && hasDigit ||hasSpecial)) {
        cout << "Password is Medium." << endl; } 
    
    else { 
        cout << "Password is weak. " << endl;
    }

    return 0;
} 