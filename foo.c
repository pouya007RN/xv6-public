#include "types.h"
#include "stat.h"
#include "user.h"
#include "param.h"

int
main(void)
{
    int pid = fork();
    if (pid == 0){
        fork();
        fork();
        fork();
        int pidx = getpid();
        if (pidx % 8 == 0){
            printf(1, "Initializing process %d, priority: %d\n", getpid(), 93);
            set_priority(93);
        }
        else if (pidx % 8 == 1){
            printf(1, "Initializing process %d, priority: %d\n", getpid(), 71);
            set_priority(71);
        }
        else if (pidx % 8 == 2){
            printf(1, "Initializing process %d, priority: %d\n", getpid(), 54);
            set_priority(54);
        }
        else if (pidx % 8 == 3){
            printf(1, "Initializing process %d, priority: %d\n", getpid(), 23);
            set_priority(23);
        }
        else if (pidx % 8 == 4){
            printf(1, "Initializing process %d, priority: %d\n", getpid(), 37);
            set_priority(37);
        }
        else if (pidx % 8 == 5){
            printf(1, "Initializing process %d, priority: %d\n", getpid(), 87);
            set_priority(87);
        }
        else if (pidx % 8 == 6){
            printf(1, "Initializing process %d, priority: %d\n", getpid(), 9);
            set_priority(99);
        }
        else {
            printf(1, "Initializing process %d, priority: %d\n", getpid(), 63);
            set_priority(63);
        }
        int i;
        for(i = 0; i < getpid() * 10000; i++){
            continue;
        }
        exit();
    }
    else {
        sleep(5);
        printf(1, "Running cps\n");
        cps();
        wait();
        exit();
    }
}

