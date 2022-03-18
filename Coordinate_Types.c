//
// Created by feyzi on 18.03.2022.
//
#pragma once
#include <stdbool.h>
#include <builtin_types.h>
#include <inttypes.h>
#include <stdio.h>
#include "Coordinate_Types.h"

void ConvertToFullSeconds(coord * some_coord, char * output_coord_str, uint64_t * output_uint64 )
{
    sprintf(output_coord_str, "%" PRIu64, some_coord->degrees*3600 + some_coord->minutes*60 + some_coord->seconds);
    *output_uint64 = some_coord->degrees*3600 + some_coord->minutes*60 + some_coord->seconds ;
};