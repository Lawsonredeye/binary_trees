#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth
 * of a node in a binary tree
 * @tree: root node of the tree to measure the height.
 * Return: nothing
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (-1);
	return (1 + binary_tree_depth(tree->parent));
}
