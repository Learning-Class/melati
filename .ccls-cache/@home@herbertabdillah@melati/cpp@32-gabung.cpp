// Program gabungan 2
#include<iostream>
using namespace std;

int main() {
	int jumlahLulus = 0, jumlahTidakLulus= 0;
	float nilai1, nilai2, nilai3, rata;

	for(int i = 0; i < 3; i++) {
		cout << "Masukan nilai 1 :";
		cin >> nilai1; 

		cout << "Masukan nilai 2 :";
		cin >> nilai2; 

		cout << "Masukan nilai 3 :";
		cin >> nilai3; 

		rata = (nilai1 + nilai2 + nilai3) / 3;

		cout << "Rata rata : " << rata;

		if(rata > 70) {
			cout << "anda lulus";
			jumlahLulus = jumlahLulus + 1;
		}else {
			cout << "anda tidak lulus";
			jumlahTidakLulus = jumlahTidakLulus + 1;
		}
	}
	cout << "Jumlah lulus : " << jumlahLulus;
	cout << "Jumlah tidak lulus : " << jumlahTidakLulus;
	

	return 0;
}
