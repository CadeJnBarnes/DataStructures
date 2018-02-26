//
//  LinkedListTester.hpp
//  DataStructures
//
//  Created by Barnes, Cade on 2/14/18.
//  Copyright © 2018 CTEC. All rights reserved.
//

#ifndef LinkedListTester_hpp
#define LinkedListTester_hpp

#include "../Model/Structures/Linear/LinkedList.hpp"
#include "../Controller/FileController.hpp"
#include "../Controller/Tools/Timer.hpp"
#include "../Data/CrimeData.hpp"
#include <iostream>
#include <stdio.h>

class LinkedListTester
{
public:
    void testListBasics();
    void testListWithData();
}

void LinkedListTester :: testListBasics()
{
    LinkedList<int> numbers;
    numbers.add(9);
    cout << numbers.getFront()->getData() << "Is at the front of the list and should be 9" << endl;
    cout << numbers.getEnd()->getData << "Is at the end of the list and should be 9" << endl;
    
    numbers.add(0);
    cout << numbers.getFront()->getData() << "Is at the front of the list and should be 9" << endl;
    cout << numbers.getEnd()->getData << "Is at the end of the list and should be 0" << endl;
    
    numbers.addAtIndex(1,2);
    numbers.add(324);
    
    cout << numbers.getFront()->getData() << "Is at the front of the list and should be 9" << endl;
    cout << numbers.getEnd()->getData << "Is at the end of the list and should be 324" << endl;
    
    cout <<"This loop should print 4 lines" << endl;
    for(int index = 0; index< numbers.getSize(); index++)
    {
        cout << numbers.getFromIndex(index) << endl;
    }
    numbers.remove(0);
    numbers.add(32567);
    numbers.addAtIndex(0,2312);
    
    cout << numbers.getFront()->getData() << "Is at the front of the list and should be 2312" << endl;
    cout << numbers.getEnd()->getData << "Is at the end of the list and should be 32567" << endl;
}

void LinkedListTester :: testListWithData()
{
    Timer listTimer;
    
    listTimer.startTimer();
    LinkedList<CrimeData> crimes = FileController :: readDataToList("");
    listTimer.stopTimer();
    cout << "This is now how long it took to read the structure into our custom data structure" << endl;
    listTimer.displayInformation();
    
    listTimer.resetTimer();
    cout << "Here is how long it takes to access a random data value" << endl;
    listTimer.startTimer();
    int randomLocation = rand()) % crimes.getSize();
    cout << "The random index is " << randomLocation << endl;
    double totalViolentRate = crimes.getFromIndex(randomLocation).getAllViolentRates();
    listTimer.stopTimer();
    cout << "The random crime stat is: " << totalViolentRate << " , and here is the time " << endl;
    listTimer.displayInformation();
}


#endif /* LinkedListTester_hpp */
