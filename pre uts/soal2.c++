#include <iostream>
using namespace std;

int main() {
    int n, kuadrat, jumlah = 0;

    cout << "Masukkan angka: ";
    cin >> n;

    kuadrat = n * n;
    int temp = kuadrat;

    while(temp > 0) {
        jumlah += temp % 10;
        temp /= 10;
    }

    for(int i = 0; i < 1; i++) {
        if(jumlah == n)
            cout << "ANGKA NEON";
        else
            cout << "BUKAN ANGKA NEON";
    }

    return 0;
}