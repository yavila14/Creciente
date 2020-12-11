#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
int n1,n2,n3;
	cout <<"Digite numero uno : ";
	cin >>n1;
	cout <<"Digite numero dos : ";
	cin >>n2;
	cout <<"Digite numero tres : ";
	cin >>n3;
	if ((n1<n2)&&(n2<n3)&&(n3>n1)&&(n3>n2)){
		
		cout <<"Los numeros estan en orden creciente ";
	
}
	else
{      cout <<"Los numeros no estan en orden creciente ";
}
	return 0;
}
