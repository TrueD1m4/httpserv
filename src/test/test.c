#include "test.h"
//workd
extern int first_net_test() {
    int listener = listen_net("0.0.0.0:7878");
    if (listener < 0) {
        fprintf(stderr, "%d\n", listener);
    }

    printf("Server is listening...\n");

    close_net(listener);
    printf("Server closed connection...\n");
    return 0;
}
//workd
extern int first_bt_test() {
    Tree *tree = new_tree(DECIMAL_ELEM, DECIMAL_ELEM);
    for(size_t i = 0; i < 10; ++i) {
        set_tree(tree, decimal(rand()%10), decimal(rand()%10));
    }
    print_tree(tree);
    free_tree(tree);
    return 0;
}
//workd
extern int second_bt_test() {
    Tree *tree = new_tree(DECIMAL_ELEM, DECIMAL_ELEM);

    set_tree(tree, decimal(6), decimal(rand()%10));
    set_tree(tree, decimal(1), decimal(rand()%10));
    set_tree(tree, decimal(7), decimal(rand()%10));
    set_tree(tree, decimal(2), decimal(rand()%10));
    set_tree(tree, decimal(0), decimal(rand()%10));

    print_tree(tree);
    del_tree(tree, decimal(6));
    print_tree(tree);

    free_tree(tree);
    return 0;
}
//workd
extern int third_bt_test() {
    Tree *tree = new_tree(STRING_ELEM, REAL_ELEM);

    set_tree(tree, string("a"), real(5.1));
    set_tree(tree, string("c"), real(5.6));
    set_tree(tree, string("b"), real(5.2));
    set_tree(tree, string("e"), real(5.3));
    set_tree(tree, string("A"), real(5.4));
    set_tree(tree, string("F"), real(5.5));
    set_tree(tree, string("y"), real(5.6));
    set_tree(tree, string("s"), real(5.7));

    print_tree_as_list(tree);
    del_tree(tree, string("F"));
    print_tree_as_list(tree);

    free_tree(tree);
    return 0;
}
//workd
extern int first_ht_test() {
    HashTab *ht = new_hashtab(10, DECIMAL_ELEM, DECIMAL_ELEM);

    set_hashtab(ht, decimal(5), decimal(6));
    set_hashtab(ht, decimal(1), decimal(555));
    set_hashtab(ht, decimal(2), decimal(800));
    set_hashtab(ht, decimal(6), decimal(333));
    set_hashtab(ht, decimal(10), decimal(444));

    print_hashtab(ht);
    free_hashtab(ht);
    return 0;
}