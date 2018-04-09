//
//  BinaryTreeTester.hpp
//  DataStructures
//
//  Created by Barnes, Cade on 3/27/18.
//  Copyright © 2018 CTEC. All rights reserved.
//

#ifndef BinaryTreeTester_hpp
#define BinaryTreeTester_hpp

#include <stdio.h>
#include "../Model/Nodes/BinaryTreeNode.hpp"
#include "../Model/Structures/NonLinear/BinarySearchTree.hpp"
#include <iostream>

class BinaryTreeTester
{
private:
    BinarySearchTree<int> testTree;
    BinaryTreeNode<int> testNode;
public:
    void doTreeStuff();
};


#endif /* BinaryTreeTester_hpp */
