
#include "bin2hex.h"

int main(int argc, char *argv[])
{
    if (argc == 1) {
        fprintf(stderr, "[Error] No input(s).\n");

        return EXIT_SUCCESS;
    }

	mpz_t n;
	mpz_init(n);

    while (*++argv) {
        mpz_set_str(n, *argv, 2);
		mpz_out_str(stdout, 16, n);
		printf("\n");
    }

	mpz_clear(n);

    return EXIT_SUCCESS;
}

