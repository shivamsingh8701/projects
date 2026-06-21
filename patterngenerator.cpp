#include <iostream>
using namespace std ;

int n , type , j , i  ;
int main () {


     cout << " select the type :" << endl;
     
     cout << " 1 . square" << endl;
     cout << " 2 . triangle" << endl;
     cout << " 3 . pyramid" << endl;
     cout << " 4 . diamond" << endl;
     
     cout<< " enter type :" ;
    cin >> type ;

    

    switch ( type) {

        case 1 :
        {  cout << " enter the size :   " ;
    cin >> n ;
        
 {

for ( int i =0 ; i<n ; i++) {

    for ( int j=0 ; j<n ; j++ )
    { cout<<" * " ; }
    cout << endl ;
} }
break;

case 2:
// triangle
  {cout << " enter the size :   " ;
    cin >> n ;
for(i=0 ; i<=n ; i++) {
    for (j=0 ; j<i ; j++) {
        cout << " *" ;
    }
    cout<< endl ;

}}

break;
case 3:
// pyramid
  {cout << " enter the size :   " ;
    cin >> n ;
for(i=0 ; i<=n ; i++) 
{for(int k = 0 ; k <=n- i ; k++)
{cout<<" " ; } 

    for (j=0 ; j<i ; j++) {
        cout << " *" ;
    }
    cout<< endl ;
    
}}
break;

case 4:  
// diamond
 { cout << " enter the size :   " ;
    cin >> n ;
for(i=0 ; i<=n/2 ; i++) 
{for(int k = 0 ; k <=n/2- i ; k++)
{cout<<" " ; } 

    for (j=0 ; j<i ; j++) {
        cout << " *" ;
    }
    cout<< endl ;
    
}

for(int y = 0 ; y <=n/2 ; y++) 
{for(int k = 0 ; k < y; k++)
{cout<<" " ; } 

    for (j=0 ; j<=n/2 - y ; j++) {
        cout << " *" ;
    }
    cout<< endl ;
    
} }
break;
default:
{cout<< "wrong option entered !!"; }

}

}
return 0 ;}
