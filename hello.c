#include <stdio.h>
#include "glib.h"

int main() {
    printf("Hello world. Today is fine.\n");

    GList* list = NULL;
    list = g_list_append(list, "Johnson");
    printf("The first item is '%s'.\n", g_list_first(list)->data);
}