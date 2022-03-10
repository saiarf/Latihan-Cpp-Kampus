#include <iostream>

using namespace std;

int main()
{
	int satria, *andin, rafli;
	satria = 50;
	andin = &satria;
	rafli = *andin;

	cout << " nilai satria adalah : " << satria << endl;
	cout << " nilai andin adalah : " << andin << endl;
	cout << " nilai rafli adalah :  " << rafli << endl; 

	// int a = 1;

	// cout << "Program Looping while\n\n";
	
	// while(a < 10){
	// 	cout << "Hore ";
	// 	cout << a << endl;
	// 	a++;
	// }

	// cout << "\nprogram telah selesai\n";

	system("PAUSE");
	return EXIT_SUCCESS;
}

	// char a;
	// printf("===========================================\n");
	// printf("=                LATIHAN 1.B              =\n");
	// printf("=       ALGORITMA DAN PEMROGRAMAN II      =\n");
	// printf("         OLEH: "); scanf(" a               \n");
	// printf("=            FAKULTAS TEKNIK              =\n");
	// printf("= UNIVERSITAS MUHAMMADIYAH PROF. DR HAMKA =\n");
	// printf("===========================================\n");
	// system("PAUSE");