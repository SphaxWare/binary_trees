#include "binary_trees.h"

/**
 * binary_tree_insert_right - insert node in right
 * @parent: parent node
 * @value: int
 * Return: pointer
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *right;


	if (!parent)
		return (NULL);
	right = binary_tree_node(parent, value);
	if (!right)
		return (NULL);
	if (parent->right)
	{
		right->right = parent->right;
		parent->right->parent = right;
	}
	parent->right = right;
	return (right);
}
