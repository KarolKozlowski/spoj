#include <iostream>
#include <cstdlib>

int main(int argc, char *argv[])
{
    int a;

    while(true)
    {
        std::cin >> a;
        if ( a == 42)
            break;

        std::cout << a << std::endl;
    }

    return EXIT_SUCCESS;
}
