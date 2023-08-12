/******************************************************************************/
/*                                                                            */
/*               Binary Tree implementation Header file                       */
/*                                                                            */
/******************************************************************************/

#ifndef BINTREE_H
#define BINTREE_H

struct node
{
    int data;
    struct node *left;
    struct node *right;
};

struct node *new_node(int data);
void insert_node(struct node **root, int data);
int search_node(struct node *root, int data);
void print_tree(struct node *root);

#endif