#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Input: ";
    cin >> n;

    cout << "Output:\n";

    int i = 0;
    char huruf = 'A';

    while(i < n) {
        for(int j = 0; j <= i; j++) {
            cout << huruf;
        }
        cout << endl;
        huruf++;
        i++;
    }

    return 0;
}