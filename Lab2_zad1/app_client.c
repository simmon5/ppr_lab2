/*
 * This is sample code generated by rpcgen.
 * These are only templates and you can use them
 * as a guideline for developing your own functions.
 */

#include "app.h"


void
testowy_1(char *host, int liczba1, int liczba2)
{
	CLIENT *clnt;
	wyjscie  *result_1;
	wejscie  obliczenia_1_arg;

#ifndef	DEBUG
	clnt = clnt_create (host, TESTOWY, PROBNA, "udp");
	if (clnt == NULL) {
		clnt_pcreateerror (host);
		exit (1);
	}
#endif	/* DEBUG */

	obliczenia_1_arg.x1 = liczba1;
	obliczenia_1_arg.x2 = liczba2;

	result_1 = obliczenia_1(&obliczenia_1_arg, clnt);
	if (result_1 == (wyjscie *) NULL) {
		clnt_perror (clnt, "call failed");
	}

	printf("\nWprowadzone dane:\t%d\t%d\n", liczba1, liczba2);
	printf("\nUzyskane wyniki:\n");
	printf("\tsuma:\t\t%d\n",
		result_1->suma);

#ifndef	DEBUG
	clnt_destroy (clnt);
#endif	 /* DEBUG */
}


int
main (int argc, char *argv[])
{
	char *host;

	if (argc < 2) {
		printf ("usage: %s server_host\n", argv[0]);
		exit (1);
	}
	host = argv[1];
    int x = 0;
    int y = 0;
    printf("Podaj skladniki x i y\n");
    scanf("%d %d",&x,&y);
	testowy_1 (host, x, y);
exit (0);
}
