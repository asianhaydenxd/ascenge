#pragma once

#ifndef COMPONENTS_H
#define COMPONENTS_H

#include <stdbool.h>

struct PositionComponent
{
    bool enabled;
    int x;
    int y;
};

struct RendererComponent
{
    bool enabled;
    char sprite[64];
    int xOffset;
    int yOffset;
};

#endif
