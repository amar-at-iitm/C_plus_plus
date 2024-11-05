compiler=g++ # if we wish to change the compiler

run_FOde:main_FOde.o ForwardEulerSolver.o AbstractOdesolver.o
	${compiler} $^ -o $@
run_rk:main_rk.o RK_4th_order.o AbstractOdesolver.o
	${compiler} $^ -o $@

main_FOde.o: main_FOde.cpp
	${compiler} -c main_FOde.cpp -o $@
main_rk.o: main_rk.cpp
	${compiler} -c main_rk.cpp -o $@

ForwardEulerSolver.o: ForwardEulerSolver.cpp
	${compiler} -c ForwardEulerSolver.cpp -o $@ 

AbstractOdesolver.o: AbstractOdesolver.cpp
	${compiler} -c AbstractOdesolver.cpp -o $@ 

R_K_4th_order.o: RK_4th_order.cpp
	${compiler} -c RK_4th_order.cpp -o $@ 

# Clean up
clean:
	rm -f *.o run_FOde run_rk
	rm rk_output1.csv rk_output2.csv FOde_output1.csv FOde_output2.csv