#include <iostream>
#include <time.h>
#include <stdio.h>
#include <stdlib.h>
 
using namespace std;

int main(){
	
	int t;
    int v7[50];
    int pos = 0;
    int neg = 0; 
    int v8 = 0;
    int v9 = 0;

    srand(time(0));
        for (t = 0; t < 50; t++) {
        v7[t] = (rand() % 201) + (-100);
       
        if (v7[t] > 0) {
            pos += 1;
            v8 += v7[t]; }

        else if (v7[t] < 0 ) {
            neg += 1;
            v9 += v7[t]  ;}

        }
        
        for (t = 0; t <= 50; t++) {
        cout << "["<< t <<"] de: " << v7[t] << endl;
        
        }
  

    cout << "Soma dos Valores Positivos:  " << v8 << endl;
    cout << "Soma dos Valores Negativos: " << v9 << endl;
    cout << "Positivo(s) : "<<  pos << endl;
    cout << "Negativo(s) : " << neg << endl;
    
    return 0;
}
