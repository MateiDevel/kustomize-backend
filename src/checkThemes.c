#include "checkThemes.h"
#include <stdio.h>
#include <string.h>

void checkIfInstalled(FILE *config)
{
    printf("running...");

    if(!config)
    {
        printf("Config not found");
    }

    char lines[1024];

    while(fgets(lines, sizeof(lines), config))
    {
        if(strstr(lines, "Theme="))
            printf("%s", lines);
    }

}