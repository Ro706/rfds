#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
  int data;
  struct Node *next;
} Node;

typedef struct Queue {
  struct Node *front, *rear;
  int size;
} Queue;

void enqueue(Queue *queue, int data) {
  Node *newNode = (Node *) malloc(sizeof(Node));
  newNode->data = data;
  newNode->next = NULL;

  if (queue->rear == NULL) {
    queue->front = newNode;
    queue->rear = newNode;
  } else {
    queue->rear->next = newNode;
    queue->rear = newNode;
  }

  queue->size++;
}

int dequeue(Queue *queue) {
  if (queue->front == NULL) {
    return -1;
  }

  int data = queue->front->data;
  Node *temp = queue->front;
  queue->front = queue->front->next;

  if (queue->front == NULL) {
    queue->rear = NULL;
  }

  free(temp);
  queue->size--;

  return data;
}

int main() {
  Queue *queues[2]; // Create an array of two queues

  for (int i = 0; i < 2; i++) {
    queues[i] = (Queue *) malloc(sizeof(Queue));
    queues[i]->front = NULL;
    queues[i]->rear = NULL;
    queues[i]->size = 0;
  }

  // Enqueue elements to queue 0
  enqueue(queues[0], 10);
  enqueue(queues[0], 20);
  enqueue(queues[0], 30);

  // Enqueue elements to queue 1
  enqueue(queues[1], 40);
  enqueue(queues[1], 50);
  enqueue(queues[1], 60);

  // Dequeue elements from queue 0
  for (int i = 0; i < queues[0]->size; i++) {
    printf("Dequeued element from queue 0: %d\n", dequeue(queues[0]));
  }

  // Dequeue elements from queue 1
  for (int i = 0; i < queues[1]->size; i++) {
    printf("Dequeued element from queue 1: %d\n", dequeue(queues[1]));
  }

  return 0;
}

