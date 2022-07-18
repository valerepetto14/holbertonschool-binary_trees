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