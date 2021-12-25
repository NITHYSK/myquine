/**
 * MAIN.C
 */
#include "quine04.h"
#include <openssl/sha.h>
#include <stdio.h>

int main(int argc, char **argv)
{
	char *
	char *message = {"Sample Message"};
	unsigned char digest[SHA256_DIGEST_LENGTH];

	SHA256_CTX sha_ctx;
	SHA256_Init(&sha_ctx);
	SHA256_Update(&sha_ctx, message, sizeof(message));
	SHA256_Final(digest, &sha_ctx);

	fprintf(stdout, "%s\n", message);

	for (int i=0; i<sizeof(digest); ++i)
	{
		fprintf(stdout, "%x", digest[i]);
	}
	
	fprintf(stdout, "\n");

	return 0;
}

