#include <stdio.h>

#define MAX_BUSES 10
#define MAX_SEATS 20

// Structure to represent a bus
typedef struct {
    int id;
    char route[50];
    int fare;
    int seats[MAX_SEATS];
} Bus;

// Function to display all the available buses for a given route
void displayBuses(Bus buses[], int count, char route[]) {
    int found = 0;
    int i;
    for(i = 0; i < count; i++) {
        if (strcmp(buses[i].route, route) == 0) {
            printf("Bus ID: %d, Fare: %d\n", buses[i].id, buses[i].fare);
            found = 1;
        }
    }
    if (!found) {
        printf("No buses available for route %s\n", route);
    }
}

// Function to add a new bus to the system
void addBus(Bus buses[], int *count) {
    if (*count == MAX_BUSES) {
        printf("Max buses limit reached\n");
        return;
    }
    Bus bus;
    printf("Enter the route: ");
    scanf("%s", bus.route);
    printf("Enter the fare: ");
    scanf("%d", &bus.fare);
    bus.id = (*count) + 1;
    int i;
    for(i = 0; i < MAX_SEATS; i++) {
        bus.seats[i] = 0;
    }
    buses[*count] = bus;
    (*count)++;
    printf("Bus added successfully with ID %d\n", bus.id);
}

// Function to book a seat on a given bus
void bookSeat(Bus *bus) {
    int seat;
    printf("Enter the seat number (1-20): ");
    scanf("%d", &seat);
    if (seat < 1 || seat > MAX_SEATS) {
        printf("Invalid seat number\n");
        return;
    }
    if (bus->seats[seat - 1]) {
        printf("Seat already booked\n");
    } else {
        bus->seats[seat - 1] = 1;
        printf("Seat booked successfully\n");
    }
}

// Function to cancel a seat on a given bus
void cancelSeat(Bus *bus) {
    int seat;
    printf("Enter the seat number (1-20): ");
    scanf("%d", &seat);
    if (seat < 1 || seat > MAX_SEATS) {
        printf("Invalid seat number\n");
        return;
    }
    if (bus->seats[seat - 1]) {
        bus->seats[seat - 1] = 0;
        printf("Seat cancelled successfully\n");
    } else {
        printf("Seat already unbooked\n");
    }
}

// Function to delete a particular bus
void deleteBus(Bus buses[], int *count, int id) {
    int index = -1;
    int i;
    for(i = 0; i < *count; i++) {
        if (buses[i].id == id) {
            index = i;
            break;
        }
    }
    if (index == -1) {
        printf("Bus not found\n");
    } else {
    	int i;
        for(i = index; i < (*count) - 1; i++) {
            buses[i] = buses[i + 1];
        }
        (*count)--;
        printf("Bus deleted successfully\n");
    }
}

// Function to update a particular bus
void updateBus(Bus buses[], int count, int id) {
    int index = -1;
    int i;
    for(i = 0; i < count; i++) {
        if (buses[i].id == id) {
            index = i;
            break;
        }
    }
    if (index == -1) {
        printf("Bus not found\n");
    }
    else {
        Bus bus = buses[index];
        printf("Enter the new route: ");
        scanf("%s", bus.route);
        printf("Enter the new fare: ");
        scanf("%d", &bus.fare);
        buses[index] = bus;
        printf("Bus details updated successfully\n");
    }
}

// Main function
int main() {
Bus buses[MAX_BUSES];
int count = 0;
int choice, id;
char route[50];
// Populate some initial data
Bus bus1 = {1, "Delhi-Ladhak", 500, {0}};
Bus bus2 = {2, "Amritsar-Chandigarh", 400, {0}};
Bus bus3 = {3, "Mumbai-Nashik", 300, {0}};
Bus bus4 = {4, "Banglore-Mysore", 455, {0}};
Bus bus5 = {5, "Mumbai-Jaipur", 600, {0}};
Bus bus6 = {6, "Kolhapur-Solapur", 1007, {0}};
buses[count++] = bus1;
buses[count++] = bus2;
buses[count++] = bus3;
buses[count++] = bus4;
buses[count++] = bus5;
buses[count++] = bus6;

// Menu-driven program loop
do {
	printf("\n");
	printf("\n||=====================================================||\n");
    printf("            Electronic Bus Ticket Generator\n");
    printf("||=====================================================||\n");
    printf("\n");
    printf("1. Display available bus routes\n");
    printf("2. Add new bus\n");
    printf("3. Book a seat\n");
    printf("4. Cancel a seat\n");
    printf("5. Delete a particular bus\n");
    printf("6. Update a particular bus details\n");
    printf("7. Exit\n");
    printf("\n");
    printf("||=====================================================||\n");
    printf("\n");
    printf("Enter your choice (1-7): ");
    scanf("%d", &choice);
    printf("\n");

	printf("\n");

    switch (choice) {
        case 1:
        	printf("Delhi-Ladhak, Amritsar-Chandigarh, Mumbai-Nashik, Banglore-Mysore, Mumbai-Jaipur, Kolhapur-Solapur\n");
            printf("Enter the route: ");
            scanf("%s", route);
            displayBuses(buses, count, route);
            break;
        case 2:
            addBus(buses, &count);
            break;
        case 3:
            printf("Enter the bus ID: ");
            scanf("%d", &id);
            int i;
            for(i = 0; i < count; i++) {
                if (buses[i].id == id) {
                    bookSeat(&buses[i]);
                    break;
                }
            }
            break;
        case 4:
            printf("Enter the bus ID: ");
            scanf("%d", &id);

            for(i = 0; i < count; i++) {
                if (buses[i].id == id) {
                    cancelSeat(&buses[i]);
                    break;
                }
            }
            break;
        case 5:
            printf("Enter the bus ID: ");
            scanf("%d", &id);
            deleteBus(buses, &count, id);
            break;
        case 6:
            printf("Enter the bus ID: ");
            scanf("%d", &id);
            updateBus(buses, count, id);
            break;
        case 7:
            printf("Exiting...\n");
            break;
        default:
            printf("Invalid choice\n");
            break;
    }
} while (choice != 7);

return 0;
}
