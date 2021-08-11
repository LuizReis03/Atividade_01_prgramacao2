#include <iostream>
using namespace std;

int main(){
	int c =0;
	int f = 0;
	
	cout << "Entre com um valor de tempratura em Celsius: " << "\n";
	cin >> c;
	
	f = (9 * c + 160) / 5;
	cout << "\nA temperatura em Fahrenheit e: " << f << " graus";
	
	return 0;
}
