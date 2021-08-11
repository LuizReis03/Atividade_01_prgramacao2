#include <iostream>
using namespace std;

int main(){
	int num =0;
	
	cout << "Entre com um numero: " << "\n";
	cin >> num;
	
	if (num < 0){
		num = num * -1;
		cout << "\nO numero agora e: " << num;
	}
	
	else{
		cout << num;
	}
	
	return 0;
}
