#include <iostream>
using namespace std;

int fibo(int a){
	if (a<=0 || a<=1)
		return a;
	else
		return fibo(a-1)+fibo(a-2);
}

int main(){
	int n;
	cout<<"Batas Fibonacci :";
	for(int i=0; i<n; i++){
		cout<<"f"<<i<<"="<<fibo(i)<<endl;
	}
}
