#include <stdlib.h>
#include <sys/mount.h>

int main(int argc, char *argv[]) {
	/* the exit code */
	int exit_code = EXIT_FAILURE;

	/* make sure the number of command-line arguments is valid */
	if (2 != argc)
		goto end;

	/* unmount the specified file system */
	if (-1 != umount(argv[1]))
		exit_code = EXIT_SUCCESS;

end:
	return exit_code;
}