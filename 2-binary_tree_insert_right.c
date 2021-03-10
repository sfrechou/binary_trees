#include "binary_trees.h"

/**
 * binary_tree_insert_right - Entry point
 * @parent: pointer of node to parent
 * @value: value to insert into node
 *
 *
 * Return: void
*/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (parent == NULL)
		return (NULL);

	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = value;
	new_node->parent = parent;
	new_node->right = NULL;
	if (parent->right != NULL)
	{
		new_node->right = parent->right;
		new_node->right->parent = new_node;
	}
	parent->right = new_node;
	new_node->left = NULL;

	return (new_node);
}
