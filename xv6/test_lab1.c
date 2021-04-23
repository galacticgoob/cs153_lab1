//
// Created by james on 4/22/2021.
//

#include "types.h"
#include "stat.h"
#include "user.h"

int main(int argc, char *argv[]) {
    int pid;
    int status;
    pid = fork();
    if (pid) {
        waitpid(pid, &status, 0);
        printf(1,"%d\n", status);
        exit(0);
    }else{
        exit(4);
    }
}