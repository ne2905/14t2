#include <iostream>
using namespace std;
 int max(int a[],int left , int right){
 
 	if(left == right)
 	return a[left];
 	else if (left+1 == right)
 	if(a[left]>a[right])
 	return a[left];
 	else return a[right];
 	else{
 		int mid = (left + right)/ 2;
 		int max_left = max(a, left , mid);
 		int max_right = max (a, mid + 1,right);
 		if (max_left > max_right)
 		return max_left;
 		else return max_right;
	 }
}
	 int main() {
	 	int n;
	 	cout <<"nhap so phan tu ";
	 	cin>>n;
	 	int a[n];
	 	cout<<"nhap mang: ";
	 	for (int i=0;i<n;i++) cin >>a[i];
	 	cout << "gia tri max: "<<max(a,0,n-1)<<endl;
	 }
 