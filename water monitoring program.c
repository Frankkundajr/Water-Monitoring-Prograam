#include <stdio.h>

// Define the limits for the water tank
#define MAX_CAPACITY 100  // The most water the tank can hold
#define MIN_CAPACITY 10   // The least water the tank can hold
#define CRITICAL_LEVEL 0  // The least amount of water before a low-water warning
#define MAX_THRESHOLD 90  // Water level where we warn about possible overflow

// Global variable for water level
int water_level = 50;  // Start with 50 units of water in the tank

// Function to check and display water level status
void check_water_level(int water_level) {
    if (water_level <= CRITICAL_LEVEL) {
        printf("WARNING: Water level is critically low!! Shutdown operations. Current level: %d\n", water_level);
    } else if (water_level <= MIN_CAPACITY) {
        printf("ALERT: Water level is too low! Current level: %d\n", water_level);
    } else if (water_level >= MAX_THRESHOLD) {
        printf("WARNING: Water level is too high! Current level: %d\n", water_level);
    } else {
        printf("Water level is stable at %d\n", water_level);
    }
}

// Function to simulate water coming in and water going out
void simulate_water_change() {
    int water_in, water_out;

    // Ask the user to enter how much water is coming in and going out
    printf("Enter the amount of water coming in: ");
    scanf("%d", &water_in);
    printf("Enter the amount of water going out: ");
    scanf("%d", &water_out);

    // Update the water level: add water coming in and subtract water going out
    water_level += water_in - water_out;

    // Make sure the water level stays between 0 and the tank's capacity
    if (water_level > MAX_CAPACITY) {
        water_level = MAX_CAPACITY;
    } else if (water_level < 0) {
        water_level = 0;
    }

    // Check and display the new water level
    check_water_level(water_level);
}

// Main function to run the simulation in a loop
int main() {
    int continue_simulation = 1;  // Control to stop/start simulation

    printf("Starting Water Level Monitoring System...\n");
    printf("Initial Water Level: %d\n", water_level);

    // Simulation loop that keeps running until the user stops
    while (continue_simulation) {
        simulate_water_change();  // Adjust water level based on water coming in/out

        // Ask the user if they want to continue
        printf("Continue simulation? (1 = yes, 0 = no): ");
        scanf("%d", &continue_simulation);
    }


    printf("Simulation ended.\n");
    return 0;
}
