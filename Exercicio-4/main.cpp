#include <iostream>
#include <map>
using namespace std;

typedef struct {

  int n1;
  int n2;
  int n3;
  float media;
} Aluno;
int main() {
  int opt;
  map<string, Aluno> alunos;
  do {
    cout << "Bem vindo! O que deseja fazer?" << endl;
    cout << "0 - Sair; " << endl;
    cout << "1 - Adicionar um aluno; " << endl;
    cout << "2 - Média de cada aluno cadastrado; " << endl;
    cout << "3 - Média de todos os alunos; " << endl;
    cin >> opt;
    if (opt == 1) {
      string name;
      int n1, n2, n3;
      cout << "Digite o nome do aluno: ";
      cin >> name;
      cout << "Digite a primeira nota do aluno: ";
      cin >> n1;
      alunos[name].n1 = n1;
      cout << "Digite a segunda nota do aluno: ";
      cin >> n2;
      alunos[name].n2 = n2;
      cout << "Digite a terceira nota do aluno: ";
      cin >> n3;
      alunos[name].n3 = n3;
      alunos[name].media = (n1 + n2 + n3) / 3;
      cout << "Aluno adicionado com sucesso!" << endl;
    }else if (opt == 2) {
      for (auto i : alunos){
        cout << "A média de " << i.first << " é:" << i.second.media << endl;
      }
        
    }else if(opt == 3) {
      float m_geral = 0;
      for (auto i : alunos){
        m_geral = m_geral + i.second.media;
      } 
      cout << "A média geral dos alunos é: " << m_geral/alunos.size()<< endl;
    }
  } while (opt != 0);


}