#include <iostream>
#include <list>

using namespace std;

list<int> insert(int num, list<int> stack) {
  stack.push_front(num);
  return stack;
}

list<int> remove(list<int> stack) {
  stack.pop_front();
  return stack;
}

int size_stack(list<int> stack) { return stack.size(); }

bool empty_stack(list<int> stack) { return stack.empty(); }

void front_stack(list<int> stack) {
  cout << "O último elemento está na posição ";
  cout << stack.front();
  cout << "da pilha. " << endl;
}

void print_stack(list<int> stack) {
  for (auto i : stack) {
    cout << i << " ";
  }
}