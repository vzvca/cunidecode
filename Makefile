

all: xlat.o
	$(CC) -o $@ $<

xlat.o: xlat.c

