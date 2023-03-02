
main: main.cpp
	g++ main.cpp lib.cpp -o library_program

clean:
	rm -rf library_program
