#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main()
{
    string str;

    int vowels = 0, consonants = 0;
    int spaces = 0, digits = 0;
    int upper = 0, lower = 0;

    cout << "Enter your string: ";
    getline(cin, str);

    
for (int i =0 ; i <= 106 ; i++) {
    cout << "_" ;
}

    int length = str.length();

    for (char ch : str)
    {
        if (ch == ' ')
        {
            spaces++;
        }
        else if (isdigit(ch))
        {
            digits++;
            cout << ch << " -> digits" << endl;
        }
        else if (isalpha(ch))
        {if (isupper(ch))
{
    upper++;
    cout << ch << " -> upper case" << endl;
}
else
{
    lower++;
    cout << ch << " -> lower case" << endl;
}
            char lowerCh = tolower(ch);

            if (lowerCh == 'a' || lowerCh == 'e' ||
                lowerCh == 'i' || lowerCh == 'o' ||
                lowerCh == 'u')
            {
                vowels++;
                cout << ch << " -> vowel " << endl;
            
            }
            else
            {
                consonants++;
                 cout << ch << " -> consonent " << endl;
            }
        }
    }

for (int i =0 ; i <= 106 ; i++) {
    cout << "_" ;
}
    cout << "Length      : " << length << endl;
    cout << "Upper Case  : " << upper << endl;
    cout << "Lower Case  : " << lower << endl;
    cout << "Digits      : " << digits << endl;
    cout << "Vowels      : " << vowels << endl;
    cout << "Consonants  : " << consonants << endl;
    cout << "Spaces      : " << spaces << endl;

    return 0;
}