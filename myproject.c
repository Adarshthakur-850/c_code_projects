#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// function to generate random bus number
int generateBusNumber() {
    return (rand() % 100) + 1;
}

// function to generate random route
char* generateRoute() {
    char* routes[5] = {"A", "B", "C", "D", "E"};
    int index = rand() % 5;
    return routes[index];
}

// function to generate random fare
int generateFare() {
    return (rand() % 20) + 1;
}

int main() {
    time_t t;
    time(&t);

    struct tm * now = localtime(&t);
    char date[20], time[20];
    strftime(date, 20, "%Y-%m-%d", now);
    strftime(time, 20, "%H:%M:%S", now);

    int busNumber = generateBusNumber();
    char* route = generateRoute();
    int fare = generateFare();

    // generate ticket
    printf("Date: %s\n", date);
    printf("Time: %s\n", time);
    printf("Bus Number: %d\n", busNumber);
    printf("Route: %s\n", route);
    printf("Fare: $%d\n", fare);

    // save ticket to file
    FILE *fp;
    fp = fopen("ticket.txt", "w+");
    fprintf(fp, "Date: %s\n", date);
    fprintf(fp, "Time: %s\n", time);
    fprintf(fp, "Bus Number: %d\n", busNumber);
    fprintf(fp, "Route: %s\n", route);
    fprintf(fp, "Fare: $%d\n", fare);
    fclose(fp);

    return 0;
}
