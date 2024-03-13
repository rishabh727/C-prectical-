//Remove Duplicates from Array
#include <iostream>
#include <unordered_set>
#include <vector>

std::vector<int> removeDuplicates(std::vector<int>& nums) {
    std::unordered_set<int> seen;
    std::vector<int> result;
    for (int num : nums) {
        if (seen.find(num) == seen.end()) {
            seen.insert(num);
            result.push_back(num);
        }
    }
    return result;
}

int main() {
    std::vector<int> nums = {1, 2, 2, 3, 4, 4, 5};
    std::vector<int> result = removeDuplicates(nums);
    std::cout << "Array after removing duplicates: ";
    for (int num : result) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
    return 0;
}
