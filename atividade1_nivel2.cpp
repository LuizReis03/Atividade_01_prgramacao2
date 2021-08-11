#include <iostream>
using namespace std;

int main(){
	int tempo_gasto = 0;
	int velo_media = 0;
	int distancia = 0;
	int litros_usados = 0;
	
	cout << "\nFoi necessario quantas horas para chegar ao destino? ";
	cin >> tempo_gasto;
	
	cout << "\nQual a velocidade media durante o percurso? ";
	cin >> velo_media;
	
	distancia = tempo_gasto * velo_media;
	
	litros_usados = distancia / 12;
	
	cout << "\nForam necessarias " << tempo_gasto << " horas para chegar ao destino ";
	cout << "\nA velocidade media foi de: " << velo_media;
	cout << "\nFoi percorrido um total de " << distancia << " km ";
	cout << "\nForam gastos " << litros_usados << " litros de combustivel para concluir a viagem ";

return 0;
}
