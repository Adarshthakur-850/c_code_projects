#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_TICKETS 100

typedef struct {
    int ticket_number;
    char passenger_name[50];
    char departure_station[20];
    char arrival_station[20];
    int departure_time;
    int arrival_time;
    int seat_number;
} Ticket;

void generate_ticket(Ticket *ticket) {
    // Generate random ticket number
    ticket->ticket_number = rand() % 100000;

    // Generate random passenger name
    printf("Enter passenger name: ");
    scanf("%s", ticket->passenger_name);

    // Generate random departure and arrival stations
    printf("Enter departure station: ");
    scanf("%s", ticket->departure_station);

    printf("Enter arrival station: ");
    scanf("%s", ticket->arrival_station);

    // Generate random departure and arrival times
    ticket->departure_time = rand() % 24;
    ticket->arrival_time = (ticket->departure_time + (rand() % 12) + 1) % 24;

    // Generate random seat number
    ticket->seat_number = rand() % 50 + 1;
}

void print_ticket(Ticket ticket) {
    printf("Ticket number: %d\n", ticket.ticket_number);
    printf("Passenger name: %s\n", ticket.passenger_name);
    printf("Departure station: %s\n", ticket.departure_station);
    printf("Arrival station: %s\n", ticket.arrival_station);
    printf("Departure time: %d:00\n", ticket.departure_time);
    printf("Arrival time: %d:00\n", ticket.arrival_time);
    printf("Seat number: %d\n", ticket.seat_number);
    printf("\n");
}

void save_ticket(Ticket ticket, FILE *fp) {
    fprintf(fp, "%d,%s,%s,%s,%d,%d,%d\n",
            ticket.ticket_number,
            ticket.passenger_name,
            ticket.departure_station,
            ticket.arrival_station,
            ticket.departure_time,
            ticket.arrival_time,
            ticket.seat_number);
}

int main() {
    srand(time(NULL));

    Ticket tickets[MAX_TICKETS];
    int num_tickets;

    printf("Enter number of tickets to generate (up to %d): ", MAX_TICKETS);
    scanf("%d", &num_tickets);

    // Generate tickets and print/save them
    for (int i = 0; i < num_tickets; i++) {
        generate_ticket(&tickets[i]);
        print_ticket(tickets[i]);

        // Save ticket to file
        FILE *fp = fopen("tickets.txt", "a");
        if (fp == NULL) {
            printf("Error opening file\n");
            return 1;
        }
        save_ticket(tickets[i], fp);
        fclose(fp);
    }

    printf("Tickets saved to file.\n");

    return 0;
}
