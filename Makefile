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

fruit: $(BIN) $(OBJ)

fruit_test.x: fruit
	$(CC) $(CFLAGS) -I include $(OBJ) -o "$@"

test: fruit_test.x
	./fruit_test.x
