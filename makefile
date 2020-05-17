.PHONY: all clean start

all: bin/programm bin/test

bin/programm: build/src/main.o build/src/chessboardMove.o build/src/chessboardView.o build/src/input.o
	gcc -Wall -Werror build/src/main.o build/src/chessboardMove.o build/src/chessboardView.o build/src/input.o -o bin/programm

build/src/main.o: src/main.c
	gcc -Wall -Werror -c src/main.c -o build/src/main.o

build/src/chessboardMove.o: src/chessboardMove.c
	gcc -Wall -Werror -c src/chessboardMove.c -o build/src/chessboardMove.o

build/src/chessboardView.o: src/chessboardView.c
	gcc -Wall -Werror -c src/chessboardView.c -o build/src/chessboardView.o

build/src/input.o: src/input.c
	gcc -Wall -Werror -c src/input.c -o build/src/input.o

bin/test: build/test/input_test.o  build/test/main.o 
	gcc -Wall -Werror build/src/input.o build/test/input_test.o build/test/main.o -o bin/test

build/test/input_test.o: test/input_test.c
	gcc -Wall -Werror -I thirdparty -I src -c test/input_test.c -o build/test/input_test.o

build/test/main.o: test/main.c
	gcc -Wall -Werror  -I thirdparty -I src -c test/main.c -o build/test/main.o

start:
	./bin/programm

clean:
	rm -rf build/src/*.o
	rm -rf build/test/*.o
	rm -rf bin/*
 

