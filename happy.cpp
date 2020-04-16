/**
 * @author Hari Krishnan
 * @email hariknair77@gmal.com
 * @create date 2020-04-16 13:43:56
 * @modify date 2020-04-16 13:43:56
 * @desc A happy number is a number defined by the following process: Starting with any positive integer, replace the number by the sum of the squares of its digits, and repeat the process until the number equals 1 (where it will stay), or it loops endlessly in a cycle which does not include 1. Those numbers for which this process ends in 1 are happy numbers.
 */

#include <iostream>
#include <set>

std::set<int> nums;
int sqrtSum(int n) {
    int sum = 0;
    while (n) {
        int r = n % 10;
        sum += r * r;
        n /= 10;
    }
    return sum;
}
bool happy(int n) {
    while (1) {
        n = sqrtSum(n);
        if (n == 1) return true;
        if (nums.find(n) != nums.end()) return false; //oops already in
        nums.insert(n);
    }
}
int main() {
    int n;
    std::cout << "enter a number:";
    std::cin >> n;
    std::cout << happy(n) << std::endl;
}