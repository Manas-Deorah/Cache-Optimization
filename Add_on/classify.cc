#include <iostream>
#include <map>
#include "classify.h"

using namespace std;


    void Classify::accessSet(int setIndex) {
        accessCount[setIndex]++; // Increment the access count for the specified set
    }

    void Classify::printAccessCounts() {
        for (const auto& pair : accessCount) {
            cout << "Set " << pair.first << " accessed " << pair.second << " times" << endl;
        }
    }

/*
int main() {
    Cache cache;

    // Simulate accesses to sets
    cache.accessSet(0);
    cache.accessSet(3);
    cache.accessSet(1);
    cache.accessSet(0);
    cache.accessSet(5);
    cache.accessSet(3);
    cache.accessSet(7);
    cache.accessSet(1);
    cache.accessSet(0);

    // Print the access counts for each set
    cache.printAccessCounts();

    return 0;
}*/