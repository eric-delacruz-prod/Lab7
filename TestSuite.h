/**
 * @file: TestSuite.h
 * @author: Eric Delacruz
 * @date: 4/26/19
*/

#ifndef TEST_SUITE_H
#define TEST_SUITE_H

#include "LinkedListOfInts.h"
#include <iostream>
#include <vector>
#include <string>

class TestSuite
{
private:
    int testTrack;
public:

    //----------------------------------
    //constructor
    //----------------------------------
    TestSuite();

    //----------------------------------
    //runs all tests & outputs results
    //----------------------------------
    void runTests(); 

    //----------------------------------
    //format output
    //----------------------------------
    void output(bool f); 

    //----------------------------------
    //testing: bool isEmpty()
    //----------------------------------
    bool test1(); //isEmpty() returns true for empty list
        //addBack variant 
    bool test2(); //isEmpty() returns false for after addBack 
    bool test3(); //isEmpty() returns false for after removeBack 
        //addFront variant 
    bool test4(); //isEmpty() returns false for after addFront
    bool test5(); //isEmpty() returns false for after removeFront

    //----------------------------------
    //testing: int size()
    //----------------------------------
    bool test6(); //size() returns 0 for empty list
        //addBack variant 
    bool test7(); //size() returns 1-10 after corresponding calls to addBack
    bool test8(); //size() returns 1-10 after corresponding calls to addBack & removeBack
                    //A[2,5,1,10,1,15] R[1,2,3,5,3,10] L[10]
        //addFront variant
    bool test9(); //size() returns 1-10 after corresponding calls to addFront
    bool test10(); //size() returns 1-10 after corresponding calls to addFront & removeFront
                    //A[2,5,1,10,1,15] R[1,2,3,5,3,10] L[10]
        //dual variant 
    bool test11(); //size() returns 1-10 after corresponding calls to addBack & addFront
    bool test12(); //size() returns 1-10 after corresponding calls to addBack & removeFront
                    //A[2,5,1,10,1,15] R[1,2,3,5,3,10] L[10]
    bool test13(); //size() returns 1-10 after corresponding calls to addFront & removeBack
                    //A[2,5,1,10,1,15] R[1,2,3,5,3,10] L[10]
    bool test14(); //size() returns 1-10 after corresponding calls to addBack, addFront,removeBack, & removeFront
                    //A[A2,B5,A1,B10,A1,B15] R[B1,A2,B3,A5,B3,A10] L[10]
        
    //----------------------------------
    //testing: bool search(int value)   
    //----------------------------------
    bool test15(); //search returns false for empty list
    bool test16(); //search returns false for list not containing value 
        //addBack variants [,,]
    bool test17(); //search returns true for list containing value
    bool test18(); //search returns true for list containing duplicates of value
    bool test19(); //search returns true for list containing value and surrounding values
                    //(e.g. 2 in [1,2,3] & 101 in [100,101,102])
        //addFront variants [,,]
    bool test20(); //search returns true for list containing value
    bool test21(); //search returns true for list containing duplicates of value
    bool test22(); //search returns true for list containing value and surrounding values
                    //(e.g. 2 in [1,2,3] & 101 in [100,101,102])
        //dual variants [,,]
    bool test23(); //search returns true for list containing value
    bool test24(); //search returns true for list containing duplicates of value
    bool test25(); //search returns true for list containing value and surrounding values
                    //(e.g. 2 in [1,2,3] & 101 in [100,101,102])

    //----------------------------------
    //testing: void addBack(int value)
    //----------------------------------
    bool test26(); //addBack only accepts ints & doesn't effect size
    bool test27(); //the last node is equal to the value passed in last valid call to addBack

    //----------------------------------
    //testing: void addFront(int value)
    //----------------------------------
    bool test28(); //addFront only accepts ints & doesn't effect size
    bool test29(); //the first node is equal to the value passed in last valid call to addFront

    //----------------------------------
    //testing: bool removeback()
    //----------------------------------
    bool test30(); //removeBack on an empty list returns false
    bool test31(); //removeBack on an returns true when successfull
    bool test32(); //the first node is unchanged up to the last call to removeBack

    //----------------------------------
    //testing: bool removeFront()
    //----------------------------------
    bool test33(); //removeFront on an empty list returns false
    bool test34(); //removeFront on an returns true when successfull
    bool test35(); //the last node is unchanged up to the last call to removeFront
};
#endif