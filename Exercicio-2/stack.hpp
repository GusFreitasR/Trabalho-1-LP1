#ifndef _STACK_HPP
#define _STACK_HPP

std::list<int> insert(int num, std::list<int> stack);
std::list<int> remove(std::list<int> stack);
int size_stack(std::list<int> stack);
bool empty_stack(std::list<int> stack);
void front_stack(std::list<int> stack);
void print_stack(std::list<int> stack);

#endif