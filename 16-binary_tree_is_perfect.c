#include "binary_trees.h"
/**
 * binary_tree_size - check number of nodes of binary_tree
 * @tree: binary_tree_t node
 * Return: size_t
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t left, right;

	if (!tree)
		return (0);
	right = binary_tree_size(tree->right);
	left = binary_tree_size(tree->left);

	return (1 + left + right);
}

/**
 * binary_tree_is_perfect - check if balance factor is 0
 * @tree: binary_tree_t node
 * Return: 1 if perfect 0 if not
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t left, right;

	if (!tree)
		return (0);
	left = binary_tree_size(tree->left);
	right = binary_tree_size(tree->right);

	if (left == right)
		return (1);
	return (0);
}
