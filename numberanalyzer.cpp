#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int x;

    cout << "Enter a number: ";
    cin >> x;
 
 
    int sum = 0;
    int rev = 0;
    int mx = INT_MIN;
    int mn = INT_MAX;
    int ld;
    int temp = x;
    int count = 0; 
    
    while (x != 0)
    {
    //  for taking remenders and for dividing the number by 10 to get the next digit
      ld = x % 10;
       x = x / 10;

    //  for sum of digits
      sum += ld;
      rev = rev*10 + ld;
    // for counting the number of digits
       count++ ;
    //  for finding the maximum and minimum digit
       if (ld > mx)
        mx = ld;

       if (ld < mn)
        mn = ld;
        
    }

    // for checking whether the number is a palindrome or not

     if (temp == rev)
     {
        cout << "The number is a palindrome." << endl;
     }
     else
     {
        cout << "The number is not a palindrome." << endl;
     }
        
      
    cout << "Sum of digits: " << sum << endl;
    cout << "Reverse of the number: " << rev << endl;
    cout << "Maximum digit: " << mx << endl;
    cout << "Minimum digit: " << mn << endl;
    cout << "Number of digits: " << count << endl;
    
}