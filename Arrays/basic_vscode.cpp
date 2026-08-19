#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

bool containsDuplicate(vector<int>& nums) {

    unordered_map<int, int> mp;

    for (int x : nums) {

        mp[x]++;

        if (mp[x] > 1) {
            return true;
        }
    }

    return false;
}

int main() {

    vector<int> nums = {1, 2, 3, 1};

    bool result = containsDuplicate(nums);

    if (result) {
        cout << "Duplicate Found";
    } else {
        cout << "No Duplicate";
    }

    return 0;
}
