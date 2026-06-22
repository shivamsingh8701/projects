#include <iostream>
#include <climits>
using namespace std;
int main ()
{

cout<< " Enter your number of entrys :  " ;
int num ;
cin >> num ;
cout<<endl ;

string name[100] ;
int salary[100] ;
int mxsalary = INT_MIN;
int mnsalary = INT_MAX ;
int salarysum = 0;
 int avgsalary ;
string highestEmployee ;
string lowestEmployee ;

for( int i=0 ; i<num ; i++) {
cout  << " enter name : " ;
    cin >> name[i] ;

cout << "enter " << name[i] << " salary :" ;
    cin>> salary [i] ;

    cout<<endl ;

}

for( int i=0 ; i<num ; i++){
    // highest salary
    if ( salary[i] > mxsalary ) {
            mxsalary = salary [i] ; 
            highestEmployee = name[i];
}
            // lowest salary
            if (salary[i]< mnsalary)
           { mnsalary = salary [i] ; 
            lowestEmployee = name[i]; }

        salarysum += salary[i];
           }
        avgsalary = salarysum/num ;

cout<<endl << endl ;
cout<< highestEmployee << " has highest salary : " << mxsalary << endl;
cout<< lowestEmployee <<" has lowest salary :" << mnsalary << endl;
cout<< "Average salary :" << avgsalary << endl;

}
