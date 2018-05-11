all: PriorityQueueDr BankSimulation

PriorityQueueDr: PriorityQueueDr.o
	g++ -o PriorityQueueDr PriorityQueueDr.o

PriorityQueueDr.o: PriorityQueue.cpp
	g++ -c -Wall -std=c++14 -g -O0 -pedantic-errors PriorityQueueDr.cpp

PriorityQueue.o: PriorityQueue.cpp
	g++ -c -Wall -std=c++14 -g -O0 -pedantic-errors PriorityQueue.cpp

BankSimulation: BankSimulation.o
	g++ -o BankSimulation BankSimulation.o

BankSimulation.o: BankSimulation.cpp
	g++ -c -Wall -std=c++14 -g -O0 -pedantic-errors BankSimulation.cpp

QueueType.o: QueueType.cpp
	g++ -c -Wall -std=c++14 -g -O0 -pedantic-errors QueueType.cpp

Customer.o: Customer.cpp
	g++ -c -Wall -std=c++14 -g -O0 -pedantic-errors Customer.cpp



clean:
	rm -f PriorityQueueDr
	rm -f PriorityQueueDr.o
	rm -f PriorityQueue.o
	rm -f BankSimulation
	rm -f BankSimulation.o
	rm -f QueueType.o
	rm -f Customer.o
