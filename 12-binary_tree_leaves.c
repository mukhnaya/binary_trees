#include "binary_trees.h"
/**
 * binary_tree_leaves - counts the leaves in a binary tree
 *
 * @tree: pointer to the root node of the tree to count the number of leaves
 *
 * Return: 0 if tree is null, Null pointer if not a leaf
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t count_of_leaves = 0;

	if (tree)
	{
		count_of_leaves += (!tree->left && !tree->right) ? 1 : 0;
		count_of_leaves += binary_tree_leaves(tree->left);
		count_of_leaves += binary_tree_leaves(tree->right);
	}
	return (count_of_leaves);
}
