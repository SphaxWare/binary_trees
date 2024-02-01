#include "binary_trees.h"
/**
 * binary_tree_sibling - sibling
 * @node: a node
 * Return: ptr
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);
	if (node->parent->right == node)
		return (node->parent->left);
	return (node->parent->right);
}
