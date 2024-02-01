#include "binary_trees.h"
/**
 * binary_tree_balance - balance factor of a binary tree
 * @tree: tree
 * Return: number
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (binary_tree_height(tree->left) - binary_tree_height(tree->right));
}
/**
 * binary_tree_height - height of a binary tree
 * @tree: the tree
 * Return: 0 or height
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left = 0, right = 0;


	if (!tree)
		return (0);
	left = tree->left ? 1 + binary_tree_height(tree->left) : 1;
	right = tree->right ? 1 + binary_tree_height(tree->right) : 1;
	return (left > right ? left : right);
}
