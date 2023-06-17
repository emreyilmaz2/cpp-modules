#include <signal.h>

static volatile int keepRunning = 1;

void intHandler(int dummy) {
    keepRunning = 1;
}

// ...

int main(void) {

   signal(SIGINT, intHandler);

   while (keepRunning) { 
      kill(0, SIGINT);
   }
}