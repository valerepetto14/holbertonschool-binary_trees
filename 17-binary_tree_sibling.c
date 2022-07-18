#include "binary_trees.h"

/**
 * binary_tree_sibling - function
 * @node: pointer
 * Return: return
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);
	if (node->parent->left && node->parent->right)
	{
		if (node->parent->left->n == node->n)
			return (node->parent->right);
		else
			return (node->parent->left);
	}
	return (NULL);
}
