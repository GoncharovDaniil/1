#include <iostream>
#include<math.h>
using namespace std;
float A,B;
int main (){
	setlocale(LC_ALL, "Russian");
	cout<<"A=";
	cin>>A;
	cout<<"A="; cout<<A<<" ��������";
	cout << endl;
	A=A*1024;
	cout<<"A="; cout<<A<<" ����";
	cout << endl;
	cout << endl;
	cout<<"B=";
	cin>>B;
	cout<<"B="; cout<<B<<" ��������";
	cout << endl;
	B=B/1024;
	cout<<"B="<<B<<" ��������";
	return 0;}
