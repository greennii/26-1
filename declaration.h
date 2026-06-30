#pragma once

namespace JeongYoonha2449101
{
struct student
{
   int id{};
   int score{};
   char grade{};

};
char getGrade(int score);
student inputStudent();
void printStudent(const student& s); 

int inputInteger();
int addIntegers(int a = 1, int b = 1);



}

void printStudent(const student& s)
{
    std::cout << "ID : " << s.id << '\n';
    std::cout << "Grade : " << s.grade << '\n';
}


student inputStudent()
{
    student s{};
    std::cout << "Enter student ID:";
    std::cin >> s.id;
    std::cout << "Enter student grade (A/B/C/D/F):";
    std:cin >> s.grade;
    return s;

}

int main2()
{
        student Jeong {25449101, 'A'};
        printStudent(Jeong);

        student Park { inputStudent()};
        printStudent(Park);

        return 0;





}
  




