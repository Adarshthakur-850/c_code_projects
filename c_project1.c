#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_BUSES 100
#define MAX_BUS_NAME 50
#define MAX_ROUTE_NAME 50
#define MAX_SEATS 50

typedef struct {
    char name[MAX_BUS_NAME];
    char route[MAX_ROUTE_NAME];
    int fare;
    int seats[MAX_SEATS];
    int num_seats;
} Bus;

void display_buses(Bus buses[], int num_buses) {
    printf("Available Buses:\n");
    for (int i = 0; i < num_buses; i++) {
        printf("%d. %s (%s) - Fare: %d\n", i + 1, buses[i].name, buses[i].route, buses[i].fare);
    }
}

void add_bus(Bus buses[], int *num_buses) {
    if (*num_buses == MAX_BUSES) {
        printf("Error: Maximum number of buses reached!\n");
        return;
    }

    Bus new_bus;
    printf("Enter bus name: ");
    scanf("%s", new_bus.name);
    printf("Enter route name: ");
    scanf("%s", new_bus.route);
    printf("Enter fare: ");
    scanf("%d", &new_bus.fare);

    for (int i = 0; i < MAX_SEATS; i++) {
        new_bus.seats[i] = 0;
    }
    new_bus.num_seats = 0;

    buses[*num_buses] = new_bus;
    (*num_buses)++;
    printf("Bus added successfully!\n");
}

void book_seat(Bus *bus) {
    if (bus->num_seats == MAX_SEATS) {
        printf("Error: Bus is full!\n");
        return;
    }

    int seat_number;
    printf("Enter seat number (1-%d): ", MAX_SEATS);
    scanf("%d", &seat_number);

    if (seat_number < 1 || seat_number > MAX_SEATS) {
        printf("Error: Invalid seat number!\n");
        return;
    }

    if (bus->seats[seat_number - 1] == 1) {
        printf("Error: Seat is already booked!\n");
        return;
    }

    bus->seats[seat_number - 1] = 1;
    bus->num_seats++;
    printf("Seat booked successfully!\n");
}

void cancel_seat(Bus *bus) {
    if (bus->num_seats == 0) {
        printf("Error: Bus is empty!\n");
        return;
    }

    int seat_number;
    printf("Enter seat number (1-%d): ", MAX_SEATS);
    scanf("%d", &seat_number);

    if (seat_number < 1 || seat_number > MAX_SEATS) {
        printf("Error: Invalid seat number!\n");
        return;
    }

    if (bus->seats[seat_number - 1] == 0) {
        printf("Error: Seat is already empty!\n");
        return;
    }

    bus->seats[seat_number - 1] = 0;
    bus->num_seats--;
    printf("Seat cancelled successfully!\n");
}

void delete_bus(Bus buses[], int *num_buses, int bus_index) {
    for (int i = bus_index; i < *num_buses - 1; i++) {
        buses[i] = buses[i + 1];
    }
    (*num_buses)--;
    printf("Bus deleted successfully!\n");
}


void update_bus(Bus buses[], int num_buses, int bus_index) {
    Bus *bus = &buses[bus_index];

    printf("1. Update bus name\n");
    printf("2. Update route name\n");
    printf("3. Update fare\n");
    printf("4. Cancel\n");
    printf("Enter your choice: ");

    int choice;
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Enter new bus name: ");
            scanf("%s", bus->name);
            printf("Bus name updated successfully!\n");
            break;
        case 2:
            printf("Enter new route name: ");
            scanf("%s", bus->route);
            printf("Route name updated successfully!\n");
            break;
        case 3:
            printf("Enter new fare: ");
            scanf("%d", &bus->fare);
            printf("Fare updated successfully!\n");
            break;
        case 4:
            printf("Update cancelled!\n");
            break;
        default:
            printf("Error: Invalid choice!\n");
    }
}

void save_data(Bus buses[], int num_buses) {
    FILE *fp;
    fp = fopen("buses.dat", "wb");

    if (fp == NULL) {
        printf("Error: Could not open file for writing!\n");
        return;
    }

    fwrite(&num_buses, sizeof(int), 1, fp);

    for (int i = 0; i < num_buses; i++) {
        fwrite(&buses[i], sizeof(Bus), 1, fp);
    }

    fclose(fp);
}

void load_data(Bus buses[], int *num_buses) {
    FILE *fp;
    fp = fopen("buses.dat", "rb");

    if (fp == NULL) {
        printf("Error: Could not open file for reading!\n");
        return;
    }

    fread(num_buses, sizeof(int), 1, fp);

    for (int i = 0; i < *num_buses; i++) {
        fread(&buses[i], sizeof(Bus), 1, fp);
    }

    fclose(fp);
}

int main() {
    Bus buses[MAX_BUSES];
    int num_buses = 0;

    load_data(buses, &num_buses);

    int choice;

    do {
        printf("\n");
        printf("1. Display available buses\n");
        printf("2. Add new bus\n");
        printf("3. Book seat\n");
        printf("4. Cancel seat\n");
        printf("5. Delete/Update a particular bus\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");

        scanf("%d", &choice);

        switch (choice) {
            case 1:
                display_buses(buses, num_buses);
                break;
            case 2:
                add_bus(buses, &num_buses);
                break;
            case 3:
                display_buses(buses, num_buses);
                printf("Enter bus number: ");
                int bus_number;
                scanf("%d", &bus_number);
                if (bus_number < 1 || bus_number > num_buses) {
                    printf("Error: Invalid bus number!\n");
                } else {
                    book_seat(&buses[bus_number - 1]);
                }
                break;
            case 4:
                display_buses(buses, num_buses);
                printf("Enter bus number: ");
                scanf("%d", &bus_number);
                if (bus_number < 1 || bus_number > num_buses){
                    printf("Error: Invalid bus number!\n");
                } else {
                    cancel_seat(&buses[bus_number - 1]);
                }
                break;
            case 5:
                display_buses(buses, num_buses);
                printf("Enter bus number: ");
                scanf("%d", &bus_number);
                if (bus_number < 1 || bus_number > num_buses) {
                    printf("Error: Invalid bus number!\n");
                } else {
                    printf("1. Update bus details\n");
                    printf("2. Delete bus\n");
                    printf("Enter your choice: ");

                    int sub_choice;
                    scanf("%d", &sub_choice);

                    switch (sub_choice) {
                        case 1:
                            update_bus(buses, num_buses, bus_number - 1);
                            break;
                        case 2:
                            delete_bus(buses, &num_buses, bus_number - 1);
                            break;
                        default:
                            printf("Error: Invalid choice!\n");
                    }
                }
                break;
            case 6:
                printf("Exiting...\n");
                break;
            default:
                printf("Error: Invalid choice!\n");
        }

        save_data(buses, num_buses);

    } while (choice != 6);

    return 0;
}

