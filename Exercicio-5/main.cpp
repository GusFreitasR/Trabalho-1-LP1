#include <iostream>
#include <iostream>
#include "Alunos.hpp"

using namespace std;
int main() {
  string path = "Alunos.txt";
  ofstream arquivo(path);
  string opt;
  map<string, double> m_alunos;
  do{
    cout << "Seja bem vindo! Deseja adicionar um aluno? Y/N" << endl;
    getline(cin, opt);
    if(opt =="Y"){
      double n1, n2, n3;
      string name;
      cout << "Digite o nome do aluno(a): " << endl;
      getline(cin, name);
      cout << "Digite a primeira nota do aluno: " << endl; 
      cin >> n1;
      cout << "Digite a segunda nota do aluno: " << endl; 
      cin >> n2;
      cout << "Digite a primeira nota do aluno: " << endl; 
      cin >> n3;
      cin.ignore();
      add_aluno_arquivo(arquivo, name, n1, n2, n3);
      cout << "Aluno adicionado com suceso" << endl;
    }else if(opt!="N"){
      cout << "Resposta inválida " << endl;
    }
  }while(opt != "N");
  arquivo.close();
  cout << "Médias de cada aluno:" << endl;
  m_alunos = read_alunos(path);
  print_alunos(m_alunos);
}