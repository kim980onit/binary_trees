#include "binary_trees.h"
/**
 * binary_tree_uncle - function found uncle of node
 * @node: binary_tree_t node
 * Return: pointer of binary_tree_t
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *ptr1, *ptr2;

	if (!node || !node->parent || !node->parent->parent)
		return (NULL);

	ptr1 = node->parent->parent->left;
	ptr2 = node->parent->parent->right;

	if (node->parent == ptr1)
		return (ptr2);
	return (ptr1);
}
