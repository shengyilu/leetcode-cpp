//
// Created by 盧聖宜 on 2019-05-24.
//

#ifndef LEETCODE_CPP_LEETCODE_977_H
#define LEETCODE_CPP_LEETCODE_977_H

#include <vector>
using std::vector;
#include <iostream>

class Leetcode_977 {
public:
    vector<int> sortedSquares(vector<int>& A) {

        int leftMost = 0;
        int rightMost = A.size() - 1;
        int startIndex = A.size() - 1;
        vector<int> result(A.size());

        while (leftMost <= rightMost) {
            int left = A[leftMost] * A[leftMost];
            int right = A[rightMost] * A[rightMost];

            if (left > right) {
                result[startIndex] = left;
                leftMost++;
            } else {
                result[startIndex] = right;
                rightMost--;
            }
            startIndex--;
        }
        return result;
    }

    void solve() {
        vector<int> input = {-7,-3,2,3,11};
        vector<int> ans = sortedSquares(input);

        for (int i = 0; i < ans.size(); i++) {
            std::cout << ans.at(i) << ' ';
        }
        vector<int>().swap(ans);

    }
};

#endif //LEETCODE_CPP_LEETCODE_977_H
