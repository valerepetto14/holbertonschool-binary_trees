#include "binary_trees.h"
/**
*binary_tree_depth -  function that measures the depth of a binary tree
*@tree: tree schema
**/
size_t binary_tree_depth(const binary_tree_t *tree)
{
    if (!tree)
        return (0);
    if (!tree->parent)
        return (0);
    return (1 +  binary_tree_depth(tree->parent));
}
/**
*binary_tree_is_perfect -  function that measures the leaves of a binary tree
*@tree: tree schema
**/
int binary_tree_is_perfect(const binary_tree_t *tree)
{
    int d = binary_tree_depth(tree);
    return is_perfect(tree, d, 0);
}