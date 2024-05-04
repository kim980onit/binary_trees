#include "binary_trees.h"

/**
 * binary_tree_delete - delete binary tree (recursivly)
 * @tree: binary_tree_t
 * Return: None
 */

void binary_tree_delete(binary_tree_t *tree)
{
	if (!tree)
		return;
	binary_tree_delete(tree->right);
	binary_tree_delete(tree->left);

	free(tree);
}
