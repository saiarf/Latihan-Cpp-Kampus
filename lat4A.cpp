#include <iostream>
#include <conio.h>
#include <stdio.h>
using namespace std;

int main(int argc, char const *argv[])
{
	char nama[20], keterangan[30];
	char kategori;
	int nilai;


	printf("===========================================\n");
	printf("=               PRAKTIKUM 1B              =\n");
	printf("=       ALGORITMA DAN PEMROGRAMAN II      =\n");
	printf("         OLEH: MUHAMMAD SAIFUL ARIF       =\n");
	printf("=            FAKULTAS TEKNIK              =\n");
	printf("= UNIVERSITAS MUHAMMADIYAH PROF. DR HAMKA =\n");
	printf("===========================================\n");

	printf(" Masukan Nama : "); gets(nama);
	printf(" Nilai        : "); scanf("%d", &nilai);

	if(nilai >= 85){
		printf("\n Selamat.....!!! %s", &nama);
		printf("\n Anda Layak dapat Bintang");
		kategori = 'A';
	}else if(nilai >= 75){
		printf("\n Selamat.....!!! %s", &nama);
		printf("\n Selangkah lagi.... Anda layak dapat Bintang...!");
		kategori = 'B';
	}else{
		printf("\n Maaf....., %s", &nama);
		printf("\n Sebaiknya Anda Belajar Lagi....!");
		kategori = 'C';
	}printf("\n Kategori : %s\n", &kategori);

	/*char a;
	char kategori;
	int nilai;

	cout << "Masukan Nama : ";
	cin >> a;
	cout << "Nilai        : ";
	cin >> nilai;

	if(nilai >= 85){
		cout << "\n Selamat....." << a;
		cout << "\n Anda Layak mendapatkan bintang";
		kategori = 'A';
	}else if(nilai >= 75){
		cout << "\n Selamaat....." << a;
		cout << "\n Selangkah lagi...... Anda Layak Dapat Bintang...!";
		kategori = 'B';
	}else{
		cout << "\n Maaf........" << a;
		cout << "\n Sebaiknya Anda Belajar Lagi.....!";
		kategori = 'C';
	}cout << "\n Kategori : " << kategori << "\n";
	cout << endl;*/
	getch();
	system("PAUSE");
	return 0;
}
