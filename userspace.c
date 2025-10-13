#include <stdio.h>
#include <stdlib.h>
#include <sys/syscall.h>
#include <unistd.h>

int main(int argc, char *argv[]) {
	if (argc != 4) {
		printf("Usage: %s <option> <option> <string>\n", argv[0]);
		return 1;
	}

	unsigned long magic1 = strtoul(argv[1], NULL, 0);
	unsigned long magic2 = strtoul(argv[2], NULL, 0);
	const char *arg = argv[3];

	printf("SYS_reboot(%lu, %lu, 0, %p)\n", magic1, magic2, arg);
	syscall(SYS_reboot, magic1, magic2, 0, arg);
	
	return 0;

}
