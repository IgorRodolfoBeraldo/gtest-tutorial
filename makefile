all:
	gcc -c ./*.cpp
	g++ ./person-test.cpp person.o /usr/local/lib/libgtest.a -o test.bin -O2 -lpthread -g -Wall
	

clean:
	rm *.o
	rm *.bin
 