#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int count;
    int hours, minutes, seconds;

    // <debug> printf("This program was called with \"%s\".\n",argv[0]);
    if(argc > 1)
    {
        for (count = 1; count < argc; count++)
        {
            // <debug> printf("\nargv[%d] = %s\n", count, argv[count]);
            seconds = atoi(argv[count]);
            if (seconds <= 0) {
                printf("Invalid entry: %s\nPlease enter a positive number larger than 0\n", argv[count]);
            } else {
                printf("seconds = %d\n", seconds);
                hours = seconds / 3600;
                minutes = (seconds - hours * 3600)/60;
                seconds = seconds - (hours * 3600) - minutes*60;
                printf("%ds is %02d:%02d:%02d\n", atoi(argv[count]), hours, minutes, seconds);
            }
       }
    }
    else
    {
      printf("Usage: ./time seconds1 seconds2 seconds3 ... secondsN\n");
    }

    return 0;
}
