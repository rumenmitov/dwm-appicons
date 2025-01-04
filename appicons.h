#ifndef __APPICONS_H
#define __APPICONS_H

#include <string.h>
#include <stdlib.h>
#include <stdio.h>


void remove_outer_separators(char **str) {
    size_t clean_tag_name_len = strlen(*str) - 2;

    char *temp_tag_name = (char*) 
        malloc(clean_tag_name_len + 1);

    if (temp_tag_name == NULL) perror("dwm: malloc()");

    memset(temp_tag_name, 0, clean_tag_name_len + 1);

    char *clean_tag_name_beg = *str + 1;
    strncpy(temp_tag_name, 
            clean_tag_name_beg, 
            clean_tag_name_len);

    free(*str);
    *str = temp_tag_name;
}

#endif // __APPICONS_H
