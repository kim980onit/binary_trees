#include "binary_trees.h"
/**
 * check_full - Recursive function to check if tree is full or not
 * @tree: binary_tree_t node
 * Return: 0 or (-1) if node is not full
 */
int check_full(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if ((!tree->left && tree->right) || (tree->left && !tree->right))
		return (-1);
	return (0 + check_full(tree->left) + check_full(tree->right));
}
/**
 * binary_tree_is_full - check if the tree full
 * @tree: binary_tree_t Node
 * Return: (1) if it's full (0) if not
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	int check;

	if (!tree)
		return (0);

	check = check_full(tree);

	if (check == -1)
		return (0);
	return (1);
}
