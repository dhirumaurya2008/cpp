#Variables 
CC=gcc
#SDIR=app
IDIR=inc
LDIR=lib
CFLAGS=-I../$(IDIR)
LFLAGS=-L../$(LDIR)
DEPS=
#_DEPS = lib_myMath.h lib_myPrint.h
#DEPS = $(patsubst %,$(IDIR)/%,$(_DEPS))
#_SRC = myApp.c 
#SRC = $(patsubst %,$(SDIR)/%,$(_SRC)) 

#Rules
#%.o: %.c $(DEPS)
%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS) 
myApp: myApp.o
	$(CC) -o myApp myApp.o -l_mylib $(LFLAGS)
