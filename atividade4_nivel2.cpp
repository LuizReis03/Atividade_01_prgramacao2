#include <iostream>
using namespace std;

int main(){
	int c =0;
	int k = 0;
	
	cout << "Entre com um valor de tempratura em Celsius: " << "\n";
	cin >> c;
	
	k = c + 273.15;
	cout << "\nA temperatura " << c << " em Kelvin e: " << k <<" graus";
	
	return 0;
}
