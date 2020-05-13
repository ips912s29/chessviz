.PHONY: all clean start

all: bin/programm

bin/programm: build/main.o build/chessboardMove.o build/chessboardView.o build/input.o
	gcc -Wall -Werror build/main.o build/chessboardMove.o build/chessboardView.o build/input.o -o bin/programm

build/main.o: src/main.c
	gcc -Wall -Werror -c src/main.c -o build/main.o

build/chessboardMove.o: src/chessboardMove.c
	gcc -Wall -Werror -c src/chessboardMove.c -o build/chessboardMove.o

build/chessboardView.o: src/chessboardView.c
	gcc -Wall -Werror -c src/chessboardView.c -o build/chessboardView.o

build/input.o: src/input.c
	gcc -Wall -Werror -c src/input.c -o build/input.o

start:
	./bin/programm

clean:
	rm -rf build/*.o
	rm -rf bin/*
 

