#pragma once

#ifndef ASCIIENGINE_H
#define ASCIIENGINE_H

#include <stddef.h>

struct Entity
{
    char name[20];
    size_t id;
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
