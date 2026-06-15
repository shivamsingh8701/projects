#include <iostream>
using namespace std;

int main()
{
    int countali = 0;
    int countbob = 0;
    int countcha = 0;
    int n;

    for (int i = 0; i < 106; i++) cout << "_";
    cout << "\nWelcome to your voting machine\n";
    for (int i = 0; i < 106; i++) cout << "_";

    cout << "\nYour candidates are:\n";
    cout << "1. Alice\n";
    cout << "2. Bob\n";
    cout << "3. Charlie\n";

    cout << "\nChoose 1, 2, or 3 to vote.\n";
    cout << "Enter 0 to stop voting.\n";

    while (true)
    {
        cin >> n;

        if (n == 0)
            break;

        switch (n)
        {
        case 1:
            countali++;
            break;

        case 2:
            countbob++;
            break;

        case 3:
            countcha++;
            break;

        default:
            cout << "Invalid vote!\n";
        }
    }

    cout << "\nResults:\n";
    cout << "Alice   : " << countali << endl;
    cout << "Bob     : " << countbob << endl;
    cout << "Charlie : " << countcha << endl;
if (countali == 0 &&
    countbob == 0 &&
    countcha == 0)
{
    cout << "No votes were cast." << endl;
}
else if (countali > countbob && countali > countcha)
cout << "Alice is winner with votes :" << countali << endl;
else if ( countbob > countali && countbob > countcha)
cout << "bob is winner with votes :" << countbob << endl;
else if (countcha > countali && countcha > countbob)
cout << "charlie is winner with votes :" << countcha << endl;
else 
cout << " tie  voting ..." << endl;
    return 0;
}