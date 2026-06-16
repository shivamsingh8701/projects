#include <iostream>
using namespace std;

int main() {
    int rows, cols;
    
     
    cout << "Enter rows and columns: ";
    cin >> rows >> cols;

    int matrix[100][100];

    // Input matrix
    cout << "Enter matrix elements:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> matrix[i][j];
        }
    }

   for (int i = 0; i < 106; i++) cout << "_";

    // Output matrix
    cout << "\nMatrix is:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
for (int i = 0; i < 106; i++) cout << "_";
// sums of rows
 for (int i = 0; i < cols; i++) {
cout<< "sum of rows  "<< i+1 << " is :"<< " " ;
    int sum = 0 ;
 for (int j = 0; j < cols; j++) {
\
          sum += matrix[i][j] ;
      }    cout << sum<< endl; }
    
 // sum of colums 

for (int j = 0; j < cols; j++) {
cout<< "sum of columns  "<< j+1 << " is :" << " "; 
 int sumcol = 0 ;
 for (int i = 0; i < cols; i++) {
         sumcol += matrix[i][j] ;
      }    cout << sumcol << endl;
 }

// here is taking largest elements
int matrixmx = matrix[0][0];

for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
        if (matrix[i][j] > matrixmx) {
            matrixmx = matrix[i][j];
        }
    }
}

cout << "Largest element is: " << matrixmx << endl;

// here sum of primary digonals 

int primarySum = 0;

for (int i = 0; i < rows; i++) {
    primarySum += matrix[i][i];
}

cout << "Primary diagonal sum : " << primarySum << endl;

// here sum of secondry digonals sum
int secondarySum = 0;

for (int i = 0; i < rows; i++) {
    secondarySum += matrix[i][cols - 1 - i];
}

cout << "Secondary diagonal sum :" << secondarySum << endl;

    return 0;
}