#include <iostream>

using namespace std;

int main(){
	
	float valor1, valor2, resultado =0;
	
	cout << "Multiplicacao de dois valores sem usar multiplicacao\n\n";
	
	cout << "Informe valor de A: ";
	cin >> valor1;
	
	cout << "\nInforme valor de B: ";
	cin >> valor2;
	
	for (int i = 0; i < valor1 ; i++){
		resultado += valor2;
	}
	
	cout << "\n Resultado: " << resultado << endl;
	
	return 0;
}
