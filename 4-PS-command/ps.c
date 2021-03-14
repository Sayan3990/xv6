#include "types.h"
#include "stat.h"
#include "user.h"
#include "fcntl.h"

int
main(int argc, char *argv[]){
    printf(1,"PID \t PPID \t PNAME \t PSTATE \t\tPSIZE(bytes)\tCTIME(After booting XV6)\n");
    sps();
    exit();
}
