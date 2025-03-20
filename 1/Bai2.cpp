#include <iostream>
using namespace std;

void chuyen(int n, char A, char B, char C) {
	if (n == 1) {
		cout << "chuyen 1 dia tu "<< A <<"sang " << C << endl;
	}
	else{ 
	chuyen(n-1, A , C , B);
	cout <<"chuyen dia "<< n << "tu " << A << "sang " << C << endl;
	chuyen(n-1, B, A, C);
	}
}
int main(){
	int n;
	cout<<"nhap so luong dia: "<< endl;
	cin >>n;
	if (n<1) {
		cout <<" so dia khong hop le"<<endl;
		return 1;
	}
	cout <<"quy trinh chuyen dia: "<<endl;
	chuyen(n ,'A' , 'B' , 'C');
	return 0;
}
