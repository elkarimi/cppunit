CC=g++
CFLAGS=-pedantic -Wall -c -W
LDFLAGS=-lcppunit
OBJ=classa.o classb.o main.o
OBJTEST=classa.o classatest.o classb.o classbtest.o maintest.o
INSTALL=/usr/bin/install -c
BINDIR=/usr/local/bin
EXEC=project
EXECTEST=test

all: $(EXEC) $(EXECTEST)

#
# Dev Tools
#

# Clean project
clean:
	rm -rf *.o *.log *~ *.xml

mrproper: clean
	rm -rf $(EXEC) $(EXECTEST)

#
# Compile
#

project: $(OBJ)
	$(CC) -o $(EXEC) $(OBJ) $(LDFLAGS)

test: $(OBJTEST)
	$(CC) -o $(EXECTEST) $(OBJTEST) $(LDFLAGS)

%.o: %.cpp
	$(CC) $(CFLAGS) -c $<
