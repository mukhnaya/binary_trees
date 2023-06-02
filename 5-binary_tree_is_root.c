#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_is_root - check if root
 *
 * @node: to check
 *
 * Return: 1 if node, 0 if not node and null
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL || node->parent != NULL)
	{
		return (0);
	}
	return (1);
}
