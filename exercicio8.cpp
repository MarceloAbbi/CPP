#include <iostream>


using namespace std;

int main(){

	string nome[5], nomeMaisPesada, nomeMaisAlta, sequenciaMaisPesada = "", sequenciaMaisAlta = "", conexaoMaisPesada = "", conexaoMaisAlta = "";
	int peso[5], altura[5], pesoMaisPesada, alturaMaisAlta;
	
		for (int i = 0; i < 5; i++)
		{
			cout << "Digite o nome da " << i + 1 << "a pessoa: " << endl;
			cin >> nome[i];
			cout << "Digite o peso da " << i + 1 << "a pessoa em Kg: " << endl;
			cin >> peso[i];
			cout << "Digite a altura da " << i + 1 << "a pessoa em cm: " << endl;
			cin >> altura[i];
			//
			if (i == 0)
			{
				pesoMaisPesada = peso[i];
				alturaMaisAlta = altura[i];
			}
			
			if (peso[i] > pesoMaisPesada) pesoMaisPesada = peso[i];
			if (altura[i] > alturaMaisAlta) alturaMaisAlta = altura[i];
		}
		for (int i = 0; i < 5; i++)
		{
			if (peso[i] == pesoMaisPesada)
			{
				if (sequenciaMaisPesada == "") sequenciaMaisPesada = nome[i];
				else sequenciaMaisPesada += ", " + nome[i];
				if (conexaoMaisPesada == "") conexaoMaisPesada = "A pessoa mais pesada eh: ";
				else conexaoMaisPesada = "As pessoas mais pesadas sao: ";
			}
			if (altura[i] == alturaMaisAlta)
			{
				if (sequenciaMaisAlta == "") sequenciaMaisAlta = nome[i];
				else sequenciaMaisAlta += ", " + nome[i];
				if (conexaoMaisAlta == "") conexaoMaisAlta = "A pessoa mais alta eh: ";
				else conexaoMaisAlta = "As pessoas mais altas sao: ";
			}
		}
		cout << conexaoMaisPesada << sequenciaMaisPesada << " com " << pesoMaisPesada << " Kg" << endl;
		cout << conexaoMaisAlta << sequenciaMaisAlta << " com " << alturaMaisAlta << " cm" << endl;
	
	return 0;
}
