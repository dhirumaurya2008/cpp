#Variables
CC=gcc
AR=ar
SDIR=src
IDIR=../inc
ODIR=obj
CFLAGS=-I$(IDIR)
LFLAGS=-L.
AFLAGS=rcs
#create Directory
#MKDIR_P = mkdir -p
#Macros
_DEPs = lib_myMath.h lib_myPrint.h
DEPS = $(patsubst %,$(IDR)/%,$(_DEPS))
_SRC = lib_myMath.c lib_myPrint.c
SRC = $(patsubst %,$(SDIR)/%,$(_SRC)) 
_OBJ = lib_myMath.o lib_myPrint.o
OBJ = $(patsubst %,$(ODIR)/%,$(_OBJ)) 
#Rules
$(ODIR)/%.o: $(SDIR)/%.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS) -I.
%.o: $(SDIR)/%.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)
lib_mylib.a: $(OBJ)
	$(AR) $(AFLAGS) -o $@ $^

