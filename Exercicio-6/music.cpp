#include <fstream>
#include <iostream>

using namespace std;

void add_music(ofstream& arquivo, string msc) { 
  arquivo << msc << endl; 
}

bool check_msc(string path, string msc) {
  ifstream file(path);
  string msc_file;
  while (getline(file, msc_file)) {
    if (msc_file == msc) {
      return true;
    }
  }
  file.close();
  return false;
}
