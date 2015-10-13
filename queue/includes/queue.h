/*-------------------------------------------------------
	ICMC - University of Sao Paulo
	 __  __  ____    ____    
	/\ \/\ \/\  _`\ /\  _`\  
	\ \ \ \ \ \,\L\_\ \ \L\ \
	 \ \ \ \ \/_\__ \\ \ ,__/
	  \ \ \_\ \/\ \L\ \ \ \/ 
	   \ \_____\ `\____\ \_\ 
	    \/_____/\/_____/\/_/ 
	                         
			QUEUE
	(c) Felipe Scrochio Custódio
---------------------------------------------------------*/

#include <stdio.h>
#include <stdlib.h>

typedef struct item ITEM;
typedef struct queue QUEUE;

QUEUE *createQueue();
int empty(QUEUE *queue);
int insertItem(QUEUE *queue, ITEM new);
ITEM removeItem(QUEUE *queue);
int size(QUEUE *queue);
void printQueue(QUEUE *queue);
void destroyQueue(QUEUE *queue);