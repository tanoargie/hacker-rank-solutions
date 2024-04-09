#include <cstddef>
#include <iostream>

using namespace std;

class Node {
public:
  int data;
  Node *left;
  Node *right;
  Node(int d) {
    data = d;
    left = NULL;
    right = NULL;
  }
};

class Solution {
public:
  Node *insert(Node *root, int data) {
    if (root == NULL) {
      return new Node(data);
    } else {
      Node *cur;
      if (data <= root->data) {
        cur = insert(root->left, data);
        root->left = cur;
      } else {
        cur = insert(root->right, data);
        root->right = cur;
      }

      return root;
    }
  }

  void postOrder(Node *root) {
    if (root == NULL) {
      return;
    }
    postOrder(root->left);
    postOrder(root->right);
    cout << root->data << endl;
  }

}; // End of Solution
