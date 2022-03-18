//
// Created by feyzi on 18.03.2022.
//

#pragma once

#ifndef TIME_TYPES_COORDINATE_TYPES_H
#define TIME_TYPES_COORDINATE_TYPES_H

#endif //TIME_TYPES_COORDINATE_TYPES_H

struct Coordinates
{
    /* Denotes the degree part of the coordinate, could be latitude or longitude */
    uint64_t degrees ;
    /* Denotes the minute part of the coordinate, could be latitude or longitude */
    uint64_t minutes ;
    /* Denotes the second part of the coordinate, could be latitude or longitude */
    uint64_t seconds ;
};

typedef struct Coordinates coord ;

struct Latitude
{
    coord lat_coord ;
    /* Denotes if the coordinate is north or south of the equator. */
    bool north_or_south ;
};

typedef struct Latitude lat ;

struct Longitude
{
    coord long_coord ;
    /* Denotes if the coordinate is to the west of greenwich or east of greenwich */
    bool west_or_east ;
};

typedef struct Longitude lng ;

void ConvertToFullSeconds(coord * some_coord, char * output_coord_str, uint64_t * output_uint64 );