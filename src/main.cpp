#include <iostream>
#include "app.hpp"

int main()
{
    std::cout << "Hello World!" << std::endl;

    App app{};

    app.Init();
    app.Run();

    return EXIT_SUCCESS;
}
