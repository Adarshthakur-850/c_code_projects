f#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Ticket {
    char from[20];
    char to[20];
    int distance;
    int fare;
};

void generate_ticket(struct Ticket* ticket) {
    printf("Enter source: ");
    scanf("%s", ticket->from);
    printf("Enter destination: ");
    scanf("%s", ticket->to);
    printf("Enter distance in km: ");
    scanf("%d", &ticket->distance);
    ticket->fare = ticket->distance * 10;
    printf("Ticket generated!\n");
}

void save_ticket(struct Ticket ticket) {
    FILE* file = fopen("tickets.txt", "a");
    fprintf(file, "%s,%s,%d,%d\n", ticket.from, ticket.to, ticket.distance, ticket.fare);
    fclose(file);
}

void display_tickets() {
    FILE* file = fopen("tickets.txt", "r");
    char line[100];
    printf("Tickets:\n");
    while (fgets(line, 100, file)) {
        char* from = strtok(line, ",");
        char* to = strtok(NULL, ",");
        char* distance_str = strtok(NULL, ",");
        char* fare_str = strtok(NULL, ",");
        int distance = atoi(distance_str);
        int fare = atoi(fare_str);
        printf("From: %s, To: %s, Distance: %d km, Fare: %d Rs.\n", from, to, distance, fare);
    }
    fclose(file);
}

int main() {
    int choice;
    struct Ticket ticket;

    do {
        printf("\n1. Generate Ticket\n");
        printf("2. Display Tickets\n");
        printf("3. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                generate_ticket(&ticket);
                save_ticket(ticket);
                break;
            case 2:
                display_tickets();
                break;
            case 3:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice!\n");
        }
    } while (choice != 3);

    return 0;
}
