//
//  HashTable.hpp
//  DataStructures
//
//  Created by Barnes, Cade on 4/27/18.
//  Copyright © 2018 CTEC. All rights reserved.
//

#ifndef HashTable_hpp
#define HashTable_hpp

#include "../Nodes/HashNode.hpp"

template <class Type>
class HashTable
{
private:
    HashNode<Type> * internalStorage;
    long size;
    long capacity;
    double loadFactor;
    
    long getNextPrime();
    bool isPrime(long current);
    void resize();
    long findPosition(HashNode<Type>* insertedNode);
    long handleCollision(HashNode<Type>* insertedNode, long index);
    
public:
    HashTable();
    ~HashTable();
    
    void insert(Type data);
    long getSize();
    
    
};

template <class Type>
HashTable<Type> :: HashTable()
{
    capacity = 101;
    internalStorage = new HashNode<Type>*[capacity];
    size = 0;
    loadFactor = .80;
}

template <class Type>
HashTable<Type> :: ~HashTable()
{
    delete [] internalStorage;
}

template <class Type>
long HashTable<Type> :: getNextPrime()
{
    long nextPrime = (this->capacity * 2) + 1;
    
    while ( !isPrime(nextPrime))
    {
        nextPrime += 2;
    }
    
    return nextPrime;
}

template <class Type>
bool HashTable<Type> :: isPrime(long current)
{
    if (candidateNumber <= 1)
    {
        return false;
    }
    else if(current == 2 || current == 3)
    {
        return true;
    }
    else if(current % 2 == 0)
    {
        return false;
    }
    else
    {
        for(int next = 3; next <= sqrt(current) +1; next += 2)
        {
            if(current % next == 0)
            {
                return false;
            }
        }
        return true;
    }
}

template <class Type>
void HashTable<Type> :: findPosition(HashNode<Type> * insert)
{
    
}

template <class Type>
long HashTable<Type> :: handleCollison(HashNode<Type> * current, long index)
{
    return -1;
}

template <class Type>
long HashTable<Type> :: getSize()
{
    return -1;
}
#endif /* HashTable_hpp */
