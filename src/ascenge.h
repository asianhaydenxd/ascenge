#pragma once

#ifndef ASCIIENGINE_H
#define ASCIIENGINE_H

#define ENTITY_CAP 256

#include <stddef.h>
#include "components.h"

struct Entity
{
    char name[20];
    size_t id;
};

struct Project
{
    struct Entity entities[ENTITY_CAP];
    
    struct PositionComponent positionComponents[ENTITY_CAP];
    struct RendererComponent rendererComponents[ENTITY_CAP];
    struct CameraComponent cameraComponents[ENTITY_CAP];
    struct VelocityComponent velocityComponents[ENTITY_CAP];
};

struct Entity addEntity(struct Project *project, char name[]);
struct Entity findEntity(struct Project project, char name[]);

#endif
