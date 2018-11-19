eleves : eleves.o main1.o
	gcc eleves.o main1.o -o eleves
eleves.o : eleves.c constante.h eleves.h 
	gcc -Wall -c eleves.c -o eleves.o
main1.o : main1.c eleves.h constante.h
	gcc -Wall -c main1.c -o main1.o