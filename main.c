#include <stdlib.h>
#include <stdio.h>
#include "bintree.h"

int main(int argc, char **argv)
{
    struct node *tree = NULL;

    int values[] = {9, 6, 3, 7, 2, 0};
    int i;

    /* Load values on the binary-tree */
    for (i=0; i<6; i++)
    {
        insert_node(&tree, values[i]);
    }

    /* Show the binary tree */
    print_tree(tree);
    putchar('\n');

    return 0;
}