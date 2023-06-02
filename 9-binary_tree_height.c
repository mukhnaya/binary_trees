#include "binary_trees.h"
#include<stdlib.h>
#include <stddef.h>
#include <string.h>
#include <stdio.h>
/**
 * binary_tree_height - measures the height of a binary tree
 *
 * @tree: pointer to the root node of the tree to measure the height
 *
 * Return: height
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		unsigned int mos;
		unsigned int pau;

		mos = tree->left ? 1 + binary_tree_height(tree->left) : 0;
		pau = tree->right ? 1 + binary_tree_height(tree->right) : 0;

		return ((mos > pau) ? mos : pau);
	}
}
