#include <stdio.h>
#include <time.h>
#include <sys/time.h>
#include <unistd.h>
#include "Time_types.h"

int main() {
    time_t curr_time = time(NULL);
    time_t t = time(NULL);
    struct tm *time_ptr = localtime(&t);

    localtime_r(&t,time_ptr);
//    fprintf(stdout, "%s",asctime(time_ptr)) ;
    printf("Offset to GMT is %lds.\n", time_ptr->tm_gmtoff);
    printf("The time zone is '%s'.\n", time_ptr->tm_zone);
    fprintf(stdout,"Date is: %02d/%02d/%02d \n", time_ptr->tm_mday,time_ptr->tm_mon,1900+time_ptr->tm_year);
    fprintf(stdout,"POSIX version is: %lu \n", _POSIX_VERSION);
    usleep(10) ;
    get_local_time(NULL,NULL);

    return 0;
}
