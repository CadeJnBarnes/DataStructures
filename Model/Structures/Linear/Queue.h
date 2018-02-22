//
//  Queue.h
//  DataStructures
//
//  Created by Barnes, Cade on 2/22/18.
//  Copyright © 2018 CTEC. All rights reserved.
//

#ifndef Queue_h
#define Queue_h

#include "LinkedList.hpp"
#include <iostream>

using namespace std;

template <class Type>
class Queue : public LinkedList<Type>
{
public:
    Queue();
    ~Queue();
    
    void enqueue(Type data);
    Type dequeue();
    Type peek();
    void clear();
    
    void add(Type data);
    void addAtIndex(int index, Type data);
    Type getFromIndex(int index);
    Type remove(int index);
}

template <class Type>
Queue<Type> :: Queue() : LinkedList<Type>()
{
    
}

template <class Type>
Queue<Type> :: ~Queue()
{
    for(LinearNode<Type> * removed = this->front; removed != nullptr; removed = this ->front)
    {
        this->front = removed->getNextNode();
        delete removed;
    }
}

template <class Type>
void Queue<Type> :: enqueue(Type item)
{
    LinearNode<Type> * added = new LinearNode<Type>(item);
    
    if(this->size == 0)
    {
        this->front = added;
    }
    else
    {
        this->end->setNextNode(added);
    }
    
    this->end = added;
    this->size++;
}

template <class Type>
void Queue<Type> :: addAtIndex(int index, Type item)
{
    assert(index == this->size - 1);
    enqueue(item);
}

template <class Type>
void Queue<Type> :: add(Type item)
{
    enqueue(item);
}

template <class Type>
Type Queue<Type> :: dequeue()
{
    assert(this->size > 0);
    
    Type returned = this->front->getData();
    
    LinearNode<Type> * removed = this->front;
    this->front = removed->getNextNode();
    
    delete removed;
    
    this->size = this->size - 1;
    
    return returned;
}




#endif /* Queue_h */
