#include <stdio.h>
#define M 5

int queue[M]; 
int front = -1, rear = -1;

// Insert element at rear
void insert(int val) {
  if((rear + 1) % M == front) {
    printf("Queue is Full\n");
    return;
  }
  rear = (rear + 1) % M;
  queue[rear] = val;
  if (front == -1) 
    front = 0;
}

// Delete element from front
void delete() {
  if(front == -1) {
    printf("Queue is Empty\n");
    return;
  }
  if(front == rear) {
    front = rear = -1;
  } 
  else {
    front = (front + 1) % M;
  }
}

// Check if queue is empty
int isEmpty() {
  if(front == -1)
    return 1;
  return 0;
}

// Check if queue is full
int isFull() {
  if((rear + 1) % M == front)
    return 1;
  return 0;
}

// Get front element
int frontElement() {
  if(front == -1) {
    printf("Queue is Empty\n");
    return -1;
  }
  return queue[front];
}

// Get rear element 
int rearElement() {
  if(rear == -1) {
    printf("Queue is Empty\n");
    return -1;
  }
  return queue[rear];
}

// Traverse queue
void traversal() {
  if(front == -1) {
    printf("Queue is Empty\n"); 
    return;
  }
  printf("Queue: ");
  if(rear >= front) {
    for(int i = front; i <= rear; i++) {
      printf("%d ", queue[i]);
    }
  }
  else {
    for(int i = front; i < M; i++) {
      printf("%d ", queue[i]);
    }
    for(int i = 0; i <= rear; i++) {
      printf("%d ", queue[i]);
    }
  }
  printf("\n");
}

int main() {
  insert(1);
  insert(2);
  insert(3);  
  insert(4);
  
  delete();
  
  if(isEmpty()) {
    printf("Queue is Empty\n");
  }
  else {
    printf("Queue is not Empty\n");
  }
  
  traversal();
  
  return 0;
}

