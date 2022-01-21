#include <iostream>
#include <chrono>

int main(int argc, char** argv)
{

    auto start = std::chrono::system_clock::now();
    int secs = 0;

    while(1)
    {
        const std::chrono::duration<double> duration = std::chrono::system_clock::now() - start;
        if (duration.count() >= 1)
        {
            secs++;
            std::cout << secs << "s" << std::endl;
            start = std::chrono::system_clock::now();
        }

    }

    return EXIT_SUCCESS;
}