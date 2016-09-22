CC=gcc
CFLAGS=
LDFLAGS= -lm
SOURCES= 1Seno.c	2Coseno.c	3Division2.c	4Factorial.c	5Calculadora.c	6Funcion.c	6Read.c	7Prec_oper.c	6Graph.c	8Primos.c	9Masa_relat.c	9Graph.c	10pi.c		11registro.c	11Graph.c	12Sec_operac.c	13main.c	14loop1.c	14loop2.c	15Mult_matriz1.c	15Mult_matriz2.c	15Mult_matriz3.c	16main.c	16Graph.c	
EXECUTABLES=$(SOURCES:.c=.x)

all:$(EXECUTABLES)

%.x: %.c
	$(CC) -o $@ $< $(LDFLAGS)

clean: 
	rm ./*.x 
