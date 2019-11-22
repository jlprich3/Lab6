QueueDemo: main.o Queue.o Tester.o
	g++ -g -Wall -std=c++11 main.o Queue.o Tester.o -o QueueDemo

main.o: main.cpp
	g++ -g -std=c++11 -c main.cpp

Tester.o: Tester.cpp
	g++ -g -std=c++11 -c Tester.cpp

clean:
	rm main.o Tester.o QueueDemo *~
