CC=gcc
CXX=g++
CFLAGS=-IInclude

box: box.o main.o
	$(CXX) -o box box.o main.o