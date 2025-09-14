#include <stdio.h>

struct Process {
    char name[3]; 
    int arrival_time; 
    int burst_time;
    int completion_time; 
    int turnaround_time;
    int waiting_time; 
};

void calculateTimes(struct Process processes[], int n) {
    int completed = 0, current_time = 0;
    int min_burst_time = 9999, shortest_index = -1;

    while (completed < n) {
       
        for (int i = 0; i < n; i++) {
            if (processes[i].arrival_time <= current_time && 
                processes[i].burst_time < min_burst_time && 
                processes[i].burst_time > 0) {
                min_burst_time = processes[i].burst_time;
                shortest_index = i;
            }
        }

        if (shortest_index != -1) {
          
            current_time += processes[shortest_index].burst_time;
            processes[shortest_index].completion_time = current_time;
            processes[shortest_index].turnaround_time = current_time - processes[shortest_index].arrival_time;
            processes[shortest_index].waiting_time = processes[shortest_index].turnaround_time - processes[shortest_index].burst_time;

            processes[shortest_index].burst_time = 0;
            completed++;
        } else {
           
            current_time++;
        }


        min_burst_time = 9999;
        shortest_index = -1;
    }
}

void printProcesses(struct Process processes[], int n) {
    printf("Process\tArrival Time\tBurst Time\tCompletion Time\tTurnaround Time\tWaiting Time\n");
    for (int i = 0; i < n; i++) {
        printf("%s\t%d\t\t%d\t\t%d\t\t%d\t\t%d\n", 
               processes[i].name, 
               processes[i].arrival_time, 
               processes[i].burst_time, 
               processes[i].completion_time, 
               processes[i].turnaround_time, 
               processes[i].waiting_time);
    }
}

int main() {
    struct Process processes[4] = {
        {"P1", 0, 8, 0, 0, 0},
        {"P2", 1, 4, 0, 0, 0},
        {"P3", 2, 9, 0, 0, 0},
        {"P4", 3, 5, 0, 0, 0}
    };

    int n = sizeof(processes) / sizeof(processes[0]);

    calculateTimes(processes, n);

   
    printProcesses(processes, n);

    return 0;
}