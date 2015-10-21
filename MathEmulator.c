// Evan Glazer
// multgame.c
// Object of this program is to emulate math problems

# include <stdio.h>
# include <math.h>
# include <time.h>

int main(void)
{

	// Variables.
	int problem, aVar, bVar, index, answers;

	// Prompt User for Input for number of candy to start game with and max.
	printf("How many problems do you want to solve?\n");
	scanf("%d", &problem);

	// START TIME REGION
	int start = time(0);
	
	/******************* Calculating the multiplication problems **********************/
    
    // Start our answer.
    int answer = 1;
    int incorrect = 0;
    
 	// For Loop to loop problems for user
    for (index = 0 ; index<problem; index++) {
    	// Random Function for A X B.
		aVar = 1+rand(problem)%12;
		bVar = 1+rand(problem)%12;

    	printf("Please answer question number %d!\n",index+1);
    	printf("Please solve %d times %d\n", aVar,bVar,answers);
    	scanf("%d", &answers);
        answer = aVar * bVar;
        
    	 if (answer == answers){
    	 
    		printf("You have got question %d correct, next question is...\n", index+1);
    	}
 		 else if (answer != answers){
 		 
    		printf("That is an incorrect answer, the time is running answer the rest quickly plus one more!\n");
    		problem++;
    		incorrect = incorrect + 1;
    	}
    		
    }
    int end= time(0);
    int timespent = end - start;
    // END TIME REGION
    
	// Print out the (Output).
    printf("You completed %d correct problems in %d seconds, with %d inccorrect!",problem,timespent,incorrect);
    
    
    return 0;
}


