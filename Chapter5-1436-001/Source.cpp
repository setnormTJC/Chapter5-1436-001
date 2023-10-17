#include <iostream>

using namespace std;

int main()
{
    //LOOPS/repetition 

    const int TOTAL_NUMBER_OF_STUDENTS = 5;

    int currentStudentNumber = 1; //"loop counter variable" 

    int currentStudentGrade;  //declare 

    double sumOfAllGrades = 0;

    while (currentStudentNumber <= TOTAL_NUMBER_OF_STUDENTS)
    {
        cout << "Enter student number " << currentStudentNumber << " 's grade: " << endl;
        cin >> currentStudentGrade;

        sumOfAllGrades = sumOfAllGrades + currentStudentGrade;

        currentStudentNumber++; //C++!

    }

    double average = sumOfAllGrades / 5;

    cout << "\n\nAverage: " << average << endl;
    //ITSE 1302 
    return 0;
}