#include <iostream>
#include <cmath>
using namespace std;

int main(){
	cout.setf(ios::fixed); cout.setf(ios::showpoint); cout.precision(4);
	//x
	double a1c[5]={4,4,5,3,3}, a2c[5]={3,3,4,2,3}, a3c[5]={5,4,2,2,2};
	//x
	cout << "MATRIX X :"<<endl;
	int kuda1=0;
	do{
		cout << a1c[kuda1]<<" | ";
		kuda1++;
	}while(kuda1<5);cout<<endl;
	int kuda2=0;
	do{
		cout << a2c[kuda2]<<" | ";
		kuda2++;
	}while(kuda2<5);cout<<endl;
		int kuda3=0;
	do{
		cout << a3c[kuda3]<<" | ";
		kuda3++;
	}while(kuda3<5);cout<<endl;


}
