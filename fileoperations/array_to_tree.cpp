#include <iostream>
#include "stdio.h"
#include <vector>


struct BinTree {
  int data;
  BinTree *left;
  BinTree *right;

  BinTree(int data) {
    this->data = data;
    this->left = NULL;
    this->right = NULL;
  }
};

BinTree *createBNode(int data) {
  return new BinTree(data);
}

BinTree *arr_to_tree(int *arr, int size) {
  BinTree *newTree, *root;

  std::vector<BinTree *> node_list;
  int i=0;
  root = createBNode(arr[0]);

  node_list.push_back(root);

  while (!node_list.empty()) {
    newTree = node_list.front();
    node_list.erase(node_list.begin());
    if(2 * i + 1 >= size) {
      break;
    }
    newTree->left = createBNode(arr[2*i+1]);
    node_list.push_back(newTree->left);

    if (2 * i + 2 >= size) {
      break;
    }
    newTree ->right = createBNode(arr[2*i +2]);
    node_list.push_back(newTree->right);
    i++;
  }
  return root;
}
void inOrder(BinTree *root) {
  if (root != NULL) {

    //std::cout << n->balance << " ";
    std::cout << root->data << " ";
    inOrder(root->left);
    inOrder(root->right);
  }
}

int main()
{
  BinTree *tree;
  int arr[] = {2,3,4,6,8,10,12,13};

  tree = arr_to_tree(arr,8);

  inOrder(tree);

  return 0;
}
