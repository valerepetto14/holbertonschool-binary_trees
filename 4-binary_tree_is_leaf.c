#include "binary_trees.h"
/**
*binary_tree_is_leaf - function that checks a node is a leaf
*@node: tree schema
*Return: int
**/
int binary_tree_is_leaf(const binary_tree_t *node)
{
    if (!node)
        return (0);
    if (node->left != NULL && node->right != NULL)
        return (0);
    else
        return (1);
}