all: cifrador

cifrador: main.o codificacion.o libcifrado.so
	gcc obj/codificacion.o obj/main.o lib/libcifrado.so -o bin/cifrador

main.o: src/main.c
	gcc -Wall -Iinclude/ -c src/main.c -o obj/main.o

codificacion.o: src/codificacion.c
	gcc -Wall -Iinclude/ -c src/codificacion.c -o obj/codificacion.o

libcifrado.so: src/cifrado.c
	gcc -Wall -Iinclude/ -shared -fPIC src/cifrado.c -o lib/libcifrado.so

clean:  rm -rf obj/*.o bin/* lib/*
