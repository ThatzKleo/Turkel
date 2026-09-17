main: src/Turkel_Hub.c
	gcc -o build/main src/Turkel_Hub.c -Iinclude -lraylib -lGL -lm -lpthread -ldl -lrt -lX11