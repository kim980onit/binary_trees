#include "binary_trees.h"
/**
 * binary_tree_height - calculate height of binary tree
 * this function is not as same as in task (9)
 * cause its not stop when it meat a leaf
 * @tree: binary_tree_t node
 * Return: size_t (height)
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left, right;

	if (!tree)
		return (0);
	left = binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);
	return ((left > right ? left : right) + 1);
}
/**
 * binary_tree_balance - check if the node has tow child
 * @tree: binary_tree_t node
 * Return: int
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	size_t left, right;

	if (!tree)
		return (0);
	left = binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);

	return (left - right);
}
