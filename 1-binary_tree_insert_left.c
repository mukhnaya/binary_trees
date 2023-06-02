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
	binary_tree_t *head;

	if (parent == NULL)
		return (NULL);
	head = binary_tree_node(parent, value);
	if (head == NULL)
		return (NULL);
	if (parent->left != NULL)
	{
		head->left = parent->left;
		parent->left->parent = head;
	}
	parent->left = head;
	return (head);
}
