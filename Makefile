bmi3: bmi1.o bmi2.o
	g++ -o bmi3 bmi1.o bmi2.o

bmi1.o: bmi1.cpp a.h
	g++ -c bmi1.cpp

bmi2.o: bmi2.cpp a.h
	g++ -c bmi2.cpp

clean:
	rm bmi2 *.o
