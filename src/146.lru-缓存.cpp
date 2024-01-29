/*
 * @lc app=leetcode.cn id=146 lang=cpp
 *
 * [146] LRU 缓存
 */

// @lc code=start
#include <unordered_map>
using namespace std;
struct MyNode {
  MyNode *prev;
  MyNode *next;
  int key;
  int val;
  MyNode(int key, int value)
      : key(key), val(value), prev(nullptr), next(nullptr) {}
};
class LRUCache {
private:
  unordered_map<int, MyNode *> _map = {};
  // 尾部是最长未使用，头部是最近使用
  MyNode *head, *tail;
  int _capacity;

public:
  LRUCache(int capacity)
      : head(new MyNode(0, 0)), tail(new MyNode(0, 0)), _capacity(capacity) {
    head->next = tail;
    tail->prev = head;
  }

  int get(int key) {
    if (!_map.count(key)) {
      return -1;
    }
    MyNode *target = _map[key];
    moveToHead(target);
    return target->val;
  }

  void put(int key, int value) {
    if (_map.count(key)) {
      _map[key]->val = value;
      moveToHead(_map[key]);
    } else {
      MyNode *node = new MyNode(key, value);
      _map[key] = node;
      addToHead(node);
      if (_map.size() > _capacity) {
        auto removed = removeTail();
        _map.erase(removed->key);
        delete removed;
      }
    }
  }

  void addToHead(MyNode *node) {
    node->prev = head;
    node->next = head->next;
    head->next->prev = node;
    head->next = node;
  }
  void removeNode(MyNode *node) {
    node->prev->next = node->next;
    node->next->prev = node->prev;
  }
  void moveToHead(MyNode *node) {
    removeNode(node);
    addToHead(node);
  }
  MyNode *removeTail() {
    auto removed_node = tail->prev;
    removeNode(removed_node);
    return removed_node;
  }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */
// @lc code=end
