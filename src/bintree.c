/******************************************************************************/
/*                                                                            */
/*               Binary Tree implementation Source file                       */
/*                                                                            */
/******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include "bintree.h"

#define TRUE 1
#define FALSE 0

struct node *new_node(int data)
{
    struct node *node = (struct node *)malloc(sizeof(struct node));
    
    node->data = data;
    node->left = NULL;
    node->right = NULL;
    
    return node;
};

void insert_node(struct node **root, int data)
{
    if (*root == NULL)
    {
        *root = new_node(data);
    }
    else if (data < (*root)->data)
    {
        insert_node(&(*root)->left, data);
    }
    else
    {
        insert_node(&(*root)->right, data);
    }
};

int search_node(struct node *root, int data)
{
    if (root == NULL)
    {
        return FALSE;
    }
    else if (data == root->data)
    {
        return TRUE;
    }
    else if (data < root->data)
    {
        return search_node(root->left, data);
    }
    else
    {
        return search_node(root->right, data);
    }
};

void print_tree(struct node *root)
{
    if (root == NULL)
    {
        return;
    }
    else
    {
        print_tree(root->left);
        printf("%d ", root->data);
        print_tree(root->right);
    }
};