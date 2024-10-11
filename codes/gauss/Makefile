gauss.o : gauss.cpp	gauss.hpp 
	g++ -c gauss.cpp 

main.o : main.cpp gauss.hpp 
	g++ -c main.cpp

integrate : gauss.o main.o
	g++ -o Gau gauss.o main.o
