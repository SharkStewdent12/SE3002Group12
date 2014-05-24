IDIR= ../include
CC=g++
CFLAGS=-I$(IDIR)

ODIR=obj
#LDIR=

#LIBS =

SRC = bubbleSort.cc  genArray.cc  heapSort.cc  permute.cc  printArray.cc  quickSort.cc  testProg.cc
#$(SRC) = $(patsubst %, %,$(_SRC))

#_DEPS = *.h
#DEPS = $(patsubst %, $(IDIR)/%,$(_DEPS))
DEPS = $(SRC: .cc = .h)

#_OBJ = *.o
#OBJ = $(patsubst %, $(ODIR)/%,$(_OBJ))

OBJ = $(SRC: .cc = .o)

testProg: $(OBJ)
	g++ -o $@ $^ $(CFLAGS) #$(LIBS)

$(ODIR)/%.o: %.cc $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)


.PHONY: clean

clean:
	rm -f $(ODIR)/*.o *~ core $(INCDIR)/*~
