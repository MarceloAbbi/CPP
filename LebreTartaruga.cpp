#include <iostream>
#include <time.h>
#include <iomanip>
#include <stdlib.h>
#include <unistd.h>

// Guilherme Maurello, Joyce Trindade, Marcelo Abbi e Rafael Castilhos

using namespace std;

bool vitoria = false;
bool empate = false;
int tartaruga = 1;
int lebre = 1;
int segundos = 0;
int minutos = 0;
int tiques = 0;


void movTartaruga(int i){
  if(i >= 1 && i <= 5){ 
    tartaruga += 3;
  }else if(i >= 6 && i <= 7){ 
    tartaruga += 1;
  }else if(i >= 8 && i <= 10){ 
    tartaruga -= 6;
    if(tartaruga < 1){ 
      tartaruga = 1;
    }
  }
}


void movLebre(int i){
  if(i >= 1 && i <= 2){ 
    lebre = lebre; 
  }else if(i >= 3 && i <= 4){ 
    lebre += 9;
  }else if(i == 5){ 
    lebre -= 12;
    if(lebre < 1){ 
      lebre = 1;
    }    
  }else if(i >= 6 && i <= 8){ 
    lebre += 1;
  }else if(i >= 9 && i <= 10){ 
    lebre -= 2;
    if(lebre < 1){ 
      lebre = 1;
    }
  }
}

void contadorTempo(int t){
  segundos++;
  if(t % 60 == 0){
    minutos++;
    segundos = 0;
  }
}

int main() {

  cout << "BANG!!!! E ELES PARTIRAM!!!! \n\n";

  while(!vitoria || !empate){
    
    int i = rand() % 10;
   
    movTartaruga(i);
    movLebre(i);

    for(int posT = 1; posT <= tartaruga; posT++){
        cout << "*";
    }
    cout << "T \n";

    for(int posL = 1; posL <= lebre; posL++){
        cout << "*";
    }
    cout << "L \n";
    cout << "\n";

    if(tartaruga==lebre){
      cout << "OUCH!!! \n";
    }

    if(tartaruga>=70 && lebre < 70){
      cout << "TARTARUGA VENCEU!!! YAY!!! \n";
      vitoria = true;
    }else if(tartaruga < 70 && lebre >= 70){
      cout << "LEBRE VENCEU!!! YUCH!!! \n";
      vitoria = true;
    }else if(tartaruga >= 70 && lebre >= 70){
      cout << "HOUVE UM EMPATE! \n";
      empate = true;
    }

    if(vitoria || empate){
      cout << "Duração da corrida: " << minutos << " minutos e " << segundos << " segundos \n";
      return 0;
    }else{
      tiques ++;
      contadorTempo(tiques);
      sleep(1);
    }


  }
	return 0;  
}
