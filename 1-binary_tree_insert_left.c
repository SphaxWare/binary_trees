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


	left = malloc(sizeof(binary_tree_t));
	if (left == NULL || parent == NULL)
		return (NULL);
	left->n = value;
	left->left = NULL;
	left->right = NULL;
	if (parent->left)
	{
		left->left = parent->left;
		parent->left->parent = left;
	}
	else
		parent->left = left;
	return (left);
}
