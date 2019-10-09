// Program penentu lulus atau tidak
// Input : Nilai (0 <= Nilai <= 100)
// Output : StatusLulus ({Lulus, Tidak})
#include<iostream>
using namespace std;

int main() {
	float nilai;
	
	cout << "masukan nilai :";

	cin >> nilai; 

	if (nilai > 70) {
		cout << "anda lulus";
	} else{
		cout << "anda tidak lulus";
	}
	return 0;
}
