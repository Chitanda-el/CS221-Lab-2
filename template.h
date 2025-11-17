#pragma once

#include <cstdlib>
#include <vector>
#include <chrono>

using namespace std;
using namespace chrono;

struct dataStruct { int intOne, intTwo, intThree; };

class cmpTime
{
    private:
        microseconds duration{0};

    public:
        template <typename T> cmpTime(vector<T>& byRefVec, const int sortingAlgo);
};