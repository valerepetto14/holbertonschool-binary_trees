#include "binary_trees.h"
/**
*binary_tree_is_full -  function that measures the leaves of a binary tree
*@tree: tree schema
*Return: return
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
