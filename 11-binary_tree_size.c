#include "binary_trees.h"
/**
*binary_tree_size -  function that measures the size of a binary tree
*@tree: tree schema
**/
size_t binary_tree_size(const binary_tree_t *tree)
{
    int a = 0;
    int b = 0;
    if (!tree)
        return (0);
    a = (binary_tree_size(tree->left));
    b = (binary_tree_size(tree->right));
    return (a + b + 1);
}