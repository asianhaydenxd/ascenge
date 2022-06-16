#pragma once

#ifndef ASCIIENGINE_H
#define ASCIIENGINE_H

#include <stddef.h>
#include "components.h"

struct Entity
{
    char name[20];
    size_t id;
    struct PositionComponent position;
    struct RendererComponent renderer;
};

struct Scene
{
    struct Entity entities[256];
};

struct Project
{
    struct Scene scenes[16];
};

#endif
