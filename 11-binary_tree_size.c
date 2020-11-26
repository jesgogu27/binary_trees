#include "binary_trees.h"
/**
 * binary_tree_size - gets size of binary tree
 *
 * @tree: pointer to root
 * Return: 0 if tree is null, or size
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t lv, rv, rtv;

	if (tree == NULL)
		return (0);
	lv = binary_tree_size(tree->left);
	rv = binary_tree_size(tree->right);
	rtv = lv + rv + 1;
	return (rtv);
}
