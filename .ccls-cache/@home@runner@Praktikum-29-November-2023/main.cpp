#include <cstdlib>
#include <ctime>
#include <iostream>

using namespace std;

int main() {
  // Seed untuk menghasilkan angka acak
  srand(time(0));

  // Pilihan pemain
  int pilihanPemain;

  cout << "Pilih:\n";
  cout << "1. Batu\n";
  cout << "2. Gunting\n";
  cout << "3. Kertas\n";
  cout << "Masukkan nomor pilihan Anda (1-3): ";
  cin >> pilihanPemain;

  // Pilihan komputer secara acak
  int pilihanKomputer = rand() % 3 + 1;

  // Menampilkan pilihan pemain dan komputer
  cout << "Anda memilih: ";
  switch (pilihanPemain) {
  case 1:
    cout << "Batu\n";
    break;
  case 2:
    cout << "Gunting\n";
    break;
  case 3:
    cout << "Kertas\n";
    break;
  default:
    cout << "Pilihan tidak valid\n";
    return 1; // Keluar dari program jika pilihan tidak valid
  }

  cout << "Komputer memilih: ";
  switch (pilihanKomputer) {
  case 1:
    cout << "Batu\n";
    break;
  case 2:
    cout << "Gunting\n";
    break;
  case 3:
    cout << "Kertas\n";
    break;
  }

  // Menentukan pemenang
  if (pilihanPemain == pilihanKomputer) {
    cout << "Hasil: Seri!\n";
  } else if ((pilihanPemain == 1 && pilihanKomputer == 2) ||
             (pilihanPemain == 2 && pilihanKomputer == 3) ||
             (pilihanPemain == 3 && pilihanKomputer == 1)) {
    cout << "\033[1;32mHasil: Kamu Menang!\033[0m\n";
  } else {
    cout << "\033[1;31mHasil: Kamu Kalah :( \033[0m \n";
  }

  return 0;
}
