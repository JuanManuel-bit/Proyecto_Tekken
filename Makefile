br: clean compilar ejecutar

compilar: src/main.cpp src/Jugador.cpp src/Enemigos.cpp
    g++ src/main.cpp src/Jugador.cpp src/Enemigos.cpp -o bin/main -I include

ejecutar: bin/main
    ./bin/main

clean: bin/main
    rm bin/main
