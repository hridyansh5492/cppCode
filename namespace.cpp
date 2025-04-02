#include <iostream>

namespace h
{
    int a = 1;
}

namespace i
{
    int a = 2;
}

int main()
{
    /*
    namespaces provide a solution for preventing name conflicts
    in a large projects, each entity needs a unique name,
    it allows for identically named as long as the namespaces
    are different
    */

    std::cout<<h::a<<"\n";

    return 0;
}