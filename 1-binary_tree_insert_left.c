#include "binary_trees.h"

/**
 * binary_tree_insert_left - insert node in left
 * @parent: parent node
 * @value: int
 * Return: pointer
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *left;


	if (!parent)
		return (NULL);
	left = binary_tree_node(parent, value);
	if (!left)
		return (NULL);
	if (parent->left)
	{
		left->left = parent->left;
		parent->left->parent = left;
	}
	parent->left = left;
	return (left);
}
