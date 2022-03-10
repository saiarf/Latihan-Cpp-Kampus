#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, char const *argv[])
{
	float a, b, c;
	float hasil;

	cout << "===========================================\n";
	cout << "=               PRAKTIKUM 1B              =\n";
	cout << "=       ALGORITMA DAN PEMROGRAMAN II      =\n";
	cout << "         OLEH: MUHAMMAD SAIFUL ARIF       =\n";
	cout << "=            FAKULTAS TEKNIK              =\n";
	cout << "= UNIVERSITAS MUHAMMADIYAH PROF. DR HAMKA =\n";
	cout << "===========================================\n";
	cout << "=          PROGRAM PENCARI LUAS           =\n";
	cout << "===========================================\n";
	cout << "= 1. Luas Persegi Panjang                 =\n";
	cout << "= 2. Luas Segi Tiga                       =\n";
	cout << "= 3. Luas Lingkaran                       =\n";
	cout << "===========================================\n";
	cout << "= pilihan anda adalah : ";
	cin >> a;
	cout << "\n===========================================\n";

	if(a == 1){
		cout << "\nTerima Kasih, Menu yang ada pilih nomor 1";
		cout << "\nMasukan Panjang :";
		cin >> b;
		cout << "Masukan lebar : ";
		cin >> c;
		hasil = b*c;
		cout << "\nLuasnya adalah: " << hasil << "\n";
	}else if(a == 2){
		cout << "\nTerima Kasih, Menu yang ada pilih nomor 2";
		cout << "\nMasukan alas :";
		cin >> b;
		cout << "Masukan tinggi : ";
		cin >> c;
		hasil = b*c;
		cout << "\nLuasnya adalah: " << hasil << "\n";
	}else if(a == 3){
		cout << "\nTerima Kasih, Menu yang ada pilih nomor 3";
		cout << "\nMasukan jari-jari :";
		cin >> b;
		hasil = b*b*22/7;
		cout << "\nLuasnya adalah: " << hasil << "\n";
	}cout << "PROGRAM TELAH BERAKHIR, TERIMA KASIH \n";

	system("PAUSE");
	return 0;
}