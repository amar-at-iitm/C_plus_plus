compiler=g++ # In case of changing compiler
run: main.o LinearSystem.o Matrix.o Vector.o
	${compiler} main.o LinearSystem.o Matrix.o Vector.o -o run
main.o: main.cpp 
	${compiler} -c main.cpp -o main.o 
LinearSystem.o: LinearSystem.cpp 
	${compiler} -c LinearSystem.cpp -o LinearSystem.o 
Matrix.o: Matrix.cpp 
	${compiler} -c Matrix.cpp -o Matrix.o 
Vector.o: Vector.cpp 
	${compiler} -c Vector.cpp -o Vector.o 