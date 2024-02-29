#include "binary_trees.h"

/**
 * binary_tree_nodes - count the number of nodes that has a child
 * @tree: pointer to the root pointer
 * Return: sum of left and right node + 1
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t Lnode, Rnode, sum;
	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (0);
	Lnode = binary_tree_nodes(tree->left);
	Rnode = binary_tree_nodes(tree->right);
	sum = Rnode + Lnode + 1;
	return (sum);
}
