#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main () {

    // taking input of students data 
    cout<< "Enter the name of students: ";
    string name ;

    getline(cin, name);
    // cin >> name ; {improved}

     cout<< "Enter the roll number of students: ";
    int rollno ;
    cin >> rollno  ;

    cout << "Enter the marks of " << "[" << name << "]: " << endl ;
     
       


         cout << "Maths: ";
                 int maths ;
                  cin >> maths ;
                  if (maths < 0 || maths > 100) {
            cout << "Invalid input !!"<< endl;
            return 1;
        }
         cout << "physics: ";
                 int physics ;
                 cin >> physics ;
                 if (physics < 0 || physics > 100) {
            cout << "Invalid input !!"<< endl;
            return 1;
        }

         cout << "English: ";
                 int english ;
                 cin >> english ;
                 if (english < 0 || english > 100) {
            cout << "Invalid input !!"<< endl;
            return 1;
        }

         cout << "chemistry: ";
                 int chemistry ;
                 cin >> chemistry ;
                 if (chemistry < 0 || chemistry > 100) {
            cout << "Invalid input !!"<< endl;
            return 1;
        }

         cout << "Computer Science: ";
                 int computer ;
                 cin >> computer ;
                 if (computer < 0 || computer > 100) {
                 cout << "Invalid input !!"<< endl;
                 return 1;
        }



for (int i = 0; i < 100; i++)
  { 
    cout << "*"; 
  } 

cout<< endl;
cout << "              ************ "<< "REPORT CARD" << " ************" << endl;
cout<< endl;
cout <<"                           "<<  "Name: " << name << endl;
cout << "                           "<< "Roll No: " << rollno << endl;
cout<< endl;
int total = maths + physics + english + chemistry + computer ;
cout << "                           "<< "Total Marks: " << total << endl ;
float percentage = (total / 500.0) * 100 ;
cout << "                           "<< "Percentage: " << percentage << "%" << endl ;
string grade = (percentage >= 90) ? "A+" :
        (percentage >= 80) ? "A" :
        (percentage >= 70) ? "B+" :
        (percentage >= 60) ? "B" :
        (percentage >= 50) ? "C+" :
        (percentage >= 40) ? "C" :
        "F";

cout << "                           "<< "Grade: " << grade << endl ;
  
float highest = max({maths, physics, english, chemistry, computer});
float lowest = min({maths, physics, english, chemistry, computer});

  string variableName;

    if (highest == maths)
        variableName = "Maths";
    else if (highest == physics)
        variableName = "Physics";
    else if (highest == english)
        variableName = "English";
    else if (highest == chemistry)
        variableName = "Chemistry";
    else
        variableName = "Computer Science";

string variableName2;

    if (lowest == maths)
        variableName2 = "Maths";
    else if (lowest == physics)
        variableName2 = "Physics";
    else if (lowest == english)
        variableName2 = "English";
    else if (lowest == chemistry)
        variableName2 = "Chemistry";
    else
        variableName2 = "Computer Science";
        cout<< endl;

cout << "                       "<< "Highest Marks: " << highest << " in " << variableName << endl ;
cout << "                       "<< "Lowest Marks: " << lowest << " in " << variableName2 << endl ;


for (int i = 0; i < 100; i++)
  { 
    cout << "*"; 
  } 
for (int i = 0; i < 150; i++)
  { 
    cout << "*"; 
  } 




}












