/**
 * @author Hari Krishnan
 * @email hariknair77@gmal.com
 * @create date 2020-04-17 11:01:18
 * @modify date 2020-04-17 11:01:18
 * @desc SUB ARRAY WITH MAXIMUM SUM
 */
#include <iostream>

int kadane(int a[], int size) {
    int curr_max = a[0];
    int max_so_far = a[0];
    int start = 0, end = 0;
    for (int i = 1; i < size; i++) {
        //kadane's algorithm
        // curr_max = std::max(a[i], curr_max + a[i]);
        // max_so_far = std::max(curr_max, max_so_far);
        // std::cout << "curr:" << curr_max << " "
        //           << "max:" << max_so_far << std::endl;

        //just my modification to print the seq.
        if (a[i] > curr_max + a[i]) {
            start = i;
            curr_max = a[i];
        } else
            curr_max = curr_max + a[i];
        if (curr_max > max_so_far) {
            end = i;
            max_so_far = curr_max;
        }
    }
    for (int i = start; i <= end; i++)
        std::cout << a[i] << " ";
    std::cout << std::endl;
    return max_so_far;
}

int main() {
    int n = 8;
    // std::cin >> n;
    int a[n] = {-2, -3, 4, -1, -2, 1, 5, -3};
    // std::cout << "enter array: ";
    // for (int i = 0; i < n; i++)
    //     std::cin >> a[i];
    std::cout << kadane(a, n) << std::endl;
}