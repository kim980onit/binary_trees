#include "binary_trees.h"
/**
 * binary_tree_leaves - count how many leaves
 * @tree: binary_tree_t Node
 * Return: size_t
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
		return (1);
	return (0 + binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
}
