#include "binary_trees.h"
#include <stddef.h>
/**
 * binary_tree_node - create a new tree
 * @parent: parent node
 * @value: value
 * Return: pointer to new node
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	if (parent != NULL)
	{
		parent->left = NULL;
		parent->right = NULL;
		parent->value = value;
	}
	return parent;
}
