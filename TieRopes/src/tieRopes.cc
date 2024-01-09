#include "tieRopes.h"

int solution(int K, vector<int> &A) {
    if (A.empty()) {
        return 0;
    }

    unsigned int totalNumOfRopes{0};
    int lastRopeLength{0};
    for (std::size_t i = 0; i < A.size(); i++) {
        lastRopeLength += A[i];
        if (lastRopeLength >= K) {
            lastRopeLength = 0;
            totalNumOfRopes++;
        }
    }

    return totalNumOfRopes;
}
