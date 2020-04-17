all: bin/programm

bin/programm: build/main.o build/chessboardInit.o build/chessboardMove.o build/chessboardView.o
	g++ -Wall -Werror build/main.o build/chessboardInit.o build/chessboardMove.o build/chessboardView.o -o bin/programm

build/main.o: src/main.cpp
	g++ -Wall -Werror -c src/main.cpp -o build/main.o

build/chessboardInit.o: src/chessboardInit.cpp
	g++ -Wall -Werror -c src/chessboardInit.cpp -o build/chessboardInit.o

build/chessboardMove.o: src/chessboardMove.cpp
	g++ -Wall -Werror -c src/chessboardMove.cpp -o build/chessboardMove.o

build/chessboardView.o: src/chessboardView.cpp
	g++ -Wall -Werror -c src/chessboardView.cpp -o build/chessboardView.o

clean:
	rm -rf src/*.o 
	rm -rf build/*.o main: main.cpp
	g++ -o main -Wall main.cpp