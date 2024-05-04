#include "binary_trees.h"
/**
 * binary_tree_insert_left - insert only left to the parent
 * @parent: binary_tree_t node (if NULL return NULL)
 * @value: int (to be inserted in binary_tree_t node->n)
 * Return: binary_tree_t pointer
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (!parent)
		return (NULL);

	new = malloc(sizeof(binary_tree_t));
	if (!new)
		return (NULL);

	new->n = value;
	new->parent = parent;
	new->right = NULL;
	new->left = NULL;

	if (parent->left)
	{
		new->left = parent->left;
		parent->left->parent = new;
		parent->left = new;
		return (new);
	}

	parent->left = new;
	return (new);
}
