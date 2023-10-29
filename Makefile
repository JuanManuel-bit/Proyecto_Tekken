all: clean compilar

compilar: src/main.cpp src/Jugador.cpp src/Enemigos.cpp
	g++ src/main.cpp src/Jugador.cpp src/Enemigos.cpp -o bin/main -I include -I /usr/include/SDL

clean:
	rm -f bin/main

ejecutar: bin/main
	./bin/main
