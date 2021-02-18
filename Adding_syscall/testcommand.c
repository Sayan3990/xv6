#include "types.h"
#include "stat.h"
#include "user.h"
#include "fcntl.h"

int
main(int argc, char **argv) {
	for (int i = 0; i < atoi(argv[1]) ; i++) {
		for (int j = 2; j < argc ; j++) {
			printf(1,"%s\n",argv[j]);
		}
	}
	exit();
}
