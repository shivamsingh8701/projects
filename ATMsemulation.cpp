 #include <iostream>
using namespace std; 
int main () {
    cout << " weclome to your branch ATM" << endl;
     cout << " enter your pin: " << endl;
    int pin;
    cin >> pin; 
    if (pin == 2345) {

    cout<< "select your transaction: " << endl;
    cout << "1. balance inquiry" << endl;   
    cout << "2. cash withdrawal" << endl;
    cout << "3. cash deposit" << endl;      
    cout << "4.exit" << endl;
    
    int choice;
    cout << "enter your choice: " << endl;
    cin >> choice;
    switch (choice) {
        case 1:
            cout << "your balance is 1000$" << endl;
            break;  
        case 2:
            cout << "enter the amount to withdraw: " << endl;
            int amount;
            cin >> amount;
            if (amount > 1000)
                cout << "insufficient balance!" << endl;
            else
                cout << "please take your cash: " << amount << "$" << endl;
            break;
        case 3:
            cout << "enter the amount to deposit: " << endl;

            int deposit;
            cin >> deposit;
            cout << "your new balance is: " << 1000 + deposit << "$" << endl;
            break;


        case 4:
            cout << "thank you for using our ATM. goodbye!" << endl;    
        // case 5:
        //     cout << "invalid choice! please try again." << endl;
        //     break;
    
    }      
    } else {
        cout << "incorrect pin! access denied." << endl;
    }
}