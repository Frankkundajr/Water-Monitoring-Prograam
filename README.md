# Water-Monitoring-Prograam
embeded water monitoring prograam
# Water Monitoring System  

This is a simple **Embedded Water Monitoring Program** that simulates monitoring and managing the water level in a tank. It tracks the current water level, notifies the user of critical levels, and allows for simulation of water inflow and outflow.  

---

## Features  
1. **Water Level Monitoring**  
   - Displays the current water level and alerts based on thresholds:
     - **Critical Low**: Immediate action required.
     - **Low Level**: Warns that the water level is too low.  
     - **Stable**: Normal operating range.  
     - **High Level**: Warns of potential overflow.  

2. **Water Simulation**  
   - Adjust the water level by entering the amount of water flowing in and out.  
   - The program automatically prevents levels from exceeding the tank's capacity or going below zero.

3. **Interactive Control**  
   - The program runs in a loop and allows the user to continue or end the simulation at any point.

---

## How It Works  

1. **Defined Limits**  
   - `MAX_CAPACITY`: Maximum water level the tank can hold.  
   - `MIN_CAPACITY`: Minimum safe water level.  
   - `CRITICAL_LEVEL`: Dangerously low water level.  
   - `MAX_THRESHOLD`: Warning level before overflow.  

2. **Water Level Adjustments**  
   - Users input the amount of water entering and leaving the tank.  
   - Water level calculations are automatically adjusted within safe bounds.

3. **Alert System**  
   - Alerts are displayed if water levels are too low, too high, or critically low.

---

## How to Run  

1. Compile the program using a C compiler:
   ```bash
   gcc water_monitoring_system.c -o water_monitor
   ```  

2. Run the program:
   ```bash
   ./water_monitor
   ```

3. Follow the on-screen instructions:  
   - Enter water inflow and outflow values.  
   - Monitor water level updates and warnings.  
   - Decide whether to continue or stop the simulation.  

---

## Example Usage  

### Initial State  
- Starting water level: `50 units`.  

### Simulating Water Changes  
- Enter `20` for inflow and `10` for outflow.  
  - New water level: `60 units`.  
- If inflow causes water to exceed capacity, it is capped at `MAX_CAPACITY`.  
- If outflow causes water to drop below zero, it is set to `0`.  

---

## System Messages  

- **Critical Warning**:  
  ```  
  WARNING: Water level is critically low!! Shutdown operations. Current level: 0  
  ```  

- **Low Level Alert**:  
  ```  
  ALERT: Water level is too low! Current level: 8  
  ```  

- **High Level Warning**:  
  ```  
  WARNING: Water level is too high! Current level: 95  
  ```  

- **Stable Operation**:  
  ```  
  Water level is stable at 50  
  ```  

---

## Author  
This program demonstrates the basics of embedded water monitoring.
