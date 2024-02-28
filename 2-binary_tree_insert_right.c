#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_right - function that only adds new child nodes to
 * the right of the parent
 * @parent: pointer parent of the right child
 * @value: value of the node to be created
 * Return: new node with the value and right child
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (parent == NULL)
		return (NULL);

	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = value;
	if (parent->right != NULL)
	{
		new_node->right = parent->right;
		parent->right = new_node;
	}
	else
	{
		parent->right = new_node;
	}
	return (new_node);
}
