LIBS = -lX11 -lXxf86vm -ldl -pthread -lGL -lm -lGLEW -lglfw3
OBJECTS = drawing.o climatechange.o geometry.o shaders.o

all: $(OBJECTS)
	gcc $(OBJECTS) $(LIBS) -o bin/weenie_hut_junior

drawing.o: src/drawing.c
	gcc -c src/drawing.c

climatechange.o: src/climatechange.c
	gcc -c src/climatechange.c

shaders.o: src/shaders.c
	gcc -c src/shaders.c

geometry.o: src/geometry.c
	gcc -c src/geometry.c

run: all
	./bin/weenie_hut_junior
