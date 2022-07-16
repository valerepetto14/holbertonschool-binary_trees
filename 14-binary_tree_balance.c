#include "binary_trees.h"
/**
*binary_tree_height -  function that measures the height of a binary tree
*@tree: tree schema
**/
size_t binary_tree_height(const binary_tree_t *tree)
{
    size_t a = 0;
    size_t b = 0;
    if (!tree)
        return (0);
    a = (binary_tree_height(tree->left));
    b = (binary_tree_height(tree->right));
    if (a > b)
        return (a + 1);
    else
        return (b + 1);
}
/**
*binary_tree_balance -  function that measures the leaves of a binary tree
*@tree: tree schema
**/
int binary_tree_balance(const binary_tree_t *tree){
    int a = 0;
    int b = 0;
    if (!tree)
        return (0);
    if(!tree->left && !tree->right)
        return (0);
    a = (1 + binary_tree_height(tree->left));
    b = (1 + binary_tree_height(tree->right));
    return(a - b);
}