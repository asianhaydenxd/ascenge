#include "ascenge.h"
#include <string.h>

struct Entity addEntity(struct Project *project, char name[])
{
    // Find first unoccupied entity index
    int i = 0;
    while (project->entities[i].exists) i++;

    project->entities[i].id = i;
    project->entities[i].exists = true;
    project->entities[i].enabled = true;
    strcpy(project->entities[i].name, name);

    return project->entities[i];
}

struct Entity findEntity(struct Project project, char name[])
{
    for (int i = 0; i < ENTITY_CAP; i++)
    {
        if (strcmp(name, project.entities[i].name) == 0)
        {
            return project.entities[i];
        }
    }

    struct Entity blankEntity = {false, false};
    blankEntity.id = ENTITY_CAP; // Id cant be >= entity cap, signifies a non-existent entity
    return blankEntity;
}
