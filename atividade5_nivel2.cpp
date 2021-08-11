#include <iostream>
using namespace std;

int main(){
	int f =0;
	int k = 0;
	int c = 0;
	
	cout << "Entre com um valor de tempratura em Farenheint: " << "\n";
	cin >> f;
	
	c = + ((f - 32) * 5) / 9;
	
	k = c + 273.15;
	cout << "\nA temperatura em Kelvin e: " << k;
	
	return 0;
}
