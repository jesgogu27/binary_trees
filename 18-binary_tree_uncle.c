 #include "binary_trees.h"
/**
 * binary_tree_uncle - finds uncle of binary tree
 *
 * @node: pointer to node to find uncle of
 * Return: uncle of node
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL)
		return (NULL);
	if (node->parent == NULL || node->parent->parent == NULL)
		return (NULL);
	if (node->parent->parent->right == node->parent)
		return (node->parent->parent->left);
	return (node->parent->parent->right);
}
