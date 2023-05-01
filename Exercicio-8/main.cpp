 #include <iostream>

using namespace std;


int add_numbers(int first, int last){
  if(first ==  last){
    return first;
  }
  return first+add_numbers(first+1, last);
}

int main() {
  int first, last;
  cout << "Digite o primeiro valor do somatório: " << endl;
  cin >> first;
  cout << "Digite o último valor do somatório: " << endl;
  cin >> last;
  cout << "O resultado é: " << add_numbers(first, last) << endl;
}