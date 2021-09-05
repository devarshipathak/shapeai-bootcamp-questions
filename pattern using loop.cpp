#include <iostream>
#include<conio.h>

using namespace std;

int main() {

    
    int rows=5, i, j;

   for (i = 0; i < rows; i++) {
        for (j = rows; j > i; j--) {
            cout << " ";
        }

        for (int k = 1; k <= i + 1; k++) {
            cout << " * ";
        }
        cout << "\n";
    }

    getch();
    return 0;
}