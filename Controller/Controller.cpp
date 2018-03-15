//
//  Controller.cpp
//  DataStructures
//
//  Created by Barnes, Cade on 1/31/18.
//  Copyright © 2018 CTEC. All rights reserved.
//

#include "Controller.hpp"

using namespace std;

void Controller :: start()
{
    
    RecursionTester myTest4;
    myTest4.testRecursionNumbers();

    ArrayTester myTest;
    myTest.testArrayUse();
    myTest.testAdvancedArray();

    findMaxAndMin();

    cout << "Testing the Timer class" << endl;
    Timer codeTimer;
    codeTimer.startTimer();
    vector<CrimeData> myData = FileController :: readCrimeDataToVector("/Users/cbar1386/Documents/Data Structures 2018/DataStructures/DataStructures/Controller/Controller.cpp");
    codeTimer.stopTimer();
    codeTimer.displayInformation();

    
    
  //  This code below is how to create a loop for the timer. It will executed 100 lines.
    codeTimer.resetTimer();
    codeTimer.startTimer();
   for (int index = 200; index < 215; index++)
    {
        cout << "The index is " << index << "\t" << myData[index] << endl;
   }
   codeTimer.stopTimer();
 codeTimer.displayInformation();
    

}


void Controller :: findMaxAndMin()
{
    Timer searchTimer;
    searchTimer.startTimer();
    vector<CrimeData> myData = FileController :: readCrimeDataToVector("/Users/cbar1386/Documents/Data Structures 2018/DataStructures/DataStructures/Data/crime.csv");
    
    
    int minIndex = 0;
    int maxIndex = 0;
    
    for (int index = 1; index < myData.size(); index++)
    {
        if (myData [minIndex] > myData [index])
        {
            minIndex = index;
        }
        
        else if (myData [maxIndex] > myData[index])
        {
            maxIndex = index;
        }
    }
    searchTimer.stopTimer();
    cout << "The smallest Crime stat is at " << minIndex << " and it is: " << myData[minIndex] << endl;
     cout << "The largest Crime stat is at " << maxIndex << " and it is: " << myData[maxIndex] << endl;
    searchTimer.displayInformation();
}
