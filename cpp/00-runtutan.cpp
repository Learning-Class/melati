// Program penghitung rata rata dari 3 nilai
// Input : Nilai (0 <= Nilai <= 100) sebanyak 3 buah
// Output : Rata rata
#include<iostream>
using namespace std;

int main() {
	float nilai1, nilai2, nilai3, rata;
	
	cout << "Masukan nilai 1 :";
	cin >> nilai1; 

	cout << "Masukan nilai 2 :";
	cin >> nilai2; 

	cout << "Masukan nilai 3 :";
	cin >> nilai3; 

	rata = (nilai1 + nilai2 + nilai3) / 3;

	cout << "Rata rata : " << rata;

	return 0;
}
