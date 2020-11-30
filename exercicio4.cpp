#include <iostream>


using namespace std;

int main(){
	int valor, fatorial = 1;
	
	cout << "Digite um numero: " << endl;
	
	cin >> valor;
	
	for (int i = 2; i <=valor; i++) fatorial *= i;
	
	cout << "O fatorial do numero " << valor << " eh: "<< fatorial << endl;
	
	return 0;
}
