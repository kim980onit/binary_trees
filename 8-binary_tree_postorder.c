#include "binary_trees.h"
/**
 * binary_tree_postorder - vist every node and do function
 * @tree: binary_tree_t
 * @func: pointer to func
 * Return: None
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;
	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
