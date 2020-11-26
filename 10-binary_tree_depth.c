#include "binary_trees.h"
/**
 * binary_tree_depth - measures the depth of a node
 *
 * @tree: pointer to node to measure depth of
 * Return: depth or 0 if tree is NULL
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t retval;

	if (tree == NULL)
		return (0);
	retval = 0;
	while (tree->parent != NULL)
	{
		retval = retval + 1;
		tree = tree->parent;
	}
	return (retval);
}
