CC=g++
CFLAGS= -std=c++11 -O2

BIN=build
SRC=$(wildcard src/*.cpp)
OBJ=$(addprefix $(BIN)/, $(notdir $(SRC:.cpp=.o)))

all: test

build:
	mkdir -p $(BIN)

$(BIN)/%.o: src/%.cpp
	$(CC) $(CFLAGS) -c -I include "$<" -o "$@"

polyhedron: $(BIN) $(OBJ)

polyhedron_test.x: polyhedron
	$(CC) $(CFLAGS) -I include $(OBJ) -o "$@"

test: polyhedron_test.x
	./polyhedron_test.x
