#include<stdio.h>
#include<stdlib.h>
#include "binary_trees.h"
/**
 * binary_tree_node - function to create binary tree
 *
 * @parent: is a pointer to the parent node of the node to create
 * @value: is the value to put in the new node
 *
 * Return: node
 *
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	parent = malloc(sizeof(binary_tree_t));
	if (parent == NULL)
		return NULL;
	parent->n = value;
	parent->left = NULL;
	parent->right = NULL;
	return (parent);
}
