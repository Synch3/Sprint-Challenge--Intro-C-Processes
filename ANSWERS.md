**1. List all of the main states a process may be in at any point in time on a standard Unix system. Briefly explain what each of these states means.**

Created - new or waiting to ready
Ready - loaded into main memory and waiting execution of CPU
Running - currently being executed by one of the CPU cores
Blocked - transitions into this state when it can not continue without an external change
Terminated - finished executing from the run state or is explicitly killed

**2. What is a zombie process?**

A zombie process is a process that has finished running and has moved into the terminated state, but still exists in the process table as a "zombie process." This is particularly important because unless the parent process calls the wait system call to read its exit status, it continues to consume the PID and causes a resource leak.


**3. How does a zombie process get created? How does one get destroyed?**

While all processes are zombie processes at some point in their cycle, the particular concern is a child whose parent does not call to read its exit status. You can kill the child process by killing the parent process.

**4. What are some of the benefits of working in a compiled language versus a non-compiled language? More specifically, what benefits are there to be had from taking the extra time to compile our code?**

 Compiled languages only have to compile, and then they can be executed, while interpreted languages have to be parsed interpreted, and executed each time they run. This greatly hurts efficiency in completing processes.
