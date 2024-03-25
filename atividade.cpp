#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;


// Protótipos das funções

void valorAbs(int &irefNumero);

int main() 
{
  cout << "Teste de valor absoluto: " << endl;

  int iNumero = -10;

  cout << "Número: " << iNumero << endl;

  valorAbs(iNumero);

  cout << "Número: " << iNumero << endl;

  int iNumero2 = 20;

  cout << "Número: " << iNumero2 << endl;

  valorAbs(iNumero2);

  cout << "Número: " << iNumero2 << endl;

  cout << "=======================================" << endl;


  return 0;
}

// Utilizando protótipos, notação Húngara e referências:

//Reescrever uma função matemática, no caso o abs

void valorAbs(int &irefNumero) {
  if (irefNumero < 0) {
    irefNumero = -irefNumero;
  }
}
