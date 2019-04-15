#include <iostream>
using namespace std;


void binary(int data[], int cari, int low, int high){
	int mid = (low+high)/2;
	
	if(data[mid] == cari){
		cout << "Data ditemukan di array ke-" << mid << endl;
	}
	else if(data[mid] < cari){
		// data mid+1 ke kanan
		binary(data, cari, mid+1, high);
	}
	else{
		// data mid-1 ke kiri
		binary(data, cari, low, mid-1);
	}
}


int main(){
	int data[8] = {1,2,3,4,5,6,7,8};
				// 0 1 2 3 4 5 6 7
	int cari;
	
	cout << "Masukkan angka yang akan dicari : ";
	cin >> cari;
	
	binary(data, cari, 0, 7);

}
