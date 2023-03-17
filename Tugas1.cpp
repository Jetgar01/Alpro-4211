#include <iostream>
using namespace std;

int tambah(int a, int b) {
    return a + b;
}

int kurang(int a, int b) {
    return a - b;
}

int hitungjumlah(int arr[], int size) {
    int total;
    for (int i = 0; i < size; i++) {
        total = total + arr[i];
    }
    return total;
}

float hitungrata(int arr[], int size) {
    float total = 0;

    for (int i = 0; i < size; i++) {
        total = total + arr[i];
    }
    float rata = total / size;
    return rata;
}

int main() {
    int x,y,n;
    int arr[n];

    // Penjumlahan
    cout << "Fungsi Tambah "<<endl;
    cout << "Masukkan bilangan 1  : ";
    cin >> x;
    cout << "Masukkan bilangan 2  : ";
    cin >> y;
    int hasiltambah = tambah(x, y);
    cout << "Hasil penjumlahan    : " << hasiltambah << endl;

    // Pengurangan
    cout << "\nFungsi Kurang "<<endl;
    cout << "Masukkan bilangan 1  : ";
    cin >> x;
    cout << "Masukkan bilangan 2  : ";
    cin >> y;
    int hasilkurang = kurang(x, y);
    cout << "Hasil pengurangan    : " << hasilkurang << endl;


    // Jumlah Array
    cout << "\nJumlah Array" << endl;
    cout << "Masukkan jumlah elemen array  : ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        cout << "Masukkan elemen ke-" << i+1 << " : ";
        cin >> arr[i];
    }
    int total = hitungjumlah(arr, n);
    cout << "Total nilai dari array adalah : " << total << endl;

    // Rata-Rata Array
    cout << "\nRata-Rata Array" << endl;
    cout << "Masukkan jumlah elemen array : ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        cout << "Masukkan elemen ke-" << i+1 << " : ";
        cin >> arr[i];
    }
    float rata = hitungrata(arr, n);
    cout << "Rata-rata dari array adalah  : " << rata << endl;

    return 0;
}
