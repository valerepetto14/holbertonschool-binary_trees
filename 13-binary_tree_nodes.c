#include "binary_trees.h"
/**
*binary_tree_nodes -  function that measures the leaves of a binary tree
*@tree: tree schema
**/
size_t binary_tree_nodes(const binary_tree_t *tree)
{
    if (!tree)
        return 0;
    else if (!tree->left && tree->right)
        return (1 + binary_tree_nodes(tree->right));
    else if (tree->left && !tree->right)
        return (1 + binary_tree_nodes(tree->left));
    else
        return binary_tree_nodes(tree->right) + binary_tree_nodes(tree->left);

}