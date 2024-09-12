#include <iostream>
using namespace std;

// ASSIGNMENT:
// Please make a program with 2 matrices as input (say A and B)
// The elements of the matrix are:
// A = i * j
// B = i + j
// Do the following matrix operations:
// B = A + B
// A = B - A
// Show the output of those instructions.

int A[3][3];
int B[3][3];

int main(){
    cout << "Initialize A:\n";
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            A[i][j] = (i * j);
            cout << " " << A[i][j];
        }
    cout << "\n";
    }
    
    cout << "Initialize B:\n";
    for (int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            B[i][j] = (i + j);
            cout << " " << B[i][j];
        }
    cout << "\n";
    }
    cout << "Matrix Operations:\n";
    cout << "B = A + B:\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            B[i][j] = A[i][j] + B[i][j];
            cout << " " << B[i][j];
        }
        cout << "\n";
    }
    
    cout << "A = B - A:\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            A[i][j] = B[i][j] - A[i][j];
            cout << " " << A[i][j];
        }
        cout << "\n";
    }
}

