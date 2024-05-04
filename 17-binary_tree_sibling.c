#include "binary_trees.h"
/**
 * binary_tree_sibling - discover if node has sibling
 * this function check the other branch if its left so
 * it return right and viseversa
 * @node: binary_tree_t node
 * Return: pointer of binary_tree_t
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *ptr1, *ptr2;

	if (!node || !node->parent)
		return (NULL);

	ptr1 = node->parent->left;
	ptr2 = node->parent->right;

	if (node == ptr1)
		return (ptr2);
	return (ptr1);
}
