#include "lib/x86.h"

#include "import.h"

/** TASK 1:
  * * Initialize all the thread queues with tqueue_init_at_id.
  *  Hint 1:
  *  - Remember that there are NUM_IDS + 1 queues. The first NUM_IDS queues are the sleep queues and 
  *    the last queue with id NUM_IDS is the ready queue.
  */
void tqueue_init(void)
{
  // TODO: define your local variables here.

	tcb_init();

  // TODO
}

/** TASK 2:
  * * Insert the TCB #pid into the TAIL of the thread queue #chid.
  * 
  *  Hint 1: 
  *  - Recall that the doubly linked list is index based.
  *    So you only need to insert the index.
  *  Hint 2: Get the tail of the thread queue using tqueue_get_tail.
  *  Hint 3: There are multiple cases in this function.
  *  - a) If the tail of the current queue is empty, 
  *       you have to set both the head and the tail of the queue. 
  *  - b) Else, you only have to set the tail of the queue.
  *  Hint 4: Remember how the structures TQueue and TCB are setup. 
  *  - TQueue only tracks the head and the tail of the queue. 
  *  - TCB is a doubly linked list.
  *  - So, when you insert #pid into the TAIL of the thread queue, you have to:
  *    1. update the next pointer in the old tail to point to #pid.
  *    2. then the prev pointer for #pid should point to the old tail.
  *    3. and the next pointer for #pid should point to NULL (i.e. NUM_IDS)
  */
void tqueue_enqueue(unsigned int chid, unsigned int pid)
{
  // TODO
}

/** TASK 3:
  * * Reverse action of tqueue_enqueue, i.e., pops a TCB from the head of specified queue.
  *   It returns the poped thread's id, or NUM_IDS if the queue is empty.
  *
  *  Hint 1: Get the head of the thread queue using tqueue_get_head
  *  Hint 2: You will have to set the new head of the queue to the next pointer of current head.
  *  As in TASK2, you will also have to update the prev and next pointers of the new head. 
  *  There are multiple cases:
  *  - a) If the queue is now empty (i.e. next pointer of current head is NUM_IDS),
  *       empty the queue (i.e. set both head and tail to NUM_IDS)
  *  - b) Else, set prev pointer of the new head to NUM_IDS.
  *  Hint 3: Detach the popped head from other threads.
  *  - Reset the poped head's prev and next pointers to NUM_IDS.
  */
unsigned int tqueue_dequeue(unsigned int chid)
{
  // TODO
  return 0;
}

/** TASK 4:
  * * Remove the TCB #pid from the queue #chid.
  *   You need to update the neighboring elements of #pid so that they reference each other (skip #pid). 
  *
  *  Hint: there are many cases in this function.
  *  - a) If #pid is the only thread in the queue, you will have to reset the queue as done in TASK 3.
  *  - b) If #pid is the head of the queue, set it's next thread as the head of the queue.
  *       Remember to update the new head's TCB pointers as in TASK 3.
  *  - c) If #pid is the tail of the queue, set it's prev thread as the tail of the queue.
  *       Remember to update the new tail's TCB pointers. (Where does the tail's next pointer point to?)
  *  Hint 2: Detach the removed #pid's TCB from other threads. (Same as TASK 3)
  */
void tqueue_remove(unsigned int chid, unsigned int pid)
{
  // TODO
}