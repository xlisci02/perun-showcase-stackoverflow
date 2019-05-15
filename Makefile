all: main

main: main.cc 
	g++ -g --coverage main.cc -o regex	

clean:
	rm -rf regex *.gc*
