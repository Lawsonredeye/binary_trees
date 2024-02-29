#include "binary_trees.h"

/**
 * binary_tree_height - function that measures
 * the height of a binary tree
 * @tree: root node of the tree to measure the height.
 * Return: nothing
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t Lside, Rside;

	if (tree == NULL)
		return (-1);

	if (tree->left)
		Lside = binary_tree_height(tree->left);
	if (tree->right)
		Rside = binary_tree_height(tree->right);
	if (Rside >= Lside)
		return (Lside + 1);
	else
		return (Rside + 1);
}
