#include <iostream>
#include <string>

struct Student
{
    std::string fname;
    int grades[4];
};

int main()
{
    const int stdCount = 6;
    Student students[stdCount];

    for (int i = 0; i < stdCount; i++)
    {
        std::cout << "Podaj imie ucznia nr " << i + 1 << ": ";
        std::cin >> students[i].fname;

        std::cout << "Podaj ocene z informatyki: ";
        std::cin >> students[i].grades[0];

        std::cout << "Podaj ocene z matematyki: ";
        std::cin >> students[i].grades[1];

        std::cout << "Podaj ocene z chemii: ";
        std::cin >> students[i].grades[2];

        std::cout << "Podaj ocene z jezyka polskiego: ";
        std::cin >> students[i].grades[3];
        std::cout << "\n";
    }
    int queryCount;
    std::cout << "Podaj liczbe pytan: ";
    std::cin >> queryCount;

    for (int i = 0; i < queryCount; i++)
    {
        int stdNumb, grdNumb;
        std::cout << "Podaj nr ucznia [1.." << stdCount << "]: ";
        std::cin >> stdNumb;

        if (stdNumb < 1 || stdNumb > 6)
        {
            std::cout << "Podales zla liczbe ma byc 1-6 \n";
        }
        else
        {
            std::cout << "Podaj nr przedmiotu [0..3]: ";
            std::cin >> grdNumb;

            if (grdNumb < 0 || grdNumb > 3)
                std::cout << "Podales zla liczbe ma byc 0-3 \n";
            else
            {
                std::cout << "Student: " << students[stdNumb - 1].fname << ", ocena z ";
                switch (grdNumb)
                {
                case 0:
                    std::cout << "informatyki";
                    break;
                case 1:
                    std::cout << "matematyki";
                    break;
                case 2:
                    std::cout << "chemii";
                    break;
                case 3:
                    std::cout << "jezyka polskiego";
                    break;
                }
                std::cout << ": " << students[stdNumb - 1].grades[grdNumb] << "\n";
            }
        }
    }

    return 0;
}