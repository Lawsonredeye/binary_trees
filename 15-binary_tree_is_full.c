#include "binary_trees.h"

/**
 * binary_tree_is_full - checks if a binary tree is full
 * @tree:  root node of the tree to check
 * Return: the recursive value of left and right node
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);

	return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));
}
