//
//  Controller.hpp
//  DataStructures
//
//  Created by Barnes, Cade on 1/31/18.
//  Copyright © 2018 CTEC. All rights reserved.
//

#ifndef Controller_hpp
#define Controller_hpp

#include "Tools/Timer.hpp"
#include "FileController.hpp"
#include <vector>
#include <iostream>
#include "../Model/Structures/Linear/Array.hpp"
#include "../Testers/ArrayTester.hpp"
#include "../Testers/RecursionTester.hpp"
#include "../Testers/SortingTester.hpp"


class Controller
{
private:
    void findMaxAndMin();
public:
    void start();
};


#endif /* Controller_hpp */
