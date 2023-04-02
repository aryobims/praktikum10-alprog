#include <iostream>
using namespace std;

int main (){
	//membuat array 3 dimensi kosong
	int a[2][3][4];
	
	//mengisi nilai array 3 dimensi
	a[0][0][0] = 1;
	a[0][0][1] = 2;
	a[0][0][2] = 3;
	a[0][0][3] = 4;
	a[0][1][4] = 5;
	a[0][1][0] = 6;
	a[0][1][1] = 7;
	a[0][1][2] = 8;
	a[0][2][3] = 9;
	a[0][2][4] = 10;
	a[0][2][0] = 11;
	a[0][2][1] = 12;
	a[1][0][2] = 13;
	a[1][0][3] = 14;
	a[1][0][4] = 15;
	a[1][0][0] = 16;
	a[1][1][1] = 17;
	a[1][1][2] = 18;
	a[1][1][3] = 19;
	a[1][1][4] = 20;
	a[1][2][0] = 21;
	a[1][2][1] = 22;
	a[1][2][2] = 23;
	a[1][2][3] = 24;
	
	//mencetak salah satu isi array
	cout<<"Nilai index ke-[1][2][3]: "<<a[1][2][3]<<endl;
	
}