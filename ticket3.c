#include <stdio.h>

struct TrainTicket {
    int ticketNumber;
    char passengerName[50];
    char departureStation[50];
    char arrivalStation[50];
    float ticketPrice;
};

int main() {
    struct TrainTicket ticket;
    FILE *fp;
    char filename[] = "train_tickets.txt";

    // Open the file for writing
    fp = fopen(filename, "w");
    if(fp == NULL) {
        printf("Error opening file for writing.");
        return 1;
    }

    // Prompt user to input ticket details
    printf("Enter ticket number: ");
    scanf("%d", &ticket.ticketNumber);
    printf("Enter passenger name: ");
    scanf("%s", ticket.passengerName);
    printf("Enter departure station: ");
    scanf("%s", ticket.departureStation);
    printf("Enter arrival station: ");
    scanf("%s", ticket.arrivalStation);
    printf("Enter ticket price: ");
    scanf("%f", &ticket.ticketPrice);

    // Write ticket information to file
    fprintf(fp, "%d %s %s %s %.2f\n", ticket.ticketNumber, ticket.passengerName,
        ticket.departureStation, ticket.arrivalStation, ticket.ticketPrice);

    // Close the file
    fclose(fp);

    // Open the file for reading
    fp = fopen(filename, "r");
    if(fp == NULL) {
        printf("Error opening file for reading.");
        return 1;
    }

    // Read and display ticket information from file
    printf("\nTicket information from file:\n");
    fscanf(fp, "%d %s %s %s %f", &ticket.ticketNumber, ticket.passengerName,
        ticket.departureStation, ticket.arrivalStation, &ticket.ticketPrice);
    printf("Ticket Number: %d\n", ticket.ticketNumber);
    printf("Passenger Name: %s\n", ticket.passengerName);
    printf("Departure Station: %s\n", ticket.departureStation);
    printf("Arrival Station: %s\n", ticket.arrivalStation);
    printf("Ticket Price: %.2f\n", ticket.ticketPrice);

    // Close the file
    fclose(fp);

    return 0;
}
