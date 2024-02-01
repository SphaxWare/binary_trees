#include "binary_trees.h"
/**
 * binary_tree_leaves - counts the leaves in a tree
 * @tree: a tree
 * Return: 0 or leafs
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leafs, R, L;


	if (!tree)
		return (0);
	L = binary_tree_leaves(tree->left);
	R = binary_tree_leaves(tree->right);
	leafs = L + R;
	return ((!R && !L) ? leafs + 1 : leafs + 0);
}
