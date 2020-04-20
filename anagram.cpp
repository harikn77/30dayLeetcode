/**
 * @author Hari Krishnan
 * @email hariknair77@gmal.com
 * @create date 2020-04-20 20:00:33
 * @modify date 2020-04-20 20:00:33
 * @desc [Group Anagrams]
 */

#include <algorithm>
#include <iostream>
#include <map>
#include <string>
#include <vector>

std::vector<std::vector<std::string>> groupAnagram(std::vector<std::string>& strs) {
    std::map<std::string, std::vector<std::string>> m;
    for (auto& i : strs) {
        std::string key = i;
        std::sort(key.begin(), key.end());
        if (m.find(key) != m.end())
            m[key].push_back(i);
        else
            m[key] = std::vector<std::string>{i};
    }
    std::vector<std::vector<std::string>> res{};
    for (auto& i : m)
        res.push_back(i.second);
    return res;
}

int main() {
    std::vector<std::string> s{"eat", "tea", "tan", "ate", "nat", "bat"};
    for (auto& i : groupAnagram(s)) {
        for (auto& j : i)
            std::cout << j << " ";
        std::cout << std::endl;
    }
}