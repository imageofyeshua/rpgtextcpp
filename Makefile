compile: build run

build:
	g++ \
	./src/*.cpp \
	-o play.out \

run:
	./play.out
