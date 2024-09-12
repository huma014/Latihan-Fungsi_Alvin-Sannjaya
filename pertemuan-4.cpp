#include <iostream>
#include <string>

using namespace std;

int main() {
    // a. Menerima input username dan password
    string username, password;
    cout << "Masukkan username: ";
    getline(cin, username);
    cout << "Masukkan password: ";
    getline(cin, password);

    // Check if username and password are correct
    if (username == "alvin" && password == "pass") {
        cout << "Selamat datang, " << username << "!" << endl;
    } else {
        cout << "Username atau password salah!" << endl;
        return 1; // Exit program with error code 1
    }

    // c. Menerima input menu dari pilihan
    int menuChoice;
    cout << "Pilih menu:" << endl;
    cout << "1. Faktorial" << endl;
    cout << "2. Penambahan" << endl;
    cout << "3. Rata-rata" << endl;
    cin >> menuChoice;

    switch (menuChoice) {
        case 1: {
            int num;
            cout << "Masukkan nilai: ";
            cin >> num;
            int faktorial = 1;
            for (int i = 1; i <= num; i++) {
                faktorial *= i;
            }
            cout << "Faktorial dari " << num << " adalah " << faktorial << endl;
            break;
        }
        case 2: {
            int num1, num2;
            cout << "Masukkan nilai 1: ";
            cin >> num1;
            cout << "Masukkan nilai 2: ";
            cin >> num2;
            int hasil = num1 + num2;
            cout << "Hasil penambahan adalah " << hasil << endl;
            break;
        }
        case 3: {
            int num1, num2, num3;
            cout << "Masukkan nilai 1: ";
            cin >> num1;
            cout << "Masukkan nilai 2: ";
            cin >> num2;
            cout << "Masukkan nilai 3: ";
            cin >> num3;
            double rataRata = (num1 + num2 + num3) / 3.0;
            cout << "Rata-rata adalah " << rataRata << endl;
            break;
        }
        default:
            cout << "Menu tidak tersedia!" << endl;
            break;
    }

    // d. Setelah selesai menu, tampilkan output terima kasih telah menggunakan aplikasi dan exit program
    cout << "Terima kasih telah menggunakan aplikasi!" << endl;
    return 0;
}