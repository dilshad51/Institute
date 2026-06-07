#include <stdio.h>

struct Process
{
    int pid;
    int burstTime;
    int waitingTime;
    int turnaroundTime;
};

int main()
{
    int i, n1, n2;

    // Queue 1 -> System Processes (Round Robin)
    // Queue 2 -> User Processes (FCFS)

    printf("Enter number of processes in Queue 1 (System Processes): ");
    scanf("%d", &n1);

    struct Process q1[n1];

    for (i = 0; i < n1; i++)
    {
        q1[i].pid = i + 1;

        printf("Enter Burst Time for Process P%d: ", q1[i].pid);
        scanf("%d", &q1[i].burstTime);
    }

    printf("\nEnter number of processes in Queue 2 (User Processes): ");
    scanf("%d", &n2);

    struct Process q2[n2];

    for (i = 0; i < n2; i++)
    {
        q2[i].pid = i + 1;

        printf("Enter Burst Time for Process P%d: ", q2[i].pid);
        scanf("%d", &q2[i].burstTime);
    }

    int timeQuantum;

    printf("\nEnter Time Quantum for Queue 1: ");
    scanf("%d", &timeQuantum);

    int time = 0;

    // ---------- Queue 1 : Round Robin ----------
    printf("\n--- Queue 1: Round Robin Scheduling ---\n");

    for (i = 0; i < n1; i++)
    {
        if (q1[i].burstTime <= timeQuantum)
        {
            time += q1[i].burstTime;

            q1[i].turnaroundTime = time;
            q1[i].waitingTime =
                q1[i].turnaroundTime - q1[i].burstTime;
        }
        else
        {
            time += timeQuantum;

            q1[i].burstTime -= timeQuantum;

            time += q1[i].burstTime;

            q1[i].turnaroundTime = time;

            q1[i].waitingTime =
                q1[i].turnaroundTime -
                (q1[i].burstTime + timeQuantum);
        }
    }

    printf("PID\tBT\tWT\tTAT\n");

    for (i = 0; i < n1; i++)
    {
        printf("P%d\t%d\t%d\t%d\n",
               q1[i].pid,
               q1[i].burstTime,
               q1[i].waitingTime,
               q1[i].turnaroundTime);
    }

    // ---------- Queue 2 : FCFS ----------
    printf("\n--- Queue 2: FCFS Scheduling ---\n");

    for (i = 0; i < n2; i++)
    {
        if (i == 0)
            q2[i].waitingTime = time;
        else
            q2[i].waitingTime = q2[i - 1].turnaroundTime;

        q2[i].turnaroundTime =
            q2[i].waitingTime + q2[i].burstTime;
    }

    printf("PID\tBT\tWT\tTAT\n");

    for (i = 0; i < n2; i++)
    {
        printf("P%d\t%d\t%d\t%d\n",
               q2[i].pid,
               q2[i].burstTime,
               q2[i].waitingTime,
               q2[i].turnaroundTime);
    }

    return 0;
}