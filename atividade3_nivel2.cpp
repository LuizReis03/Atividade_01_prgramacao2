#include <iostream>
using namespace std;

int main(){
	int f =0;
	int c = 0;
	
	cout << "Entre com um valor de tempratura em Fahrenheit: " << "\n";
	cin >> f;
	
	c = ((f - 32) * 5) / 9;
	cout << "\nA temperatura em Celsius e: " << c << " graus";
	
	return 0;
}
