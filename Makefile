clean:
	rm -r build

conditionalstatement:
	mkdir -p build
	g++ source/conditionalstatement.cpp -o build/conditionalstatement
	./build/conditionalstatement

forloop:
	mkdir -o build
	g++ source/forloop.cpp -o build/forloop
	./build/forloop

functions:
	mkdir -p build
	g++ source/functions.cpp -o build/functions
	./build/functions

array:
	mkdir -p build
	g++ source/array.cpp -o build/array
	./build/array

string:
	mkdir -p build
	g++ source/string.cpp -o build/string
	./build/string

pointer:
	mkdir -p build
	g++ source/pointer.cpp -o build/pointer
	./build/pointer

functions:
	mkdir -p build
	g++ source/functions.cpp -o build/functions
	./build/pointer

class:
	mkdir -p build
	g++ source/class.cpp -o build/class
	./build/class

classesandobjects:
	mkdir -p build
	g++ source/classesandobjects.cpp -o build/classesandobjects
	./build/classesandobjects

virtualfunctions:
	mkdir -p build
	g++ source/virtualfunctions.cpp -o build/virtualfunctions
	./build/virtualfunctions