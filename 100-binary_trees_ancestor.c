#include "binary_trees.h"
/**
 * binary_trees_ancestor - return lowest commun ancestor
 * @first: binary_tree_t Node
 * @second: binary_tree_t Node
 * Return: pointer of binary_tree_t
 */

binary_tree_t *binary_trees_ancestor(binary_tree_t *first,
		binary_tree_t *second)
{
	binary_tree_t *ptr1, *ptr2;

	ptr1 = first;
	ptr2 = second;
	while (ptr1)
	{
		while (ptr2)
		{
			if (ptr1 == ptr2)
				return (ptr1);
			ptr2 = ptr2->parent;
		}
		ptr1 = ptr1->parent;
		ptr2 = second;
	}
	return (NULL);
}
