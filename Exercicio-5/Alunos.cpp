
#include <iostream>
#include <fstream>
#include <map>
#include <sstream>
using namespace std;


void add_aluno_arquivo(ofstream& arquivo, string nome, double n1, double n2, double n3) {
    arquivo<<nome<<endl;
    arquivo<<n1<<endl;
    arquivo<<n2<<endl;
    arquivo<<n3<<endl;
}

map<string, double> insert_aluno(map<string, double> m_alunos, string name, double media) {
      m_alunos[name]=media;
      return m_alunos;
}

map<string, double> read_alunos(string path){
  map<string, double> m_alunos;
  string name;
  double n1, n2, n3, media;
  ifstream file(path);
  while(getline(file, name)){
    file >> n1;
    file >> n2;
    file >> n3;
    file.ignore();
    media = (n1+n2+n3)/3;
    m_alunos = insert_aluno(m_alunos, name, media);
  }
  file.close();
  return m_alunos;
}
void print_alunos(map<string, double> m_alunos) {
    cout.precision(3);
    for(auto i:m_alunos){
      cout<<i.first<<": "<<i.second<<endl;
    } 
        
}

