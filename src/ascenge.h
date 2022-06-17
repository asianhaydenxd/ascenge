#pragma once

#ifndef ASCIIENGINE_H
#define ASCIIENGINE_H

#define ENTITY_CAP 256
#define SCENE_CAP 16

#include <stddef.h>
#include "components.h"

struct Entity
{
    char name[20];
    size_t id;
};

struct Scene
{
    struct Entity entities[ENTITY_CAP];
    
    struct PositionComponent positionComponents[ENTITY_CAP];
    struct RendererComponent rendererComponents[ENTITY_CAP];
    struct CameraComponent cameraComponents[ENTITY_CAP];
    struct VelocityComponent velocityComponents[ENTITY_CAP];
};

struct Project
{
    struct Scene scenes[SCENE_CAP];
};

#endif
