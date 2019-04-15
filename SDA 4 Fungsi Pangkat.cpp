#include <iostream>
using namespace std;

float pangkat(float a,int n){
	
	float hasil;
		hasil=1;
	for(int i=1;i<=n;i++){
		hasil=hasil*a;
		}
	return hasil;
}

int main(){
	
	int a,n;
	cout<<"Input angka 	: "; cin>>a;
	cout<<"Input pangkat 	: "; cin>>n;
	cout<<"Hasil 		: "<<pangkat(a,n);
	
}
