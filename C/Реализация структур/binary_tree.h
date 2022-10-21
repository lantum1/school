#include <stddef.h>
#include <stdbool.h>
typedef struct tree_node tree_node;
struct tree_node{
    double val;
    tree_node *left;
    tree_node *right;
};
typedef tree_node * tree;
int EOF_HELPER();
tree create_empty();
tree build(tree left, tree right, double root_val);
bool is_empty(tree tree);
double get_root_val(tree t);
tree get_left(tree t);
tree get_right(tree t);
void destroy(tree t);
void destroy_r(tree t);
tree change_root_val(tree t, double new_val);
tree bin_search_tree_add(tree t, double val);
tree_node ** find_element(tree_node **t, double val);
void bin_search_tree_remove(tree_node **t);
void print_elements(tree t, int k);
