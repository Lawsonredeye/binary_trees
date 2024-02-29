#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth
 * of a node in a binary tree
 * @tree: root node of the tree to measure the height.
 * Return: nothing
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	int ldepth, rdepth;

	if (tree == NULL)
		return (0);


	ldepth = binary_tree_depth(tree->left);
	rdepth = binary_tree_depth(tree->right);
	if (ldepth > rdepth)
		return (ldepth + 1);
	else
		return (rdepth + 1);

}

/**
 * binary_tree_is_perfect - checks for a perfect tree
 * @tree: pointer to the root node of the tree to check
 * Return: recursive func
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int ltree, rtree, ldepth, rdepth;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	else if (tree->left == NULL || tree->right == NULL)
		return (0);
	ltree = binary_tree_depth(tree->left);
	rtree =  binary_tree_depth(tree->right);
	if (ltree != rtree)
		return (0);
	ldepth = binary_tree_is_perfect(tree->left);
	rdepth = binary_tree_is_perfect(tree->right);
	return (ldepth && rdepth);
}
