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

struct CameraComponent
{
    bool enabled;

    // Width and height of display in chars
    int width;
    int height;

    // Top-left corner of the screen in terms of chars
    int screenX;
    int screenY;
};

#endif
