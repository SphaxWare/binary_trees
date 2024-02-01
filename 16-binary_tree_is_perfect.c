#include "binary_trees.h"
int is_perfect_util(const binary_tree_t *tree, size_t level, size_t height);
/**
 * binary_tree_is_perfect - is perfect
 * @tree: tree
 * Return: int
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (binary_tree_balance(tree) == 0 &&
		is_perfect_util(tree, 0, binary_tree_height(tree)))
		return (1);
	return (0);
}


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
/**
 * is_perfect_util - Utility function to check if a binary tree is perfect.
 * @tree: A pointer to the root node of the tree to check.
 * @level: The level of the current node.
 * @height: The height of the binary tree.
 *
 * Return: 1 if the tree is perfect, 0 otherwise.
 */
int is_perfect_util(const binary_tree_t *tree, size_t level, size_t height)
{
	if (!tree)
		return (1);

	if (!tree->left && !tree->right)
		return (level == height - 1);

	if (!tree->left || !tree->right)
		return (0);

	return (is_perfect_util(tree->left, level + 1, height) &&
		is_perfect_util(tree->right, level + 1, height));
}
