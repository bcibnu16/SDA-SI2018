#include <iostream>
using namespace std;

void deret(int angka){
	if (angka == 1){
		cout << 1 << " ";
	} else {
		deret (angka - 1);
		cout << angka << " ";
	}
}



int main(){
	
	int angka;
	cout << "Masukkan angka : "; cin >> angka;
	
	deret (angka); 
	
	//for (int i=1; i<=10; i++){
	//	cout << i << " ";
	}
