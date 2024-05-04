#include "binary_trees.h"
/**
 * binary_tree_preorder - function to use a function on tree
 * @tree: binary_tree_t
 * @func: pointer to funtion
 * Return: None
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;
	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
