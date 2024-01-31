#include "binary_trees.h"
/**
 * binary_tree_size - size of a binary tree
 * @tree: the tree
 * Return: 0 or size
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t left = 0, right = 0, size = 0;


	if (!tree)
		return (0);
	left = binary_tree_size(tree->left);
	right = binary_tree_size(tree->right);
	size = right + left + 1;
	return (size);
}
