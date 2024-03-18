#include <iostream>
#include "Pueque.h"

using namespace task_3;

int main() {
    Pueque<int> *p = new Pueque<int>();
    p->add(5);
    p->add(6);
    std::cout << *(p->pull()) << std::endl;
    p->add(7);
    std::cout << *(p->pull()) << std::endl;
    std::cout << *(p->pull()) << std::endl;
    p->add(7);
    std::cout << *(p->peek()) << std::endl;
    p->add(8);
    std::cout << *(p->peek()) << std::endl;
    return 0;
}
