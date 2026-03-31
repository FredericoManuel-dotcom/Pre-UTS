#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Input: ";
    cin >> a >> b;

    while(b != 0) {
        int sisa = a % b;
        a = b;
        b = sisa;
    }

    cout << "Output: " << a;

    return 0;
}