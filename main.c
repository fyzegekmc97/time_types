#include <stdio.h>
#include <time.h>
#include <sys/time.h>
#include <unistd.h>
#include <builtin_types.h>
#include <inttypes.h>
#include <stdbool.h>

struct Coordinates
{
    /* Denotes the degree part of the coordinate, could be latitude or longitude */
    uint16_t degrees ;
    /* Denotes the minute part of the coordinate, could be latitude or longitude */
    uint16_t minutes ;
    /* Denotes the second part of the coordinate, could be latitude or longitude */
    uint16_t seconds ;
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

int main() {
    printf("Hello, World!\n");
    time_t curr_time = time(NULL);
    time_t t = time(NULL);
    struct tm *time_ptr = localtime(&t);
    struct timeval current_time ;
    gettimeofday(&current_time,NULL);
    localtime_r(&t,time_ptr);
//    fprintf(stdout, "%s",asctime(time_ptr)) ;
    printf("Offset to GMT is %lds.\n", time_ptr->tm_gmtoff);
    printf("The time zone is '%s'.\n", time_ptr->tm_zone);
    fprintf(stdout,"Time is: %02d:%02d:%02d.%02lu\n",time_ptr->tm_hour,time_ptr->tm_min,time_ptr->tm_sec,current_time.tv_usec);
    fprintf(stdout,"Date is: %02d/%02d/%02d \n", time_ptr->tm_mday,time_ptr->tm_mon,1900+time_ptr->tm_year);
    fprintf(stdout,"POSIX version is: %lu", _POSIX_VERSION);
    usleep(10) ;
    return 0;
}
