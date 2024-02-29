#include "binary_trees.h"

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leftleaf, rightleaf, total;
	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	leftleaf = binary_tree_leaves(tree->left);
	rightleaf = binary_tree_leaves(tree->right);
	total = leftleaf + rightleaf;
	return (total);
}
