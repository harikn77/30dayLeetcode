/**
 * @author Hari Krishnan
 * @email hariknair77@gmal.com
 * @create date 2020-04-23 22:01:20
 * @modify date 2020-04-23 22:01:20
 * @desc [Backspace String Compare]
 */

#include <deque>
#include <iostream>
#include <string>

std::string backspace(std::string& str) {
    std::deque<char> q;
    for (auto& i : str) {
        if (i != '#')
            q.push_back(i);
        else if (!q.empty())
            q.pop_back();
    }
    std::string res = "";
    while (!q.empty()) {
        res += q.front();
        q.pop_front();
    }
    return res;
}

int main() {
    std::string s = "y#fo##f", t = "y#f#o##f"; //f
    std::cout << backspace(s).compare(backspace(t));  // 0 means equal
}