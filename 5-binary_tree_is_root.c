#include "binary_trees.h"
/**
*binary_tree_is_root - function that checks a node is a root
*@node: tree schema
*Return: int
**/
int binary_tree_is_root(const binary_tree_t *node)
{
    if (!node)
        return (0);
    if (node->left != NULL && node->right != NULL)
        return (1);
    else
        return (0);
}