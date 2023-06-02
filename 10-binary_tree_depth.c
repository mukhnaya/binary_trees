#include "binary_trees.h"
/**
 * binary_tree_depth - tree depth
 *
 * @tree: pointer to the node to measure the depth
 *
 * Return: 1 or 0
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (tree->parent)
		return (binary_tree_depth(tree->parent) + 1);
	return (0);
}
