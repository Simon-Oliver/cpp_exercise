mainStuff: mainStuff.o utils.o
	clang++ mainStuff.cpp utils.cpp -std=c++17 -o mainStuff

mainStuff.o: mainStuff.cpp
	clang++ -c mainStuff.cpp -std=c++17

utils.o: utils.cpp
	clang++ -c utils.cpp -std=c++17

clean: 
	rm *.o