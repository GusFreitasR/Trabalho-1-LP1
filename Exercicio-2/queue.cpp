#include <iostream>
#include <list>

using namespace std;

list<int> push(int num, list<int> queue){
  queue.push_back(num);
  return queue;
}

list<int> pop(list<int> queue){
  queue.pop_front();
  return queue;
}

int size(list<int> queue){
  return queue.size();
}

bool empty(list<int> queue){
  return queue.empty();
}

void front(list<int> queue){
  cout << "O primeito elemento é: ";
  cout << queue.front();
}
void back(list<int> queue){
  cout << "O último elemento é: ";
  cout << queue.back();
}

void print_queue(list<int> queue){
  for(auto i : queue){
    cout << i << " ";
  }
}