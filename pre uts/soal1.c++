#include <iostream>
using namespace std;

int main() {
    int data[5];
    int i = 0;

    cout << "Input:\n";
    while(i < 5) {
        cin >> data[i];
        i++;
    }

    cout << "Output: ";
    for(int j = 4; j >= 0; j--) {
        cout << data[j] << " ";
    }

    return 0;
}