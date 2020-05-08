all: bin/programm

bin/programm: build/main.o build/chessboardMove.o build/chessboardView.o
	gcc -Wall -Werror build/main.o build/chessboardMove.o build/chessboardView.o -o bin/programm

build/main.o: src/main.c
	gcc -Wall -Werror -c src/main.c -o build/main.o

build/chessboardMove.o: src/chessboardMove.c
	gcc -Wall -Werror -c src/chessboardMove.c -o build/chessboardMove.o

build/chessboardView.o: src/chessboardView.c
	gcc -Wall -Werror -c src/chessboardView.c -o build/chessboardView.o

start:
	./bin/programm

clean:
	rm -rf src/*.o 

