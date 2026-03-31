#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Input: ";
    cin >> n;

    cout<< "Output:\n";
    
    int i = 0;
    while(i < n) {
        int nilai = 1;

        for(int j = 0; j <= i; j++) {
            cout << nilai << " ";
            nilai = nilai * (i - j) / (j + 1);
        }

        cout << endl;
        i++;
    }

    return 0;
}