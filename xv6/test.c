//
// Created by james on 4/15/2021.
//
#include "types.h"
#include "stat.h"
#include "user.h"

int main(int argc, char *argv[]) {
    int pid = fork();
    int status = 10;
    if (pid) {
        pid = waitpid(pid,&status, 0);
        printf(1,"\n parent pid: %d child pid: %d status: %d", getpid(), pid, status);
        exit(status);
    }else{
        printf(1,"\n child pid: %d status: %d", getpid(), status);
        exit(4);
    }
}
