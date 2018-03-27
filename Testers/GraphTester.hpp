//
//  GraphTester.hpp
//  DataStructures
//
//  Created by Barnes, Cade on 3/23/18.
//  Copyright © 2018 CTEC. All rights reserved.
//

#ifndef GraphTester_hpp
#define GraphTester_hpp

#include <stdio.h>
#include <iostream>
#include "../Model/Structures/NonLinear/Graph.hpp"

class GraphTester
{
private:
    Graph<string> puzzle;
    void setup();
    void compareTraversals();
    void findCheapestTraversals();
public:
    void testGraphs();
};




#endif /* GraphTester_hpp */
