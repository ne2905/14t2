#include <iostream>
#include<math.h>
using namespace std;
 
 int ucln_dequy ( int p, int q) {
 	if (q == 0) return p;
 	return ucln_dequy (q, p % q);
 }
 
 int ucln_lap (int p, int q){
 	while (q !=0) {
 		int r = p % q;
 		p = q;
 		q = r;
	 }
	 return p;
 }
 int main(){
 	int a, b;
 	cout<<"Nhap hai so: ";
 	cin >> a >> b;
 	cout <<"Uoc so chung lon nhat (de quy): "<< ucln_dequy(a, b)<< endl;
 	cout <<"Uoc chung lon nhat (lap): " << ucln_lap(a, b) << endl;
 	return 0;
 }