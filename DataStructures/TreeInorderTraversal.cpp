#include <iostream>

using namespace std;

class Node {
public:
  Node *left, *right;
  int data;

  Node(int val) : data(val), left(NULL), right(NULL) {}
};

class Tree {
public:
  Node *insert(Node *root, int data) {
    if (root == nullptr) {
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
  void inOrder(Node *root) {
    if (root == nullptr) {
      return;
    }
    inOrder(root->left);
    cout << root->data << " ";
    inOrder(root->right);
  }
};

int main() {
  Tree tree;
  int numberOfNodes;
  Node *root;
  cin >> numberOfNodes;
  int val;
  for (int i = 0; i < numberOfNodes; i++) {
    cin >> val;
    if (i == 0) {
      root = tree.insert(NULL, val);
    } else {
      tree.insert(root, val);
    }
  }

  tree.inOrder(root);
  cout << endl;

  return 0;
}
