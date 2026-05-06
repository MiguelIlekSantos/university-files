/**
 * @file main.c
 * @brief Description
 * @date 2018-1-1
 * @author name of author
 */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <errno.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <math.h>

#include "debug.h"
#include "memory.h"
#include "args.h"

int bytes_for_int(unsigned int x){
    return ceil(log2(x+1)/8);
}

int main(int argc, char *argv[]) {
    struct gengetopt_args_info args_info;
    if(cmdline_parser(argc,argv,&args_info) != 0){
        exit(1);
    }

    printf("%d bytes neede for %ld\n", bytes_for_int(args_info.num_arg), args_info.num_arg);

    cmdline_parser_free(&args_info);
    return 0;
}
