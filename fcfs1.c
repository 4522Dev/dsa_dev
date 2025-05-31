#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
// #include <sys/ipc.h>
// #include <sys/msg.h>
 
// Structure to store process details
struct process {
   int pid;
   int bt;
   int wt;
   int tat;
};
 
// Structure for message queue
struct message {
   long msg_type;
   struct process proc;
};
 
int main() {
   // Process array
   struct process p[10];
 
   // Initialize process details
 for(int i=0;i<10;i++){
scanf(“%d\n”,&p[i].pid);
scanf(“%d\n”,&p[i].bt);
}
   // Add more process details if needed
 
   // Message queue variables
   key_t key;
   int msgid;
   struct message msg;
 
   // Create unique key
   key = ftok("progfile", 65);
 
   // Create message queue
   msgid = msgget(key, 0666 | IPC_CREAT);
 
   // Fork a child process
   pid_t child_pid = fork();
 
   if (child_pid == -1) {
       fprintf(stderr, "Failed to fork a child process.\n");
       return 1;
   } else if (child_pid == 0) {
       // Child process
 
       // Receive process objects from the parent through message passing
       msgrcv(msgid, &msg, sizeof(struct process), 1, 0);
 
       // Calculate waiting time and turnaround time
       int n = 10; // Number of processes
       int total_wt = 0, total_tat = 0;
       for (int i = 0; i < n; i++) {
           total_wt += p[i].wt = (i == 0 ? 0 : p[i - 1].bt + p[i - 1].wt);
           total_tat += p[i].tat = p[i].bt + p[i].wt;
       }
 
       // Calculate average waiting time and average turnaround time
       float avg_wt = (float) total_wt / n;
       float avg_tat = (float) total_tat / n;
 
       // Print results
       printf("Child Process:\n");
       printf("Average Waiting Time: %.2f\n", avg_wt);
       printf("Average Turnaround Time: %.2f\n", avg_tat);
   } else {
       // Parent process
 
       // Send process objects to the child through message passing
       msg.msg_type = 1;
       for (int i = 0; i < 10; i++) {
           msg.proc = p[i];
           msgsnd(msgid, &msg, sizeof(struct process), 0);
       }
   }
 
   // Remove the message queue
   msgctl(msgid, IPC_RMID, NULL);
   return 0;
}