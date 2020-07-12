#include <iostream>

int main()
{
    int a = 0, b = 0;
    std::cin >> a >> b;
    int count = a;
    std::cout << "from " << a << " to " << b << std::endl;
    while (count <= b)
    {
        std::cout << count++ << std::endl;
    }
    return 0;
}