#include <iostream>

using namespace std;

int binary_search(int cari);

int main(){
	//clrscr();
	int cari, hasil;

	cout << "==========TUGAS PRAK.STRUKTUR DATA===========\n";
	cout << "=            LITA ASTRI PRAMESTI            =\n"; 
	cout << "=               2D-1903015121               =\n";
	cout << "=  UNIVERSITAS MUHAMMADIYAH PROF.DR HAMKA   =\n";
	cout << "=            TEKNIK INFORMATIKA             =\n";
	cout << "=============================================\n";
	cout << "=            PROGRAM SEARCHING              =\n";
	cout << "=============================================\n";
	cout << "Masukan data yang ingin di cari : ";
	cin >> cari;
	hasil = binary_search(cari);

	if(hasil == 1){
		cout << "\nData ada!\n\n";
	}else if(hasil == 0){
		cout << "\nData tidak ada!\n\n";
	}

	cout << "=============================================\n";
	cout << "=          Program Telah Berakhir           =\n";
	cout << "=============================================\n";

	system("PAUSE");
	return 0;
}

int binary_search(int cari){
	int data[10] = {1,3,4,7,12,25,40,65,78,90};
	int a,b,c;
	int n = 10;
	a = 0;
	b = n-1;
	bool ketemu = 0;

	while (a <= b && ketemu == 0){
		c = (a+b)/2;
		if(data[c] == cari){
			ketemu = 1;
		}else if(cari < data[c]){
			b = c-1;
		}else a = c+1;
	}
	
	if(ketemu == 1){
		return 1;
	}else{
		return 0;
	}
}