#pragma once

#ifndef COMPONENTS_H
#define COMPONENTS_H

#include <stdbool.h>
#include <stddef.h>

struct PositionComponent
{
    size_t entityId;
    bool enabled;
    int x;
    int y;
};

struct RendererComponent
{
    size_t entityId;
    bool enabled;
    char sprite[8][8];
    int xOffset;
    int yOffset;
};

struct CameraComponent
{
    size_t entityId;
    bool enabled;

    // Width and height of display in chars
    int width;
    int height;

    // Top-left corner of the screen in terms of chars
    int screenX;
    int screenY;
};

struct VelocityComponent
{
    size_t entityId;
    bool enabled;

    // Number of seconds to travel 1 ASCII block (lower == faster speed)
    float xVelocity;
    float yVelocity;
};

#endif
