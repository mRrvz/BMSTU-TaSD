#ifndef __TREE_INTERFACES_H__
#define __TREE_INTERFACES_H__

#include <stdio.h>
#include "../headers/struct.h"

tree_t create_tree(FILE *f);

void balance_tree(tree_t *const tree);

#endif
