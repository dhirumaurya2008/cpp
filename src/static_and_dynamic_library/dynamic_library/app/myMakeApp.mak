#Variables 
CC=gcc
IDIR=inc
LDIR=lib
CFLAGS=-I../$(IDIR)
LFLAGS=-L../$(LDIR)
DEPS=

#Rules
%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS) 
myApp: myApp.o
	$(CC) -o myApp myApp.o ../$(LDIR)/lib_mylib.so
