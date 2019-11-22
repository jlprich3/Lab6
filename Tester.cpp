#include "Tester.h"

void Tester::runTest()
{
    std::cout<<"\n\n\n";
    Queue testQ = Queue(); //makes the queue
    //Test 1: is the queue empty
    if(testQ.isEmpty())
    {
      std::cout<<"TEST 1: A new queue is created empty\n";
    }
    else
    {
      std::cout<<"TEST 1: A new queue is NOT created empty\n";
    }
    try
    {
      testQ.dequeue(); //Tests to make sure that dequeue throws an error if the queue is empty
      std::cout<<"TEST 2: The dequeue function does NOT throw an error if the queue is empty\n";
    }
    catch (...)
    {
      std::cout<<"TEST 2: The dequeue function correctly throws an error if the queue is empty\n";
    }
    try
    {
      testQ.peekFront(); //Tests to make sure that dequeue throws an error if the queue is empty
      std::cout<<"TEST 3: The peekFront function does NOT throw an error if the queue is empty\n";
    }
    catch (...)
    {
      std::cout<<"TEST 3: The peekFront function correctly throws an error if the queue is empty\n";
    }
    testQ.enqueue(377);
    testQ.enqueue(378);
    testQ.enqueue(389);
    testQ.enqueue(390);
    if(testQ.peekFront()==377)
    {
      std::cout<<"TEST 4: The peekFront function correctly reads out the first entry in the queue\n";
    }
    else
    {
      std::cout<<"TEST 4: The peekFront function does NOT correctly read out the first entry in the queue\n";
    }
    if(testQ.peekFront()==390)
    {
      std::cout<<"TEST 5: The peekFront function reads out the last entry in the queue instead of the front entry\n";
    }
    else
    {
      std::cout<<"TEST 5: The peekFront function does NOT read out the entry in the queue\n";
    }
    testQ.dequeue();
    testQ.dequeue();
    testQ.dequeue();
    testQ.dequeue();
    testQ.enqueue(1);
    testQ.enqueue(2);
    testQ.dequeue();
    if(testQ.peekFront()==1)
    {
      std::cout<<"TEST 6: The dequeue function removes last entry in the queue instead of the front\n";
    }
    else if(testQ.peekFront()==2)
    {
      std::cout<<"TEST 6: The dequeue function correctly removes front entry in the queue\n";
    }
    testQ.dequeue();
    if(testQ.isEmpty())
    {
      std::cout<<"TEST 7: If there is the same amoutnt of dequeues ane enqueues, the queue is empty\n";
    }
    else
    {
      std::cout<<"TEST 7: If there is the same amoutnt of dequeues ane enqueues, the queue is NOT empty\n";
    }
    std::cout<<"TEST  8: There are memory leaks, meaning that the destructor is broken\n";
    std::cout<<"\n\n\n";
}
