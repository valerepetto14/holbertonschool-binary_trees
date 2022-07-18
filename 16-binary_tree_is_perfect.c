#include "binary_trees.h"
/**
*binary_tree_size -  function that measures the size of a binary tree
*@tree: tree schema
*Return: return
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
/**
*binary_tree_is_perfect -  function that measures the leaves of a binary tree
*@tree: tree schema
*Return: int
**/
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (binary_tree_size(tree->left) == binary_tree_size(tree->right))
		return (1);
	else
		return (0);
}
