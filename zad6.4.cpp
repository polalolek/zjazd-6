#include <iostream>

int main()
{
    int amount;
    std::string sentence;
    std::cout << "Napisz cos: ";
    getline(std::cin, sentence);
    std::cout << "\n"
              << sentence;
    std::cout << "\nIle razy polaczyc napis? ";
    std::cin >> amount;

    std::string finalresult = "";
    for (int i = 0; i < amount; i++)
    {
        finalresult += sentence;
    }

    std::cout << "Wynik koncowy: \n"
              << finalresult;

    return 0;
}
