#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int a;
	char aritmatika;

	cout << "===========================================\n";
	cout << "=               PRAKTIKUM 1B              =\n";
	cout << "=       ALGORITMA DAN PEMROGRAMAN II      =\n";
	cout << "         OLEH: MUHAMMAD SAIFUL ARIF       =\n";
	cout << "=            FAKULTAS TEKNIK              =\n";
	cout << "= UNIVERSITAS MUHAMMADIYAH PROF. DR HAMKA =\n";
	cout << "===========================================\n";

	cout << "Masukan Bilangan Bulat : ";
	cin >> a;

	if(a%2 == 0){
		cout << "\n Nilai " << a << " Habis dibagi 2";
		cout << "\n Sehingga temasuk bilangan GENAP";
	}else if(a%2 == 1){
		cout << "\n Nilai " << a << " Tidak dibagi 2";
		cout << "\n Sehingga temasuk bilangan GANJIL";
	}cout << "\n Program Telah Selesai..... :) \n" << endl;

	system("PAUSE");
	return 0;
}