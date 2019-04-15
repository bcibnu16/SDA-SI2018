#include <iostream>
using namespace std;

struct orang{
	string nama;
	int umur;
};

orang saya;		//abstract
int angka; 		//primitive

int main(){
	
	angka = 1;
	saya.nama = "Ibnu";
	saya.umur = 16;
	
	cout<< "Nama Saya " << saya.nama << endl;
	cout<< "Umur Saya " << saya.umur << endl;

}
