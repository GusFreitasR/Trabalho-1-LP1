#include <iostream>
#include <fstream>
#include "music.hpp"
using namespace std;

int main() {

  string path =  "musicas.txt";
  
  ofstream file(path);
  cout <<"Seja bem vindo(a), o que deseja fazer?" << endl;
  int opt;
  
  
  do{
    cout << "0 - Sair do sistema; " << endl;
    cout << "1 - Adicionar uma música; " << endl;
    cout << "2 - Buscar uma música; " << endl;
    cin >> opt;
    cin.ignore();
    if(opt == 1){
      string msc;
      cout << "Digite o nome da música que você quer adicionar: " << endl;
      getline(cin, msc);
      add_music(file, msc);
      cout <<"Música adicionada com sucesso" << endl;
      
      
    }else if(opt == 2){
      string msc_search;
      cout << "Digite o nome da música que você quer buscar no arquivo"<< endl;
      getline(cin, msc_search);
      if(check_msc(path, msc_search)){
        cout << "A música foi encontrada no arquivo" << endl;
      }else{
        cout << "A música NÃO foi encontrada no arquivo" << endl;
      }
      
    }else if(opt!=0){
      cout << "Digitar uma das opções válidas" << endl;
    }
  }while(opt!=0);

  file.close();
}