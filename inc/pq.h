#ifndef PQ_H
#define PQ_H

#include <queue>
#include <vector>
#include <unordered_map>

class LFUSetFinder {
private:
    std::priority_queue<std::pair<int, int>, std::vector<std::pair<int, int>>, std::greater<std::pair<int, int>>> minHeap;
    std::unordered_map<int, int> accessCounts;

public:
    void insertSet(int set);
    int findLeastUsedSet();
    void incrementAccessCount(int set);
};

#endif