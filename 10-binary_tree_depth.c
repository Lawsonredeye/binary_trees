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
