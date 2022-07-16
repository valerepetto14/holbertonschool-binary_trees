#include "binary_trees.h"
/**
*binary_tree_balance -  function that measures the leaves of a binary tree
*@tree: tree schema
**/
int binary_tree_is_full(const binary_tree_t *tree)
{
    if (tree == NULL)
      return (1);

    if (!tree->left && !tree->right)
        return (1);

    else if (tree->left && tree->right)
        return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));
    return (0);
}