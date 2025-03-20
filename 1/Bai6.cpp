#include <iostream>
using namespace std;

int DemSoDeQuy (int x) {
	if (x<10) 
	return 1;
	return 1 + DemSoDeQuy (x / 10);
}

int DemSoLap(int x) {
	int Dem = 0;
	while (x > 0) {
		Dem++;
		x /= 10;
	}
	return Dem;
}

int main() {
	int n;
	cout << "Nhap so nguyen duong: ";
	cin >>n;
	
	if (n <= 0) {
		cout  << "Vui long nhap so nguyen duong " << endl;
		return 1;
	}
	cout << "So chu so (de quy): "<< DemSoDeQuy(n) << endl;
	cout << " So chu so (lap): " << DemSoLap(n) << endl;
	return 0;
}
