/**
 * @author Hari Krishnan
 * @email hariknair77@gmal.com
 * @create date 2020-04-25 11:44:22
 * @modify date 2020-04-25 11:44:22
 * @desc [stack with getmin() O(1) time]
 */

#include <iostream>
#include <stack>

std::stack<int> s;
int min;

void push(int x) {
    if (s.empty()) {
        s.push(x);
        min = x;
        return;
    }
    if (x < min) {
        s.push(2 * x - min);
        min = x;
    } else
        s.push(x);
}

int pop() {
    if (!s.empty()) {
        int x = s.top();
        s.pop();
        if (x < min)
            min = 2 * min - x;
    }
}

int top() {
    if (!s.empty()) return std::max(min, s.top());
}

int getMin() {
    if (!s.empty()) return min;
}


/*******************************************************
           O(n) space
*******************************************************/

class MinStack {
   public:
    void push(int x) {
        if (s1.empty() || x < getMin()) s2.push(x);
        s1.push(x);

    }
    void pop() {
        if (!s1.empty()) {
            if (s1.top() == getMin()) s2.pop();
            s1.pop();
        }
    }
    int top() {
        if (!s1.empty()) return s1.top();
    }
    int getMin() {
        if (!s1.empty()) return s2.top();
    }

   private:
    std::stack<int> s1;
    std::stack<int> s2;
};

/****************************************************/


int main() {
    // push(3);
    // push(5);
    // std::cout << getMin() << std::endl;
    // push(2);
    // push(1);
    // std::cout << getMin() << std::endl;
    // pop();
    // std::cout << getMin() << std::endl;
    // pop();
    // std::cout << top() << std::endl;

    MinStack s;
    s.push(3);
    s.push(5);
    std::cout << s.getMin() << std::endl;
    s.push(2);
    s.push(1);
    std::cout << s.getMin() << std::endl;
    s.pop();
    std::cout << s.getMin() << std::endl;
    s.pop();
    std::cout << s.top() << std::endl;
}

