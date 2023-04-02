#include <iostream>
using namespace std;

int main () {
	int a [2] [3]; //membuat ordo matriks 2x3
	
	//mengisi nilai ordo matriks 2x3
	for (int i=0; i<=1; i++) {
		for (int j=0; j<=2; j++) {
			cout<< "Inputkan nilai index ke-["<<i<<"] ["<<j<<"] : ";
			cin>>a[i] [j];
		}
	}
	
	//menampilkan nilai ordo matriks 2x3
	cout<<"\nNilai matriks 2x3 adalah ";
	for (int i=0; i<=1; i++) {
		for (int j=0; j<=2; j++) {
			cout<<a[i] [j]<< " ";
		}
	}
}
