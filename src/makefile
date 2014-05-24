IDIR=../include
CC=g++
CFLAGS=-I$(IDIR)

ODIR=obj
LDIR=

LIBS =

_DEPS = *.h
DEPS = $(patsubst %, $(IDIR)/%,$(_DEPS))

_OBJ = *.cc
OBJ = $(patsubst %, $(ODIR)/%,$(_OBJ))

$(ODIR): %.o : %.cc $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

testProg: $(OBJ)
	g++ -o $@ $^ $(CFLAGS) $(LIBS)

.PHONY: clean

clean:
	rm -f $(ODIR)/*.o *~ core $(INCDIR)/*~
