/**
 * @file: TestSuite.cpp
 * @author: Eric Delacruz
 * @date: 4/26/19
*/

#include "TestSuite.h"
#include "LinkedListOfInts.h"
#include <iostream>
#include <vector>
#include <string>


//----------------------------------
//constructor
//----------------------------------
TestSuite::TestSuite() {
    testTrack = 0;
}

//----------------------------------
//runs all tests & outputs results
//----------------------------------
void TestSuite::runTests() {

    std::cout << "\n///////////////////\n";
    std::cout << "Lab 7 // Test Suite";
    std::cout << "\n///////////////////\n";

    output(test1());
    output(test2());
    output(test3());
    output(test4());
    output(test5());
    output(test6());
    output(test7());
    output(test8());
    output(test9());
    output(test10());
    output(test11());
    output(test12());
    output(test13());
    output(test14());
    output(test15());
    output(test16());
    output(test17());
    output(test18());
    output(test19());
    output(test20());
    output(test21());
    output(test22());
    output(test23());
    output(test24());
    output(test25());
    output(test26());
    output(test27());
    output(test28());
    output(test29());
    output(test30());
    output(test31());
    output(test32());
    output(test33());
    output(test34());
    output(test35());
} 

void TestSuite::output(bool f) {
    testTrack++;
    if(f) {
        std::cout<<"Test "<<testTrack<<": Success\n";
    } else {
        std::cout<<"Test "<<testTrack<<": Failure\n";
    }
    
}

//----------------------------------
//isEmpty() returns true for empty list
//----------------------------------
bool TestSuite::test1() {
    std::cout<<"\nTest 1: isEmpty() returns true for empty list\n";

    LinkedListOfInts list;

    return(list.isEmpty());
}

//----------------------------------
//isEmpty() returns false for after addBack 
//----------------------------------
bool TestSuite::test2() {
    std::cout<<"\nTest 2: isEmpty() returns false for after addBack \n";
    LinkedListOfInts list;

    list.addBack(1);

    return(!list.isEmpty());
}

//----------------------------------
//isEmpty() returns true for after removeBack
//----------------------------------
bool TestSuite::test3() {
    std::cout<<"\nTest 3: isEmpty() returns true for after removeBack\n";
    LinkedListOfInts list;

    list.addBack(1);
    list.removeBack();

    return(list.isEmpty());
}

//----------------------------------
//isEmpty() returns false for after addFront
//----------------------------------
bool TestSuite::test4() {
    std::cout<<"\nTest 4: isEmpty() returns false for after addFront\n";
    LinkedListOfInts list;

    list.addFront(1);

    return(!list.isEmpty());
}

//----------------------------------
//isEmpty() returns true for after removeFront
//----------------------------------
bool TestSuite::test5() {
    std::cout<<"\nTest 5: isEmpty() returns true for after removeFront\n";
    LinkedListOfInts list;

    list.addFront(1);
    list.removeFront();

    return(list.isEmpty());
}

//----------------------------------
//size() returns 0 for empty list
//----------------------------------
bool TestSuite::test6() {
    std::cout<<"\nTest 6: size() returns 0 for empty list\n";
    LinkedListOfInts list;

    return(list.size() == 0);
}

//----------------------------------
//size() returns 1-10 after corresponding calls to addBack
//----------------------------------
bool TestSuite::test7() {
    std::cout<<"\nTest 7: size() returns 1-10 after corresponding calls to addBack\n";
    LinkedListOfInts list;

    for(int i = 1; i < 11; i++) {
        list.addBack(i);

        if(list.size() != i) {
            return(false);
        }
    }

    return(true);
}

//----------------------------------
//size() returns 1-10 after corresponding calls to addBack & removeBack
//----------------------------------
bool TestSuite::test8() {
    std::cout<<"\nTest 8: size() returns 1-10 after corresponding calls to addBack & removeBack\n";
    LinkedListOfInts list;

    for(int i = 1; i < 11; i++) {
        list.addBack(i);

        if(list.size() != i) {
            return(false);
        }
    }

    for(int i = 9; i > 0; i--) {
        list.removeBack();
        if(list.size() != i) {
            return(false);
        }
    }

    return(true);
}

//----------------------------------
//size() returns 1-10 after corresponding calls to addFront
//----------------------------------
bool TestSuite::test9() {
    std::cout<<"\nTest 9: size() returns 1-10 after corresponding calls to addFront\n";
    LinkedListOfInts list;

    for(int i = 1; i < 11; i++) {
        list.addFront(i);

        if(list.size() != i) {
            return(false);
        }
    }

    return(true);
}

//----------------------------------
//size() returns 1-10 after corresponding calls to addFront & removeFront
//----------------------------------
bool TestSuite::test10() {
    std::cout<<"\nTest 10: size() returns 1-10 after corresponding calls to addFront & removeFront\n";
    LinkedListOfInts list;

    for(int i = 1; i < 11; i++) {
        list.addFront(i);

        if(list.size() != i) {
            return(false);
        }
    }

    for(int i = 9; i > 0; i--) {
        list.removeFront();
        if(list.size() != i) {
            return(false);
        }
    }

    return(true);
}

