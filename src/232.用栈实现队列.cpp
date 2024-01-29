/*
 * @lc app=leetcode.cn id=232 lang=cpp
 *
 * [232] 用栈实现队列
 */

// @lc code=start

#include <stack>
#ifdef LEETCODELOCAL
using namespace std;
#endif

class MyQueue {
private:
  stack<int> input_stack, output_stack;
  void in_to_out() {
    while (!input_stack.empty()) {
      output_stack.push(input_stack.top());
      input_stack.pop();
    }
  } // 把input_stack中元素逆序存在output_stack并且清空input_stack
public:
  MyQueue() {}

  void push(int x) { input_stack.push(x); }

  int pop() {
    if (output_stack.empty()) {
      in_to_out();
    }
    int x = output_stack.top();
    output_stack.pop();
    return x;
  }

  int peek() {
    if (output_stack.empty()) {
      in_to_out();
    }
    return output_stack.top();
  }

  bool empty() {
    if (input_stack.empty() && output_stack.empty()) {
      return true;
    } else {
      return false;
    }
  }
};

/**
 * Your MyQueue object will be input_stackantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */
// @lc code=end
