#include <iostream>

using namespace std;

int potencia(int base, int expoente){
  if(expoente == 0){
    return 1;
  }
  return base*potencia(base, expoente-1);
}
int main() {

  int base, expoente;
  cout << "Digite a base que você deseja calcular a potência " << endl;
  cin >> base;
  cout << "Digite o expoente da potência que você deseja " << endl;
  cin >> expoente;

  cout << "O resultado da potência é: " <<  potencia(base, expoente) << endl;
}