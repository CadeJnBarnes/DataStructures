//
//  TestingStacksAndQueues.hpp
//  DataStructures
//
//  Created by Barnes, Cade on 2/28/18.
//  Copyright © 2018 CTEC. All rights reserved.
//

#ifndef TestingStacksAndQueues_hpp
#define TestingStacksAndQueues_hpp

#include "../Controller/Tools/Timer.hpp"
#include "../Controller/FileController.hpp"
#include "../Structures/Linear/Stack.hpp"
#include "../Structures/Linear/List.hpp"

void TestingStacksAndQueues :: stackVersusList()
{
    Stack<int> numberStack;
    LinkedList<int> numberList;
    Timer stackTimer, listTimer;
    
    for (int index = 0; index < 10; index++)
    {
        numberStack.add(index);
        numberList.add(index);
    }
    
    cout << "Get the third from the last item from the structure" << endl;
    
    int index = 0;
    int value = -99;
    stackTimer.startTimer();
    
    while (index < 7)
    {
        cout << numberStack.pop() << endl;
        
        index++;
    }
    
    stackTimer.stopTimer();
    index = 0;
    listTimer.startTimer();
    value = numberList.getFromIndex(7);
    listTimer.stopTimer();
    
    cout << "The time it took to work with Stack" << endl;
    stackTimer.displayInformation();
    cout << "The Time it took to work with List" << endl;
    listTimer.displayInformation();
    
    cout<< "What is left in the Stack" << endl;
    LinkedList<int> * listVersion = &numberStack;
    int stackSize = listVersion->getSize();
    cout << "Stack size is: " << stackSize << endl;
    for (int index = 0; index < stackSize; index++)
    {
        cout << numberStack.pop() << endl;
    }
    
    cout << "What is left in the List" << endl;
    
    int listSize = numberList.getSize();
    cout << "List size is: " << listSize << endl;
    for (int index = 0; index < listSize; index++)
    {
        cout << numberList.getFromIndex(index) << "\t";
    }
}

void TestingStacksAndQueues :: stackVersusList()
vector<CrimeData> data = FileController :: readCrimeDataToVector("path to file");

Stack<CrimeData> crimeStack;
Queue<CrimeData> crimeQueue;

for (int index = 0; index < 100; index++)
{
    CrimeData temp = data.at(index);
    crimeStack.push(temp);
    crimeQueue.enqueue(temp);
}

Queue<int> queue;
Stack<int> stack;
Queue<int> queueFromStack;
Stack<int> stackFromQueue;

for (int index = 0; index < 10; index++)
{
    queue.enqueue(index);
    stack.push(index);
}

for (int index = 0; index < 10; index++)
{
    cout << index << endl;
    cout << "Queue result: " << queue.dequeue() << endl;
    cout << "Stack result: " << stack.pop() << endl;
}

for (int index = 0; index < 10; index++)
{
    queue.enqueue(index);
    stack.push(index);
}

for (int index = 0; index < 10; index++)
{
    cout << index << endl;
    cout << "Stack result: " << stackFromQueue.pop() << endl;
    cout << "Queue result: " << queueFromStack.dequeue() << endl;
}

    Queue<string> wordQueue;
    LinkedList<string> wordList;
    
    wordQueue.add("first");
    wordQueue.add("second");
    wordQueue.add("third");
    wordQueue.add("fourth");
    wordQueue.add("fifth");
    
    wordList.add("first");
    wordList.add("second");
    wordList.add("third");
    wordList.add("fourth");
    wordList.add("fifth");
    
    cout << "Queue: " << wordQueue.getFromIndex(0) << " versus List: " << wordList.getFromIndex(0) << endl;
    cout << "Here is the in order removal in a queue: " << endl;
    wordQueue.clear();
    cout << "Here is a backwards order removal in a list: " << endl;
    for(int index = wordList.getSize() - 1; index >= 0; index--)
    {
        cout << wordList.removal(index) << endl;
    }
    
    

#endif /* TestingStacksAndQueues_hpp */
