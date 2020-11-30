#include <iostream>


using namespace std;

int main(){
	
	float grao = 1;
	
	for (int i = 2; i <= 64; i++) grao *= 2;
	
	cout << "O monge recebeu: " << grao << " graos " << endl;
	
	return 0;
}
