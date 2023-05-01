#include <fstream>
#include <map>
#ifndef _ALUNOS_HPP
#define _ALUNOS_HPP
void add_aluno_arquivo(std::ofstream& arquivo, std::string nome, double n1, double n2, double n3);
map<string, double> insert_aluno(map<string, double> m_alunos, string name, double media)
std::map<std::string, double> read_alunos(std::string path);
void print_alunos(std::map<std::string, double> m_alunos);
#endif