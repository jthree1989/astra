#ifndef COLOR_TYPES_H
#define COLOR_TYPES_H

#include <sensekit_types.h>

typedef sensekit_streamconnection_t sensekit_colorstream_t;

typedef struct {
    uint32_t width;
    uint32_t height;
    uint8_t bytesPerPixel;
} sensekit_colorframe_metadata_t;

typedef struct _sensekit_colorframe* sensekit_colorframe_t;

#endif // COLOR_TYPES_H
