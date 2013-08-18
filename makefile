# Simple makefile for this project
# I have a tendency to use makefiles and make commands like scripts,
# and this repo is no exception
#
# @author Taylor McKinney, taylorsmck@gmail.com

Test: run.cpp test.cpp
	g++ -pedantic -Wall test.cpp -o Test -lgtest -lpthread -lgtest_main

test: Test
	./Test

clean:
	rm -f *.o
	rm -f *.zip
	rm -f Test
