/**
 * @author Hari Krishnan
 * @email hariknair77@gmal.com
 * @create date 2020-04-19 22:47:01
 * @modify date 2020-04-19 22:47:01
 * @desc [Best Time to Buy and Sell Stock II]
 */

#include <iostream>
#include <vector>

int profit(std::vector<int> p) {
    if (p.size() == 1) return 0;
    int i = 0, buy, sell, net = 0;
    while (i < p.size() - 1) {
        while (i < p.size() - 1 && p[i + 1] <= p[i])
            i++;
        if (i == p.size() - 1) break;
        buy = i++;
        while (i < p.size() && p[i] >= p[i - 1])
            i++;
        sell = i - 1;
        net += (p[sell] - p[buy]);
    }
    return net;
}
int main() {
    std::vector<int> p{7, 1, 5, 3, 6, 4};
    std::cout << profit(p) << std::endl;
}
