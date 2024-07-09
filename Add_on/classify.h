#ifndef CACHE_H
#define CACHE_H

#include <iostream>
#include <map>

class Classify {
private:
    std::map<int, int> accessCount; // Map to store access count for each set

public:
    void accessSet(int setIndex);
    void printAccessCounts();
};

#endif