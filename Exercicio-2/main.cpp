#include <iostream>
#include <list>
#include "stack.hpp"
#include "queue.hpp"

using namespace std;

int main() {
  int opt;
  list<int> stack;
  list<int> queue;
  
  do {

    cout << "Bem vindo!" << endl;
    cout << "O que deseja utilizar de nosso sistema?" << endl;
    cout << "0 - Sair do sistema;" << endl;
    cout << "1 - Pilhas;" << endl;
    cout << "2 - Filas." << endl;
    cin >> opt;

    if (opt == 1) {
      int opt2;

      do {

        cout << endl << "O que deseja fazer?" << endl;
        cout << "0 - Sair da opção de pilha" << endl;
        cout << "1 - Inserir " << endl;
        cout << "2 - Deletar " << endl;
        cout << "3 - Tamanho da pilha" << endl;
        cout << "4 - Imprimir a pilha" << endl;
        cout << "5 - A pilha está vazia?" << endl;
        cout << "6 - Qual o primeiro elemento da pilha? " << endl;

        cin >> opt2;
        if (opt2 == 1) {
          int num;
          cout << "Que número deseja inserir na pilha? " << endl;
          cin >> num;
          stack = insert(num, stack);
          cout << "Número inserido com sucesso. " << endl;
        } else if (opt2 == 2) {
          stack = remove(stack);
          cout << "Número de cima da pilha removido com sucesso";
        } else if (opt2 == 3) {
          cout << "O tamanho da pilha é: ";
          cout << size_stack(stack);
        } else if (opt2 == 4) {
          cout << "A lista é: ";
          print_stack(stack);
        } else if (opt2 == 5) {
          if (empty_stack(stack)) {
            cout << "A pilha está vazia " << endl;
          } else {
            cout << "A pilha não está vazia " << endl;
          }
        } else if (opt2 == 6) {
          front_stack(stack);
        } else {
          cout << "Por favor, colocar alguma das opções válidas" << endl;
        }

      } while (opt2 != 0);

    }else if(opt == 2){
      int opt2;
      do {

        cout << endl << "O que deseja fazer?" << endl;
        cout << "0 - Sair da opção de fila" << endl;
        cout << "1 - Inserir " << endl;
        cout << "2 - Deletar " << endl;
        cout << "3 - Tamanho da fila" << endl;
        cout << "4 - Imprimir a fila" << endl;
        cout << "5 - A fila está vazia?" << endl;
        cout << "6 - Qual o primeiro elemento da fila? " << endl;
        cout << "7 - Qual o último elemento da fila? " << endl;

        cin >> opt2;
        if (opt2 == 1) {
          int num;
          cout << "Que número deseja inserir na fila? " << endl;
          cin >> num;
          queue = push(num, queue);
          cout << "Número inserido com sucesso. " << endl;
        } else if (opt2 == 2) {
          queue = pop(queue);
          cout << "Número de cima da fila removido com sucesso";
        } else if (opt2 == 3) {
          cout << "O tamnanho da fila é: ";
          cout << size(queue);
        } else if (opt2 == 4) {
          cout << "A fila é: ";
          print_queue(queue);
        } else if (opt2 == 5) {
          if (empty(queue)) {
            cout << "A pilha está vazia " << endl;
          } else {
            cout << "A pilha não está vazia " << endl;
          }
        } else if (opt2 == 6) {
          front(queue);
        } else if (opt2 == 7) {
          back(queue);
        } else {
          cout << "Por favor, colocar alguma das opções válidas" << endl;
        }

      } while (opt2 != 0);
    }
  } while (opt != 0);
}