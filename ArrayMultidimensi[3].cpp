#include <iostream>
using namespace std;

int main (){
	//membuat dan mengisi array 2 dimensi kosong
	int a [2][3] = {{5,10,15}, {20,25,30}};
	
	
	//mencetak isi array
	for (int i=0; i<=1; i++) {
		for (int j=0; j<=2; j++) {
			cout<<"Nilai Index ke-["<<i<<"] : "<<a[i] [j] <<endl;
		}
	}
}