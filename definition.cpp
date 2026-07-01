#include <iostream>
#include "declaration.h"
namespace JeongYoonha2449101

{
    char getGrade(int score)
    {
        char grade{};
        switch(score/10)
        {
            case 10:
            case 9: grade = 'A'; break;
            case 8: grade = 'B'; break;
            case 7: grade = 'C'; break;
            case 6: grade = 'D'; break;
            default: grade = 'F'; break;



        }
        student inputStudent(){

            student s;
            std::cout << "Enter student ID:";
            std::cin >> s.id;
            std::cout << "Enter score:";
            std:cin >> s.score;
            s.grade = getGrade(s.score);
            return s;

        }


    }void printStudent(const student& s)
{
    std::cout << "ID : " << s.id << '\n';
    std::cout << "Score : " << s.score << '\n';
    std::cout << "Grade : " << s.grade << '\n';
   
}

    int inputInteger()
 
    {

        return a+b;
    }


}
