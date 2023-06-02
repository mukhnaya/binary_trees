#include "binary_trees.h"
#include<stdlib.h>
/**binary_tree_inorder - root, left and right
 *
 * @tree:  pointer to the root node of the tree to traverse
 * @func: pointer to a function to call for each node
 *
 * Return: nothing
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree)
	{
		if (func)
		{
			binary_tree_inorder(tree->left, func);
			func(tree->n);
			binary_tree_inorder(tree->right, func);
		}
	}
}