//----------------------------------
//size() returns 1-10 after corresponding calls to addBack & addFront
//----------------------------------
bool TestSuite::test11() {
    std::cout<<"\nTest 11: size() returns 1-10 after corresponding calls to addBack & addFront\n";
    LinkedListOfInts list;
    bool either = true;

    for(int i = 1; i < 11; i++) {
        if(either) {
            list.addBack(i);
            either = false;
        } else {
            list.addFront(i);
            either = true;
        }

        if(list.size() != i) {
            return(false);
        }
    }

    return(true);
}

//----------------------------------
//size() returns 1-10 after corresponding calls to addBack & removeFront
//----------------------------------
bool TestSuite::test12() {
    std::cout<<"\nTest 12: size() returns 1-10 after corresponding calls to addBack & removeFront\n";
    LinkedListOfInts list;

        list.addBack(1);
        list.addBack(2);
        if(list.size() != 2) {
                return(false);
            }

        list.removeFront();
        if(list.size() != 1) {
                return(false);
            }

        list.addBack(2);
        list.addBack(3);
        list.addBack(4);
        list.addBack(5);
        if(list.size() != 5) {
                return(false);
            }    

    return(true);
}

//----------------------------------
//size() returns 1-10 after corresponding calls to addFront & removeBack
//----------------------------------
bool TestSuite::test13() {
    std::cout<<"\nTest 13: size() returns 1-10 after corresponding calls to addFront & removeBack\n";
    LinkedListOfInts list;

        list.addFront(1);
        list.addFront(2);
        if(list.size() != 2) {
                return(false);
            }

        list.removeBack();
        if(list.size() != 1) {
                return(false);
            }

        list.addFront(2);
        list.addFront(3);
        list.addFront(4);
        list.addFront(5);
        if(list.size() != 5) {
                return(false);
            }    

    return(true);
}

//----------------------------------
//size() returns 1-10 after corresponding calls to addBack, addFront,removeBack, & removeFront
//----------------------------------
bool TestSuite::test14() {
    std::cout<<"\nTest 14: size() returns 1-10 after corresponding calls to addBack, addFront,removeBack, & removeFront\n";
    LinkedListOfInts list;

        list.addBack(1);
        list.addBack(2);
        if(list.size() != 2) {
                return(false);
            }

        list.removeBack();
        if(list.size() != 1) {
                return(false);
            }

        list.addFront(2);
        list.addFront(3);
        list.addFront(4);
        list.addFront(5);
        if(list.size() != 5) {
                return(false);
            }    

        list.removeFront();
        if(list.size() != 4) {
                return(false);
            }

    return(true);
}

//----------------------------------
//search returns false for empty list
//----------------------------------
bool TestSuite::test15() {
    std::cout<<"\nTest 15: search returns false for empty list\n";
    LinkedListOfInts list;

    return(!list.search(1));
}

//----------------------------------
//search returns false for list not containing value 
//----------------------------------
bool TestSuite::test16() {
    std::cout<<"\nTest 16: search returns false for list not containing value // Back \n";
    LinkedListOfInts list;

    list.addBack(1);

    return(!list.search(2));
}

//----------------------------------
//search returns true for list containing value
//----------------------------------
bool TestSuite::test17() {
    std::cout<<"\nTest 17: search returns true for list containing value // Back \n";
    LinkedListOfInts list;

    list.addBack(1);

    return(list.search(1));
}

//----------------------------------
//search returns true for list containing duplicates of value
//----------------------------------
bool TestSuite::test18() {
    std::cout<<"\nTest 18: search returns true for list containing duplicates of value // Back \n";
    LinkedListOfInts list;

    list.addBack(1);
    list.addBack(1);

    return(list.search(1));
}

//----------------------------------
//search returns true for list containing value and surrounding values
//----------------------------------
bool TestSuite::test19() {
    std::cout<<"\nTest 19: search returns true for list containing value and surrounding values // Back \n";
    LinkedListOfInts list;

    list.addBack(1);
    list.addBack(2);
    list.addBack(3);

    return(list.search(2));
}

//----------------------------------
//search returns true for list containing value
//----------------------------------
bool TestSuite::test20() {
    std::cout<<"\nTest 20: search returns true for list containing value // Front\n";
    LinkedListOfInts list;

    list.addFront(1);

    return(list.search(1));
}

//----------------------------------
//search returns true for list containing duplicates of value
//----------------------------------
bool TestSuite::test21() {
    std::cout<<"\nTest 21: search returns true for list containing duplicates of value // Front\n";
    LinkedListOfInts list;

    list.addFront(1);
    list.addFront(1);

    return(list.search(1));
}

//----------------------------------
//search returns true for list containing value and surrounding values
//----------------------------------
bool TestSuite::test22() {
    std::cout<<"\nTest 22: search returns true for list containing value and surrounding values // Front\n";
    LinkedListOfInts list;

    list.addFront(1);
    list.addFront(2);
    list.addFront(3);

    return(list.search(2));
}

