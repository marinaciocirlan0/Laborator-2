CXX = g++
CXXFLAGS = -g -Wall
EXECUTABLE = tests
LIBRARY_CODE = lab2

build:
	$(CXX) $(CXXFLAGS) *.cpp  -l$(LIBRARY_CODE) -L. -o $(EXECUTABLE)

execute: build
	export LD_LIBRARY_PATH=$LD_LIBRARY_PATH:. &&\
	./$(EXECUTABLE)
