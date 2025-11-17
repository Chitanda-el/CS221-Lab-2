#pragma once

#include <cstdlib>
#include <vector>
#include <chrono>

using namespace std;
using namespace chrono;

const int numIterations = 1000;   // Number of sorting iterations
const int maxRandNum = 10000;     // Maximum random number value
const int numElements = 10000;    // Number of elements in the vector to be sorted
const int numIntsInStruct = 3;    // Number of int members in dataStruct

const int bubble_sort = 0;  // Pass in place of sortingAlgo when calling cmpTime
const int merge_sort = 1;   // to indicate which sorting algorithm to use
const int quick_sort = 2;

// Can only have ints and number of ints must be equal to numIntsInStruct = 3
struct dataStruct { int intOne, intTwo, intThree; };

// Generic class to compare sorting times of algorithms
class cmpTime
{
    private:
        microseconds duration{0};

    public:
        template <typename T> cmpTime(vector<T>& byRefVec, const int sortingAlgo);
};