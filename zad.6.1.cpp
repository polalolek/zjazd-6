#include <iostream>
int main()
{
    int n;
    std::cout << "Podaj liczbę n: \n";
    std::cin >> n;

    int count = 0;

    for (int i = 1; i <= n; i++)
    {
        if (i % 5 == 0 && i % 3 != 0)
        {
            count++;
        }
    }

    std::cout << "Liczb naturalnych nie większych od " << n << ", które są podzielne przez 5, ale nie przez 3: \n"
              << count;

    return 0;
}