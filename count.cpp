/**
 * @author Hari Krishnan
 * @email hariknair77@gmal.com
 * @create date 2020-04-21 21:17:59
 * @modify date 2020-04-21 21:17:59
 * @desc [count x if x+1 also in array]
 */

#include <iostream>
#include <unordered_set>
#include <vector>

int countElements(std::vector<int>& arr) {
    std::unordered_set<int> s(arr.begin(), arr.end());
    int count = 0;
    for (auto& i : arr)
        if (s.find(i + 1) != s.end())
            count++;
    return count;
}

int main() {
    std::vector<int> a = {1, 1, 2, 2};
    std::cout << countElements(a) << std::endl;
}
