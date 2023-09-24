br:clean compilar ejecutar

compilar:src/main.cpp
	g++ src/main.cpp -o bin/main -I include

ejecutar:bin/main
	./bin/main

clean:bin/main
	rm bin/main
