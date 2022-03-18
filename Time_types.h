//
// Created by feyzi on 18.03.2022.
//
#pragma once

#ifndef TIME_TYPES_TIME_TYPES_H
#define TIME_TYPES_TIME_TYPES_H

#endif //TIME_TYPES_TIME_TYPES_H
#include <stdbool.h>
#include <builtin_types.h>
#include <inttypes.h>
#include <stdio.h>
#include <time.h>

#define monday "Monday"
#define tuesday "Tuesday"
#define wednesday "Wednesday"
#define thursday "Thursday"
#define friday "Friday"
#define saturday "Saturday"
#define sunday "Sunday"

enum weekdays{Monday=1, Tuesday=2, Wednesday=3, Thursday=4, Friday=5, Saturday=6, Sunday=7};

struct current_time
{
    uint8_t current_hour ;
    uint8_t current_minute ;
    uint8_t current_second ;
    uint64_t current_miliseconds ;
};

typedef struct current_time current_time ;

struct current_date
{
    uint8_t current_day ;
    uint8_t current_month ;
    uint32_t current_year ;
    char * current_day_str ;
    char * current_month_str ;
};

typedef struct current_date current_date ;

void get_local_time(current_time * curr_time, current_date * curr_date) ;
void print_date_and_time() ;
