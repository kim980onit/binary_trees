#include "binary_trees.h"
/**
 * binary_tree_depth - function return the depth of Node
 * nodes from root to node
 * @tree: bniary_tree_t node
 * Return: size_t
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth;

	depth = 0;
	while (tree && tree->parent)
	{
		tree = tree->parent;
		depth++;
	}
	return (depth);
}
