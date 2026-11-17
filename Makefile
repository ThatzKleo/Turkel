Flags := -I/home/thatzkleo/Dokumenty/libraries -lglfw3 -lGL -lX11 -lpthread -lXrandr -lXi -ldl

make:
	gcc src/Turkel.c -o build/main $(Flags)