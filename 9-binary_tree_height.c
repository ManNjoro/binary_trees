#include "binary_trees.h"

/**
 * binary_tree_height - Measures the height of a binary tree
 *
 * @tree: Pointer to the root node of the tree to measure the height
 *
 * Return: Height of the binary tree, or 0 if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
		return (0);

	size_t left_height = binary_tree_height(tree->left) + 1;
	size_t right_height = binary_tree_height(tree->right) + 1;

	if (right_height > left_height)
		return (right_height);
	return (left_height);

}