//----------------------------------
//search returns true for list containing value
//----------------------------------
bool TestSuite::test23() {
    std::cout<<"\nTest 23: search returns true for list containing value // Back & Front\n";
    LinkedListOfInts list;

    list.addBack(1);
    list.addFront(2);

    return(list.search(1));
}

//----------------------------------
//search returns true for list containing duplicates of value
//----------------------------------
bool TestSuite::test24() {
    std::cout<<"\nTest 24: search returns true for list containing duplicates of value // Back & Front\n";
    LinkedListOfInts list;

    list.addBack(1);
    list.addFront(1);

    return(list.search(1));
}

//----------------------------------
//search returns true for list containing value and surrounding values
//----------------------------------
bool TestSuite::test25() {
    std::cout<<"\nTest 25: search returns true for list containing value and surrounding values // Back & Front\n";
    LinkedListOfInts list;

    list.addBack(1);
    list.addFront(2);
    list.addBack(3);
    list.addFront(4);

    return(list.search(3));
}

//----------------------------------
//addBack only accepts ints & doesn't effect size
//----------------------------------
bool TestSuite::test26() {
    std::cout<<"\nTest 26: addBack only accepts ints & doesn't effect size\n";
    LinkedListOfInts list;

    list.addBack('x');
    if (list.size() == 0) {
        return(true);
    }
    return(false);
}

//----------------------------------
//last node is equal to the value passed in last valid call to addBack
//----------------------------------
bool TestSuite::test27() {
    std::cout<<"\nTest 27: last node is equal to the value passed in last valid call to addBack\n";
    LinkedListOfInts list;

    list.addBack(1);
    list.addBack(2);
    list.addBack(3);
    list.addBack(4);
    list.addBack(5);

    std::vector<int> vectorList = list.toVector();
    std::vector<int> vectorComp;

    vectorComp.push_back(1);
    vectorComp.push_back(2);
    vectorComp.push_back(3);
    vectorComp.push_back(4);
    vectorComp.push_back(5);

    return(vectorList == vectorComp);
}


//----------------------------------
//addFront only accepts ints & doesn't effect size
//----------------------------------
bool TestSuite::test28() {
    std::cout<<"\nTest 28: addFront only accepts ints & doesn't effect size\n";
    LinkedListOfInts list;

    list.addFront('x');
    if (list.size() == 0) {
        return(true);
    }
    return(false);
}


//----------------------------------
//first node is equal to the value passed in last valid call to addFront
//----------------------------------
bool TestSuite::test29() {
    std::cout<<"\nTest 29: first node is equal to the value passed in last valid call to addFront\n";
    LinkedListOfInts list;

    list.addFront(1);
    list.addFront(2);
    list.addFront(3);
    list.addFront(4);
    list.addFront(5);

    std::vector<int> vectorList = list.toVector();
    std::vector<int> vectorComp;

    vectorComp.push_back(5);
    vectorComp.push_back(4);
    vectorComp.push_back(3);
    vectorComp.push_back(2);
    vectorComp.push_back(1);

    return(vectorList == vectorComp);
}

//----------------------------------
//removeBack on an empty list returns false
//----------------------------------
bool TestSuite::test30() {
    std::cout<<"\nTest 30: removeBack on an empty list returns false\n";
    LinkedListOfInts list;

    return(!list.removeBack());
}

//----------------------------------
//removeBack on an returns true when successfull
//----------------------------------
bool TestSuite::test31() {
    std::cout<<"\nTest 31: removeBack on an returns true when successful\n";
    LinkedListOfInts list;

    list.addBack(1);

    return(list.removeBack());
}

//----------------------------------
//the first node is unchanged up to the last call to removeBack
//----------------------------------
bool TestSuite::test32() {
    std::cout<<"\nTest 32: first node is unchanged up to the last call to removeBack\n";
    LinkedListOfInts list;

    list.addBack(1);
    list.addBack(2);
    list.removeBack();

    std::vector<int> vectorList = list.toVector();
    std::vector<int> vectorComp;

    vectorComp.push_back(1);

    return(vectorList == vectorComp);
}

//----------------------------------
//removeFront on an empty list returns false
//----------------------------------
bool TestSuite::test33() {
    std::cout<<"\nTest 33: removeFront on an empty list returns false\n";
    LinkedListOfInts list;

    return(!list.removeBack());
}

//----------------------------------
//removeFront on an returns true when successfull
//----------------------------------
bool TestSuite::test34() {
    std::cout<<"\nTest 34: removeFront on an returns true when successful\n";
    LinkedListOfInts list;

    list.addFront(1);

    return(list.removeBack());
}

//----------------------------------
//last node is unchanged up to the last call to removeFront
//----------------------------------
bool TestSuite::test35() {
    std::cout<<"\nTest 35: last node is unchanged up to the last call to removeFront\n";
    LinkedListOfInts list;

    list.addFront(1);
    list.addFront(2);
    list.removeFront();

    std::vector<int> vectorList = list.toVector();
    std::vector<int> vectorComp;

    vectorComp.push_back(1);

    return(vectorList == vectorComp);
}
