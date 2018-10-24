#include "../System.h"

#include "xBRZ/xbrz.h"

static xbrz::ColorFormat RGB = xbrz::ColorFormat::RGB;

void xbrz2x32(uint8_t *srcPtr, uint32_t srcPitch, uint8_t * /* deltaPtr */, uint8_t *dstPtr, uint32_t dstPitch, int width, int height)
{
    xbrz::scale(2, (uint32_t *)srcPtr, (uint32_t *)dstPtr, width, height, RGB);
}

void xbrz3x32(uint8_t *srcPtr, uint32_t srcPitch, uint8_t * /* deltaPtr */, uint8_t *dstPtr, uint32_t dstPitch, int width, int height)
{
    xbrz::scale(3, (uint32_t *)srcPtr, (uint32_t *)dstPtr, width, height, RGB);
}

void xbrz4x32(uint8_t *srcPtr, uint32_t srcPitch, uint8_t * /* deltaPtr */, uint8_t *dstPtr, uint32_t dstPitch, int width, int height)
{
    xbrz::scale(4, (uint32_t *)srcPtr, (uint32_t *)dstPtr, width, height, RGB);
}

void xbrz5x32(uint8_t *srcPtr, uint32_t srcPitch, uint8_t * /* deltaPtr */, uint8_t *dstPtr, uint32_t dstPitch, int width, int height)
{
    xbrz::scale(5, (uint32_t *)srcPtr, (uint32_t *)dstPtr, width, height, RGB);
}

void xbrz6x32(uint8_t *srcPtr, uint32_t srcPitch, uint8_t * /* deltaPtr */, uint8_t *dstPtr, uint32_t dstPitch, int width, int height)
{
    xbrz::scale(6, (uint32_t *)srcPtr, (uint32_t *)dstPtr, width, height, RGB);
}
