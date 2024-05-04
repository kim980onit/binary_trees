#include "binary_trees.h"
/**
 * binary_tree_is_root - is node root or not
 * @node: binary_tree_t node
 * Return: (1) if root (0) if not
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node && !node->parent)
		return (1);
	return (0);
}
