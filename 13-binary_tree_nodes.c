#include "binary_trees.h"
/**
*binary_tree_nodes -  function that measures the leaves of a binary tree
*@tree: tree schema
*Return: return
**/
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t cont = 0;

	if (!tree)
		return (0);
	if (tree->left || tree->right)
		return (binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right))
		+ 1;
	return (cont);
}