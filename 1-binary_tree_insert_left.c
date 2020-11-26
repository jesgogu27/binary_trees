#include "binary_trees.h"

/**
 * binary_tree_insert_left - function that inserts a node as the left
 * @parent: is a pointer to the parent node of the node to create
 * @value: is the value to put in the new node
 * Return: a pointer to the new node, or NULL on failure
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (!parent)
	{
		return (NULL);
	}

	new_node = malloc(sizeof(binary_tree_t));

	if (!new_node)
	{
		/* Return null if Parent */
		return (NULL);
	}
	else
	{
		new_node->parent = parent;
		new_node->n = value;
		new_node->left = parent->left;
		new_node->right = NULL;

		if (parent->left)
		{
			parent->left->parent = new_node;
		}

		parent->left = new_node;

		return (new_node);
	}
}
