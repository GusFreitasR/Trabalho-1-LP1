#include <iostream>
#include "Areas/areaCirculo.hpp"
#include "Areas/areaQuadrado.hpp"
#include "Areas/areaRetangulo.hpp"
#include "Areas/areaTriangulo.hpp"

using namespace std;

int main() {

  cout << "Bem vindo à calculadora de áreas " << endl << "O que você deseja calcular?" << endl;
  
  cout << "Digite 'circulo' para calcular a área de um circulo"<< endl;
  cout << "Digite 'triangulo' para calcular a área de um triangulo"<< endl;
  cout << "Digite 'quadrado' para calcular a área de um quadrado"<< endl;
  cout << "Digite 'retangulo' para calcular a área de um retangulo"<< endl;

  string area;
  float lado;
  float base;
  float altura;
  float raio;
while(true){
  cout << endl;
  cout << "Opção 1 : circulo" << endl
       << "Opção 2 : triangulo" << endl
       << "Opção 3 : quadrado" << endl
       << "Opção 4 : retangulo" << endl
       << "Opção 5 : 0 (Sair)" << endl;
  cin >> area;
  int escolha;
  if(area == "circulo"){
    escolha = 1;
  }else if(area == "triangulo"){
    escolha = 2;
  }else if(area == "quadrado"){
    escolha = 3;
  }else if(area == "retangulo"){
    escolha = 4;
  }else if(area == "0"){
    break;
  }else{
    escolha = 1;
  }

    switch(escolha){
      case 1:
        cout << "Insira o raio do círculo: " << endl; 
        cin >> raio;
        cout << "A area do círculo é: " << areaCirculo(raio) << endl;
      break;
      case 2:
        cout << "Insira a base do triângulo: " << endl; 
        cin >> base;
        cout << "Insira a altura do triângulo: " << endl;
        cin >> altura;
        cout << "A area do triângulo é: " << areaTriangulo(base, altura) << endl;
      break;
      case 3:
        int lado;
        cout << "Insira o lado do quadrado: " << endl; 
        cin >> lado;
        cout << "A area do lado é: " << areaQuadrado(lado) << endl;
      break;
      case 4:
        cout << "Insira a base do triângulo: " << endl; 
        cin >> base;
        cout << "Insira a altura do triângulo: " << endl;
        cin >> altura;
        cout << "A area do retângulo é: " << areaRetangulo(base, altura) << endl;  
      break;
      default:
      cout << "Por favor,insira uma das opções válidas" << endl;
      cout << "Opção 1 : circulo" << endl
       << "Opção 2 : triangulo" << endl
       << "Opção 3 : quadrado" << endl
       << "Opção 4 : retangulo" << endl
       << "Opção 5 : 0 (Sair)" << endl;
    };
  area = "";  
};
  
};