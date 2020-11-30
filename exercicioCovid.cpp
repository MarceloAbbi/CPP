#include <iostream>
#include <tchar.h>

using namespace std;

bool pergunta(string strPergunta){
	char resposta = '_';
    cout << endl << strPergunta << endl;
    while (resposta != 'n' && resposta != 'N' && resposta != 's' && resposta != 'S'){
        cin >> resposta;
        if (resposta != 'n' && resposta != 'N' && resposta != 's' && resposta != 'S'){
            cout << endl << "Resposta Invalida. Por favor, digite s ou n." << endl;
        }else if (resposta != 'n' && resposta != 'N') return true;
        else return false;
    }
}

bool idaMedico(string strSintomas, int pontos){
    if (pontos >= 2){
        cout << endl << "O paciente precisa ir ao medico pelos seguintes sintomas: " << endl;
        cout << strSintomas << endl;
        return true;
    }
	else return false;
}

char sairFn(){
    char sair = '_';
    cout << "Voce gostaria de fazer outra entrevista?" << endl;
    while (sair != 'n' && sair != 'N' && sair != 'S' && sair != 's'){
    	cin >> sair;
        if (sair != 'n' && sair != 'N' && sair != 'S' && sair != 's'){
            cout << endl << "Resposta Invalida. Por favor, digite s ou n" << endl;
        }
    else if (sair != 'n' && sair != 'N') return 's';
    else return 'n';
    }
}


int main(){

cout << "Bem-Vindo a entrevista de verificacao dos sintomas de COVID-19." << endl;
cout << "Para respostas positivas, digite s e aperte enter." << endl;
cout << "Para respostas negativas, digite n e aperte enter." << endl;

    char outra = 's';
    int pontos = 0;
    string sintomas = "";

    while (outra == 's'){
        pontos = 0;
        sintomas = "";
        if (pergunta("Voce apresentou febre e tosse seca por mais de 2 dias?")){
            sintomas = "Apresentou febre e tosse seca por mais de 2 dias\n"; pontos = 1;
        }
        if (pergunta("Voce apresentou febre corporal por mais de 3 dias? (eh considerado febre temperatura corporal a partir de 38ºC)")){
            sintomas = "Apresentar febre por mais de 3 dias.\n"; pontos += 1;
        }
        if (idaMedico(sintomas, pontos)){
            outra = sairFn(); continue;
        }
        if (pergunta("voce se sentiu cansado(a) por mais de 2 dias?")){
            sintomas += "cansaco por mais de 2 dias\n"; pontos += 1;
        }
        if (idaMedico(sintomas, pontos)) {
            outra = sairFn(); continue;
        }
        if (pergunta("voce apresentou falta de ar?")){
            sintomas += "falta de ar\n"; pontos += 2;
        }
        if (idaMedico(sintomas, pontos)){
            outra = sairFn(); continue;
        }
        if (pergunta("voce apresentou perda de olfato e/ou paladar?")){
            sintomas += "perda de olfato e/ou paladar\n"; pontos += 2;
        }
        if (idaMedico(sintomas, pontos)){
            outra = sairFn(); continue;
        }
        if (pergunta("voce teve contato com alguem suspeito/confirmado com covid a menos de 14 dias?")){
            sintomas += "Contato com alguem suspeito/confirmado com Covid-19 a menos de 14 dias\n"; pontos += 1;
        }
        if (idaMedico(sintomas, pontos)){
            outra = sairFn(); continue;
        }
        if (pergunta("voce retornou de viagem a regioes com alto indice de infeccao a menos de 14 dias?")){
            sintomas += "Retorno de viagem a regiões com alto índice de infecção a menos de 14 dias"; pontos += 2;
        }
        if (idaMedico(sintomas, pontos)){
            outra = sairFn();
        }
        return 0;
    }
}
