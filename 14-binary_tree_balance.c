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
		return (0);

	Lside = binary_tree_height(tree->left);
	Rside = binary_tree_height(tree->right);
	if (Rside >= Lside)
		return (Rside + 1);
	else
		return (Lside + 1);
}

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: root node of the tree to measure the height.
 * Return: nothing
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int Lchild, Rchild, diff;

	if (tree == NULL)
		return (0);

	Lchild = binary_tree_height(tree->left);
	Rchild = binary_tree_height(tree->right);

	/* Find the difference btw the left & right subtree */
	return (diff = Lchild - Rchild);
}
