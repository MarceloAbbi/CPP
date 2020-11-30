#include <iostream>


using namespace std;

int main(){
	int valor = 1;
	
	for (int i = 3; i <= 15; i += 2) valor *= i;
	
	cout  << "Resultado: " << valor << endl;
	
	return 0;
	
}
