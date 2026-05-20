// Student_Log.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <cstring>

class Student
{
private:
    char name[50];
    int scores[5];
    static int totalStudent;

public:

    Student()
    {
        strcpy_s(name,"");
        for (int i = 0; i < 5; i++)
        {
            scores[i] = 0;
        }
        totalStudent++;
    }


    Student(const char* studentName)
    {
        strcpy_s(name, studentName);
        for (int i = 0; i < 5; i++)
        {
            scores[i] = 0;
        }
        totalStudent++;
    }

    void setScore(int subjectIndex, int score)
    {
        scores[subjectIndex] = score;
    }

    void printInfo()
    {
        std::cout << name << ": ";
        for (int i = 0; i < 5; i++)
        {
            std::cout << scores[i] << " ";
        }
        std::cout << std::endl;
    }
    


    int getAverageScore()
    {
        int average;
        int sum = 0;
        for (int i = 0; i < 5; i++)
        {
            sum = sum + scores[i];
        }
        average = sum / 5;
        return average;
    }
   
};

int Student::totalStudent = 0;


class GradeBook
{
private:
    int studentCount;
    Student students[30];

    
public:

    GradeBook()
    {
        studentCount = 0;
    }

    

public:
    void addStudent(const Student& st)
    {
        if (studentCount < 30)
        {
            students[studentCount] = st;
            studentCount++;
        }
        
    }

    void printAllStudent()
    {
        for (int i = 0; i < studentCount; i++)
        {
           students[i].printInfo();
        }

    }

    /*Student* findStudent(const char* name)
    {

    }*/

};


int main()
{
    
    Student student("Alex");
    student.setScore(1, 5);
    //student.printInfo();
    //std::cout << student.getAverageScore() << std::endl;
    GradeBook gb;
    gb.addStudent(student);
    gb.printAllStudent();
    std::cin.get();
}

