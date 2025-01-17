#include <iostream>
#include <vector>
#include <string>

struct Student
{
    int id;
    std::string firstName;
    std::string lastName;
};

int main()
{
    std::vector<Student> students;

    Student s1 = {1513, "Ala", "Kamien"};
    Student s2 = {1101, "Filip", "Okral"};
    Student s3 = {12302, "Emma", "Klertel"};
    Student s4 = {15, "Kamil", "Wotczyk"};

    students.push_back(s1);
    students.push_back(s2);
    students.push_back(s3);
    students.push_back(s4);

    std::cout << "Wektor przed sortowaniem: \n";
    for (int i = 0; i < students.size(); i++)
    {
        std::cout << " " << students[i].id
                  << " " << students[i].firstName
                  << " " << students[i].lastName << std::endl;
    }
    for (int i = 0; i < students.size() - 1; i++)
    {
        for (int j = 0; j < students.size() - i - 1; j++)
        {
            if (students[j].id > students[j + 1].id)
            {
                Student temp = students[j];
                students[j] = students[j + 1];
                students[j + 1] = temp;
            }
        }
    }

    std::cout << "Wektor po sortowaniu:  \n";
    for (int i = 0; i < students.size(); i++)
    {
        std::cout << " " << students[i].id
                  << " " << students[i].firstName
                  << " " << students[i].lastName << std::endl;
    }

    return 0;
}
