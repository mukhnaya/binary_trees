#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_insert_left - insert left side
 * @parent: is a pointer to the node to insert the left-child in
 * @value: is the value to store in the new node
 *
 * Return: parent node
 *
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	parent = malloc(sizeof(binary_tree_t));
	if (parent == NULL)
		return (NULL);
	parent->left = value;
	return (parent->left);
}
