//
// Created by feyzi on 18.03.2022.
//
#pragma once

#include <stdio.h>
#include <time.h>
#include <sys/time.h>
#include <unistd.h>
#include "Time_types.h"

void get_local_time(current_time * curr_time, current_date * curr_date)
{
    current_date temp_obj_date ;
    current_date *temp_obj_date_ptr = &temp_obj_date ;
    temp_obj_date_ptr->current_year = 0 ;
    temp_obj_date_ptr->current_month = 0 ;
    temp_obj_date_ptr->current_day = 0 ;
    temp_obj_date_ptr->current_day_str = "Monday" ;
    temp_obj_date_ptr->current_day_str = "January" ;
    time_t t = time(NULL) ;
    struct tm *time_ptr = localtime(&t);
    localtime_r(&t,time_ptr);
    struct timeval my_current_time ;
    gettimeofday(&my_current_time,NULL);
    if(curr_date == NULL)
    {
        curr_date = temp_obj_date_ptr ;
    }
    curr_date->current_day = time_ptr->tm_mday ;
    curr_date->current_month = time_ptr->tm_mon ;
    curr_date->current_year = time_ptr->tm_year ;
    printf("%d,%d,%d \n",curr_date->current_day,curr_date->current_month+1,curr_date->current_year);
    printf(monday) ;
};

void print_date_and_time()
{
//    printf() ;
}

