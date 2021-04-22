/****
	Przyklad pliku RPCGEN
	Obliczanie sumy, roznicy i iloczynu dwoch liczb calkowitych
****/

/*************************************
	Wywolanie procedury odleglej dopuszcza tylko jeden
	argument wywolania i jeden zwracany wynik.
	Oba musza byc podane w formie wskaznikow

	Dlatego nalezy definiowac odpowiednie struktury
*************************************/
struct wejscie {
	char dane[256];
};
struct wyjscie {
	char wynik[256];
};
			/* definicja programu i jego wersji */

program TESTOWY{
	version PROBNA{
			/* definicja procedury nr 1 */
	wyjscie OBLICZENIA( wejscie) = 1;	
	} = 1;		/* nr wersji */	
} = 0x21000000;		/* nr programu */	
	
