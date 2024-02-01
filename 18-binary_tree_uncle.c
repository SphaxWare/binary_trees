#include "binary_trees.h"
/**
 * binary_tree_uncle - uncle of a node
 * @node: node
 * Return: ptr
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node || !node->parent || !node->parent->parent)
		return (NULL);
	if (node->parent == node->parent->parent->left)
		return (node->parent->parent->right);
	else if (node->parent == node->parent->parent->right)
		return (node->parent->parent->left);
	else
		return (NULL);
}
