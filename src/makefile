IDIR= ../include
CC=g++
CFLAGS=-I$(IDIR)

ODIR=obj
#LDIR=

#LIBS =

#SRC = bubbleSort.cc  genArray.cc  heapSort.cc  permute.cc  printArray.cc  quickSort.cc  testProg.cc
SRC = $(filter-out testProg.cc,$(wildcard *.cc))
#$(SRC) = $(patsubst %, %,$(_SRC))

#_DEPS = *.h
#DEPS = $(patsubst %, $(IDIR)/%,$(_DEPS))
#DEPS = $($(SRC): .cc = .h)
#DEPS = $(patsubst %.cc, $(IDIR)/%.h, $(SRC))
DEPS = $(wildcard $(IDIR)/*.h)

#_OBJ = *.o
#OBJ = $(patsubst %, $(ODIR)/%,$(_OBJ))

#OBJ = $($(SRC): .cc = .o)

OBJ = $(patsubst %.cc, $(ODIR)/%.o, $(SRC))

#test:
#	more $(OBJ)


testProg: testProg.cc $(OBJ)
	g++ -o $@ $^ $(CFLAGS) 
#$(LIBS)


$(OBJ): $(patsubst $(ODIR)/%.o, %.cc, $@) $(DEPS)
	$(CC) -c -o  $@ $(patsubst $(ODIR)/%.o, %.cc, $@)  $(CFLAGS)



.PHONY: clean

clean:
	rm -f $(ODIR)/*.o *~ core $(INCDIR)/*~ testProg
