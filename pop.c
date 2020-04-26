#include "pop.h"

void *checkedalloc(int l, size_t s) {
	void *ptr = calloc(l, s);

	if (ptr == NULL) {
		char *text = "Failed to initialize pointer.";
		fprintf(stderr, "%s: %s\n", strerror(errno), text);
		exit(0);
	}

	return ptr;
}
