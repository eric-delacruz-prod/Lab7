/**
*	@file: main.cpp
*	@author: Eric Delacruz
*	@date: 4/26/19
*	@brief driver for LinkedList demo
*/
#include <iostream>
#include "LinkedListOfInts.h"
#include "TestSuite.h"

int main(int argc, char** argv)
{

	TestSuite myTester;
	myTester.runTests();

	std::cout << "And we're done.\nGoodbye.\n";
	
	return (0);

}

