#include <iostream>
#include <string> 
using namespace std;

#define MAX 50 
// memilih: stack array
int main () {
    system("cls");

    char stack[MAX];
    int top = -1;
    
    string kata; 
    cout << "Masukkan sebuah kata: ";
    getline(cin,kata); 

    for (int i = 0; i < kata.length(); i++) {
        top++;
        stack[top] = kata[i]; 
    }

    cout << "isi stack (terbalik) : ";
    for (int i = top; i >= 0; i--) {
        cout << stack[i];
    }
    cout << endl;

    return 0;
}

