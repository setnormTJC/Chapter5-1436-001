#include <iostream>

#include<fstream>

#include<string>

#include<filesystem>

using namespace std;

void printAllFileContentsInFolder()
{
    int fileCount = 0;
    string rootFolderPath = "C:/Users/Work/Desktop/misc/testTextFiles";
    for (const auto& entry : std::filesystem::directory_iterator(rootFolderPath))
    {
        fileCount++;
        string s = entry.path().string();
        cout << "Filepath number " << fileCount << ": " << s << endl;

        std::ifstream inputFile{ s };
        while (!inputFile.eof())
        {
            string input;
            getline(inputFile, input, ' ');
            cout << input << endl;
        }
        cout << "\n\n";
    }
}

int main()
{
    //printAllFileContentsInFolder(); //function callf 

    int totalLoopIters = 0; 
    for (int i = 0; i < 50; i++)
    {
        for (int j = 0; j < 40; j++)
        {
            //cout << i * j << " ";
            //cout << "i: " << i << "\t" << "j: " << j << endl;
            // 
            totalLoopIters++; 
        } //closes INNER for loop

        cout << "\n";
    }
    cout << totalLoopIters << endl; 

    ////LOOPS/repetition 

    //const int TOTAL_NUMBER_OF_STUDENTS = 5;

    //int currentStudentNumber = 1; //"loop counter variable" 

    //int currentStudentGrade;  //declare 

    //double sumOfAllGrades = 0;

    //while (currentStudentNumber <= TOTAL_NUMBER_OF_STUDENTS)
    //{
    //    cout << "Enter student number " << currentStudentNumber << " 's grade: " << endl;
    //    cin >> currentStudentGrade;

    //    sumOfAllGrades = sumOfAllGrades + currentStudentGrade;

    //    currentStudentNumber++; //C++!

    //}

    //double average = sumOfAllGrades / 5;

    //cout << "\n\nAverage: " << average << endl;
    ////ITSE 1302 

    //int totalTimesToRun = 10'000;
    //int loopCount = 0;

    //while (loopCount < totalTimesToRun)
    //{
    //    loopCount++; //this is a shorthand notation to add 1
    //    // This shorthand increment is also the basis for C++ name
    //    cout << "Loop count is: " << loopCount << endl;
    //}

    //int dayCount = 0;
    //while (dayCount <= 30)
    //{
    //    cout << "Exercise - " << dayCount << " days have passed!" << endl; ;

    //    //dayCount++; 
    //    //dayCount = dayCount + 1; 
    //    dayCount = dayCount + 2;
    //    //sets reminder to exercise every 3 days for a month
    //}


    //double countdown = 5.0;
    //while (countdown >= 0)
    //{
    //    cout << countdown << "...";

    //    //DECREMENTATION (to decrease - usually by 1) 
    //    countdown = countdown - 0.1; //equivalently: countdown = countdown - 1
    //}

    //cout << "Liftoff.";

    //int i = 3;
    //while (i <= 100)
    //{
    //    cout << i << endl;
    //    i = i * 2;
    //    //i = i * i; //another example with different results
    //}
    //cout << "After loop ends, value of i is : " << i;
    ////HI-LO game!


    //while (true)
    //{
    //    cout << "Doing something useful - forever!" << endl;
    //}

    //int a = 32; 

    //cout << a / 0 << endl; 
    //while (a > 500)
    //{
    //    cout << "a is greater than 500" << endl; 
    //    a++; 
    //    //no update the value of `a` here 

    //} //end while loop 

    //cout << "We are no  longer in the while loop!" << endl; 
    //cout << "Enter some input ( q to quit): " << endl; 
    //string response; 
    //cin >> response; 
    //while (response != "q");
    //{
    //    cout << "Enter input again (q to quit): " << endl; 

    //}

    //cout << "Out of the loop now" << endl; 
    // 
    //const double PI = 3.14;
    //for (double i = 0; i <= 10 * PI; i = i + PI)
    //{
    //    cout << i << endl;
    //}

    //cout << "i" << "\t\t" << "2^i" << endl; //column description
    //cout << "--------------------------" << endl; //row separator
    //for (int i = 0; i <= 30; i = i + 2)
    //{
    //    cout << i << "\t\t" << pow(2, i) << endl;
    //}


    //R("\t")
    //ifstream titanicFile{ "C:/Users/Work/Downloads/titanic.csv" };

    //for (int i = 0; i < 50; i++)
    //{
    //    string titanicLine; 
    //    getline(titanicFile, titanicLine); 
    //    cout << titanicLine << endl; 
    //}
     
    
    //ifstream inputFile{ "inputFile.txt" };

    //string lineOfInput; 

    //while (!inputFile.eof())
    //{
    //    getline(inputFile, lineOfInput);
    //    //inputFile >> lineOfInput; 
    //    cout << lineOfInput << endl;
    //}

    

    //Not such a great way to read multi-line file: 
    //getline(inputFile, lineOfInput);
    //cout << lineOfInput << endl;


    //getline(inputFile, lineOfInput);
    //cout << lineOfInput << endl;

    //getline(inputFile, lineOfInput);
    //cout << lineOfInput << endl;

    //int grade;
    //for (int i = 10; i >= 5; i = i - 2) 
    //{
    //    cout << "Enter student number " << i << "'s grade: ";
    //    cin >> grade;
    //}



   // srand(time(0)); //don't worry about the details here 

   // //int loopCount = 0; 
   // //while (loopCount < 100)
   // //{
   //int randomNumber = rand() % 100; 
   //cout << "Guess the number (between 0 and 99) " << endl;
   //
   ////cout << "Hint - it is: " << randomNumber << endl; 

   //int guessedValue; 
   //cin >> guessedValue; 
   //
   ////LOSS condition
   //int numberOfGuesses = 1; 

   ////log(2, 100)

   //while (guessedValue != randomNumber)
   //{
   //    if (guessedValue > randomNumber)
   //    {
   //        cout << "Too high - guess again: " << endl; 
   //        cin >> guessedValue; 
   //        numberOfGuesses++; 
   //    }

   //    else if (guessedValue < randomNumber)
   //    {
   //        cout << "Too low - guess again: " << endl; //hi-lo
   //        cin >> guessedValue; 

   //        numberOfGuesses++;
   //    }

   //    else
   //    {
   //        cout << "Correct! " << endl; 
   //    }
   //} //end while 


   //cout << "You won!" << endl; 




   return 0;
}