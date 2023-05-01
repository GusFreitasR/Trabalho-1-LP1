#ifndef _QUEUE_HPP
#define _QUEUE_HPP

std::list<int> push(int num, std::list<int> queue);
std::list<int> pop(std::list<int> queue);
int size(std::list<int> queue);
bool empty(std::list<int> queue);
void front(std::list<int> queue);
void back(std::list<int> queue);
void print_queue(std::list<int> queue);

#endif