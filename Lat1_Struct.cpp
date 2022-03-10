//Program Menggunakan Array untuk melakukan Shorting/Searching

#include <string>
#include <stdio.h>
#include <iostream>
#include <conio.h>

using namespace std;


int main(int argc, char const *argv[])
{
	struct tanggal{
		int tanggal, bulan, tahun;
	};
	struct data_mahasiswa{
		char nama[30];
		struct tanggal tgl_lahir;
	};
	struct data_mahasiswa dataku;
	char tombol;
	int i, jumlah = 0;

	puts("DATA MAHASISWA : \n");
	cout << "Nama : ";
	gets(dataku.nama);
	cout << "Tanggal Lahir (tgl-bulan-tahun) : ";
	scanf("%d-%d-%d", &dataku.tgl_lahir.tanggal,
		&dataku.tgl_lahir.bulan, &dataku.tgl_lahir.tahun);

	cout << "\nDATA MAHASISWA\n";
	cout << "NAMA                TANGGAL LAHIR\n";
	cout << dataku.nama;
	cout << "       ";
	cout << dataku.tgl_lahir.tanggal << " - ";
	cout << dataku.tgl_lahir.bulan << " - ";
	cout << dataku.tgl_lahir.tahun;

	cout << endl << endl;
	system("PAUSE");
	return EXIT_SUCCESS;
}