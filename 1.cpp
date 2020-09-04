#include <iostream>
#include<math.h>
using namespace std;
float A,B;
int main (){
	setlocale(LC_ALL, "Russian");
	cout<<"A=";
	cin>>A;
	cout<<"A="; cout<<A<<" килобайт";
	cout << endl;
	A=A*1024;
	cout<<"A="; cout<<A<<" байт";
	cout << endl;
	cout << endl;
	cout<<"B=";
	cin>>B;
	cout<<"B="; cout<<B<<" килобайт";
	cout << endl;
	B=B/1024;
	cout<<"B="<<B<<" мегабайт";
	return 0;}
