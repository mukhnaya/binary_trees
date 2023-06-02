#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_insert_right - adds node to the right
 *
 * @parent: is a pointer to the node to insert the right-child in
 * @value: is the value to store in the new node
 *
 * Return: new node added to the right
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *head;

	if (parent == NULL)
		return (NULL);

	head = binary_tree_node(parent, value);
	if (head == NULL)
		return (NULL);

	if (parent->right != NULL)
	{
		head->right = parent->right;
		parent->right->parent = head;
	}
	parent->right = head;

	return (head);
}
