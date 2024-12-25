#include <iostream>
#include "forward_list.cpp"




int main() {
    unsigned n;
    std::cin >> n;

    node* last = new node();
    node* first = last;

    unsigned number;
  

    for (int i = 0; i < n; i++) {
        std::cin >> number;
        first = push_front(first, number);

    }

    sort(first, last, [](unsigned a, unsigned b) {
        return a > b;
    });

    for (node* i = first; i != last;) {
        std::cout << i->value << ' ';
        i = i->next;
    }
    std::cout << std::endl;

    delete first;
    
}