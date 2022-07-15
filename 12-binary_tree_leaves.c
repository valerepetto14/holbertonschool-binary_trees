#include "binary_trees.h"
/**
*binary_tree_leaves -  function that measures the leaves of a binary tree
*@tree: tree schema
**/
size_t binary_tree_leaves(const binary_tree_t *tree){
    int a = 0;
    int b = 0;
    if (!tree)
        return (0);
    if (!tree->left && !tree->right)
        return (1);
    a = (binary_tree_leaves(tree->left));
    b = (binary_tree_leaves(tree->right));
    return (a + b);
}