#include <iostream>

int main()
{
    int howmany;
    std::string sentence;
    std::cout << "Napisz cos: ";
    getline(std::cin, sentence);
    std::cout << "\n"
              << sentence;
    std::cout << "\nIle razy polaczyc napis? ";
    std::cin >> howmany;

    std::string finalresult = "";
    for (int i = 0; i < howmany; i++)
    {
        finalresult += sentence;
    }

    std::cout << "Wynik koncowy: \n"
              << finalresult;

    return 0;
}