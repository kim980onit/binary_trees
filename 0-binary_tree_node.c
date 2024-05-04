#include "binary_trees.h"
/**
 * binary_tree_node - function to build binary tree
 * @parent: binary_tree_t node
 * @value: binary_tree_t node ->n
 * Return: binary_tree_t pointer
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	new = malloc(sizeof(binary_tree_t));
	if (!new)
		return (NULL);

	new->n = value;
	new->left = NULL;
	new->right = NULL;
	if (!parent)
	{
		parent = new;
		parent->parent = NULL;
		return (new);
	}
	new->parent = parent;
	return (new);
}
