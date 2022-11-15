#include <iostream>
using namespace std;

int main (){
	int nilai[3][3]={
	{10, 30, 50},
	{20, 40, 25},
	{35, 45, 80}
	};
	
	nilai[1][1]= 100;
	int i=nilai[1][1];
	
	for (int i=0; i<3; i++){
		for (int j=0; j<3; j++){
			cout << "Array nilai indeks ke-["<<i<<"]["<<j<<"] = " << nilai [i][j] << endl;
		}
	}
	
	cout << "Nilai Variabel i ke-2 : " << i << endl;
	return 0;

}
