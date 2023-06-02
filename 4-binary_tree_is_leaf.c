#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_is_leaf - check if a leaf
 *
 * @node: pointer to the node to check
 *
 * Return: either 1 or 0 or NULL
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL || node->left != NULL || node->right != NULL)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
