#include "binary_trees.h"
/**
 * binary_tree_size - measures the size of a binary tree
 *
 * @tree: pointer to the root node of the tree to measure the size
 *
 * Return: size
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t x = 0;

	if (tree)
	{
		x += 1;
		x += binary_tree_size(tree->left);
		x += binary_tree_size(tree->right);
	}
	return (x);
}
