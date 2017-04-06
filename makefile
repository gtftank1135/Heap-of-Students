CC=g++
CFLAGS= -g -Wall
heapofstudent:date.o adress.o student.o main.o 
	$(CC) $(CFLAGS) date.o adress.o student.o main.o -o heapofstudents
date.o: date.cpp date.h
	$(CC) $(CFLAGS) -c date.cpp
adress.o: adress.cpp adress.h
	$(CC) $(CFLAGS) -c adress.cpp
student.o: student.cpp student.h date.h adress.h
	$(CC) $(CFLAGS) -c student.cpp
main.o: main.cpp student.h adress.h date.h
	$(CC) $(CFLAGS) -c main.cpp
clean:
	rm *.o heapofstudents *.txt
run: heapofstudents
	 ./heapofstudents
memTest: heapofstudents
	valgrind --leak-check=full ./heapofstudents
