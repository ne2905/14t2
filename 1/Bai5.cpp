#include <iostream>
#include <cmath>
using namespace std;
long power (int a , int n){
	if(n==0){
		return 1;
	}
	else if (n=1 )return a;
	else{
       long x= pow(a,n/2);
    if(n%2==0)
    return x * x;
    else return x*x*a;
	}
}
int main (){
	cout<<"nhap a,n";
	int a,n;
	cin>>a>>n;
	cout<<"a^n :"<<power(a,n)<<endl;
}