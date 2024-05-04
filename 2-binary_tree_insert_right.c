#include "binary_trees.h"

/**
 * binary_tree_insert_right - insert node at right of parent
 * @parent: binary_tree_t node (if NULL return NULL)
 * @value: int (newNode->n)
 * Return: pointer of new node
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (!parent)
		return (NULL);

	new = malloc(sizeof(binary_tree_t));
	if (!new)
		return (NULL);

	new->n = value;
	new->parent = parent;
	new->left = NULL;
	new->right = NULL;

	if (parent->right)
	{
		new->right = parent->right;
		parent->right->parent = new;
		parent->right = new;
		return (new);
	}
	parent->right = new;
	return (new);
}

