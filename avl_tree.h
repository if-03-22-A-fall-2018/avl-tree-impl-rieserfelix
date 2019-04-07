#ifndef BALANCEDTREE_AVL_TREE_H
#define BALANCEDTREE_AVL_TREE_H

#include "node.h"

Node rotate_left(Node node);
 Node rotate_right(Node node);
Node insert(Node node, int key);
int get_balance(Node node);
Node unbalanced_insert(Node root, int key);
int max(int n1, int n2);

#endif
