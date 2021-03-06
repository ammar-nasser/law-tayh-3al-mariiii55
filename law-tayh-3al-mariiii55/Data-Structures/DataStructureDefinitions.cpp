#include "MaxHeap.h"
#include "MaxHeap.cpp"
#include "doublyNode.cpp"
#include "DoublyLinkedList.h"
#include "DoublyLinkedList.cpp"
#include "Queue.h"
#include "Queue.cpp"
#include "Vector.h"
#include "Vector.cpp"
#include "Keyable.h"
#include "Mission.h"
#include "Rover.h"
#include "InExecution.h"
#include "Node.cpp"
#include "SortedLinkedList.h"
#include "SortedLinkedList.cpp"
#include "..\commands\Command.h"

int Rover::roverCounter = 0;
template class Vector<int>;
template class Vector<Keyable*>;
template class Vector<Command*>;
template class MaxHeap<Keyable*>;
template class MaxHeap<Rover*>;
template class MaxHeap<Mission*>;
template class MaxHeap<InExecution*>;
template class Queue<int>;
template class Queue<Mission*>;
template class Queue<Command*>;
template class Vector<int>;
template class Vector<Keyable*>;
template class doublyNode<Mission*>;
template class doublyLinkedList<Keyable*>;
template class doublyLinkedList<Mission*>;
template class SortedLinkedList<Mission*>;
