/**
 * @author Hari Krishnan
 * @email hariknair77@gmal.com
 * @create date 2020-04-18 12:54:46
 * @modify date 2020-04-18 12:54:46
 * @desc Given an array nums, write a function to move all 0's to the end of it while maintaining the relative order of the non-zero elements.
 */
#include <iostream>
#include <vector>

void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}
int main() {
    std::vector<int> a{0, 1, 0, 3, 12};
    int i, j;
    for (i = 0, j = 0; i < a.size(); i++) {
        if (a[i] != 0) {
            swap(a[j], a[i]);
            j++;
        }
    }
    for (auto &i : a)
        std::cout << i << " ";
}