#include "checkThemes.h"
#include <stdio.h>
#include <string.h>
#include <dirent.h>

void checkIfInstalled(FILE *config, char *username)
{
    printf("running...");

    if(!config)
    {
        printf("Config not found");
    }

    char lines[1024];
    int counts = 0;

    rewind(config);

    while (fgets(lines, sizeof(lines), config)) {
        if (strncmp(lines, "Theme=", 6) == 0) {
            counts++;
            printf("%s", lines);
        }
    }

    printf("%d", counts);
}