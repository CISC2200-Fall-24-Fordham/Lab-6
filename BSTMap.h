#ifndef __BSTMAP_H__
#define __BSTMAP_H__

#include <ostream>
#include <sstream>
#include <string>
using namespace std;


class BSTMapNode {
public:
  string key;
  int value;
  BSTMapNode *left;
  BSTMapNode *right;

  BSTMapNode(const string &k, const int &v, BSTMapNode *l = nullptr,
             BSTMapNode *r = nullptr) {
    key = k;
    value = v;
    left = l;
    right = r;
  }
};


class BSTMap {
  friend class BSTPrinter;

private:
  BSTMapNode *root; // Root of the BST

  BSTMapNode *putHelp(BSTMapNode *root, const string &ik, const int &val) {
    if (root == nullptr)
      return new BSTMapNode (ik, val);
    if (ik < root->key)
      root->left = putHelp(root->left, ik, val);
    else if (ik > root->key)
      root->right = putHelp(root->right, ik, val);
    return root;
  }

  bool findHelp(const BSTMapNode *root, const string &sk) const {
    if (root == nullptr)
      return false;
    if (sk < root->key)
      return findHelp(root->left, sk);
    if (sk > root->key)
      return findHelp(root->right, sk);
    else
      return true;
  }

public:
  BSTMap() { root = nullptr; }
  ~BSTMap() { clear(root); }

  /** Delete all nodes. */
  void clear(BSTMapNode *root) {
    if (root == nullptr)
      return;
    clear(root->left);
    clear(root->right);
    delete root;
  }

  /**
   * Insert the key-value pair `ik` and `val` to the BSTMap.
   *
   * @param ik The key to insert
   * @param val The value corresponding to the key
   */
  void put(const string &ik, const int &val) {
    root = putHelp(root, ik, val);
  }

  /**
   * Search for given key in the BSTMap.
   *
   * @param sk The search key
   * @return true if `sk` is in the BSTMap
   */
  bool find(const string &sk) const { return findHelp(root, sk); }

  int get(const string &sk) const;
  void remove(const string &rk);
};

/**
 * Return the value of the given search key `sk` in the BSTMap.
 */
int BSTMap::get(const string &sk) const {
  // TODO: You may assume that `sk` is in the BSTMap.
   int v;
   return v;
}

/**
 * Remove `rk` and its corresponding value from the BST.
 */
void BSTMap::remove(const string &rk) {
  // TODO: You may assume that `rk` is in the BSTMap.
}



#endif // __BSTMAP_H__
