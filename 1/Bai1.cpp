#include <iostream>
using namespace std;
int fibonacci (int n) {
	if (n ==1 || n == 2) 
	return 1;
		return fibonacci(n - 1) + fibonacci( n- 2);
}

int main() {
	int n;
	cout <<"Nhap so nguyen duong n: ";
	cin >> n;
	if (n <= 0 ) {
	cout <<" vui long nhap so nguyen duong " << endl;
	return 1;
	}
	cout << "So fibonacci thu "<< n << " la: " <<fibonacci(n) << endl;
	cout << "Day fibonacci tu 1 den " << n << ": ";
	for (int i=1; i<=n; i++){
		cout<< fibonacci(i) << " ";
	}
	cout << endl;
	return 0;
	}
	

