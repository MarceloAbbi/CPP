#include <iostream>


using namespace std;

int main ()
{
int soma = 0;
int i = 0;

for (i = 86; i <= 906; i = i+2) cout << " " << i << endl;

for (i = 86; i <= 906; i++) soma = soma + i;

cout << "Soma: " << soma << endl;

return 0;
}
