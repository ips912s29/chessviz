all: bin/programm

bin/programm: build/main.o build/chessboardInit.o build/chessboardMove.o build/chessboardView.o
	g++  -std=c++11 -Wall -Werror build/main.o build/chessboardInit.o build/chessboardMove.o build/chessboardView.o -o bin/programm

build/main.o: src/main.cpp
	g++  -std=c++11 -Wall -Werror -c src/main.cpp -o build/main.o

build/chessboardInit.o: src/chessboardInit.cpp
	g++  -std=c++11 -Wall -Werror -c src/chessboardInit.cpp -o build/chessboardInit.o

build/chessboardMove.o: src/chessboardMove.cpp
	g++  -std=c++11 -Wall -Werror -c src/chessboardMove.cpp -o build/chessboardMove.o

build/chessboardView.o: src/chessboardView.cpp
	g++  -std=c++11 -Wall -Werror -c src/chessboardView.cpp -o build/chessboardView.o

clean:
	rm -rf src/*.o 
	rm -rf build/*.o main: main.cpp
