#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;


// Protótipos das funções

void valorAbs(int& irefNumero);
int iFatorial(int iNumero);
int iProgressaoAritmetica(int iValorInicial, int iRazao, int iTermos);
int iFibonacci(int iNumero);

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

  cout << "Teste de fatorial: " << endl;

  int fatorial_10 = iFatorial(10);

  cout << "Fatorial de 10: " << fatorial_10 << endl;

  int fatorial_0 = iFatorial(0);

  cout << "Fatorial de 0: " << fatorial_0 << endl;

  cout << "=======================================" << endl;

  cout << "Teste de progressão aritmética: " << endl;

  int valorInicial = 1;
  int razao = 2;
  int termos = 5;

  cout << "Valor inicial: " << valorInicial << endl;
  cout << "Razão: " << razao << endl;
  cout << "Termos: " << termos << endl;

  int resultado = iProgressaoAritmetica(valorInicial, razao, termos);

  cout << "Resultado: " << resultado << endl;

  cout << "=======================================" << endl;

  cout << "Teste de Fibonacci: " << endl;

  int fibonacci_10 = iFibonacci(10);

  cout << "Décimo termo de Fibonacci: " << fibonacci_10 << endl;

  int fibonacci_4 = iFibonacci(4);

  cout << "Quarto termo de Fibonacci: " << fibonacci_4 << endl;

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

// Fatorial Iterativo

int iFatorial(int iNumero) {
  int iFatorial = 1;

  for (int i = 1; i <= iNumero; i++) {
    iFatorial *= i;
  }

  return iFatorial;
}

// Progressão Aritmética

int iProgressaoAritmetica(int iValorInicial, int iRazao, int iTermos) {
  return iValorInicial + (iTermos - 1) * iRazao;
}

// Fibonacci Iterativo

int iFibonacci(int iNumero) {
  int iFibonacci = 0;
  int iFibonacciAnterior = 1;
  int iFibonacciAnterior2 = 0;

  for (int i = 1; i < iNumero; i++) {
    iFibonacci = iFibonacciAnterior + iFibonacciAnterior2;
    iFibonacciAnterior2 = iFibonacciAnterior;
    iFibonacciAnterior = iFibonacci;
  }

  return iFibonacci;
}