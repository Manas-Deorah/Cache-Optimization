#include <iostream>
#include <queue>
#include <vector>
#include <unordered_map>
#include "pq.h"



    void LFUSetFinder:: insertSet(int set) {
        minHeap.push({0, set}); // Initialize access frequency to 0
        accessCounts[set] = 0;
    }

    int LFUSetFinder:: findLeastUsedSet() {
       // while (!minHeap.empty()) {
            int set = minHeap.top().second;
        //    minHeap.pop();
       //     if (accessCounts[set] == 0) {

                return set;
      
      //      }
       // }
     //   return -1; // No unused sets found
    }

    void  LFUSetFinder:: incrementAccessCount(int set) {
        accessCounts[set]++;
        minHeap.push({accessCounts[set], set}); // Update min-heap with new access frequency
    }


