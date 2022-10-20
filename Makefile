all: a.out

a.out:
	g++ -std=c++17 test.cpp LinkedList.hpp

test: a.out
	./a.out

clean:
	rm a.out

main:
	g++ -std=c++17 main.cpp
