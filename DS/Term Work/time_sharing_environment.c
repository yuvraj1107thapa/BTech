#include <stdio.h>
#include <stdlib.h>

struct Process {
  int id;         
  int burstTime;   
  int timeSlot;    
  struct Process *next; 
};

struct Process *createProcess(int id, int burstTime, int timeSlot, struct Process *head) {
  struct Process *newProcess = malloc(sizeof(struct Process));

  newProcess->id = id;
  newProcess->burstTime = burstTime;
  newProcess->timeSlot = timeSlot;

  newProcess->next = head;

  return newProcess;
}

void simulate(struct Process *head) {
  struct Process *currentProcess = head;

  while (currentProcess != NULL) {
    currentProcess->burstTime -= currentProcess->timeSlot;

    printf("Process %d has %d remaining\n", currentProcess->id, currentProcess->burstTime);

    if (currentProcess->burstTime <= 0) {
      printf("Process %d completed in %d\n", currentProcess->id, currentProcess->timeSlot);

      currentProcess = currentProcess->next;
    } else {
      currentProcess = currentProcess->next;
    }
  }
}

int main(void) {
  struct Process *head = createProcess(1, 100, 10, NULL);
  head = createProcess(2, 50, 10, head);
  head = createProcess(3, 75, 10, head);
  head = createProcess(4, 25, 10, head);
  struct Process *currentProcess = head;
  while (currentProcess->next != NULL) {
    currentProcess = currentProcess->next;
  }
  currentProcess->next = head;
  simulate(head);

  return 0;
}
