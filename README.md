# Activity Hours Tracker

This program allows users to track the number of hours they spend on a specific activity over a number of weeks. They can then choose to see the total hours spent or the average hours per week!

## Getting Started

### Usage

1. Compile the program using a C compiler, for example:
   ```sh
   gcc -o activity_tracker activity_tracker.c -lcs50
   ```

2. Run the compiled program:
   ```sh
   ./activity_tracker
   ```

3. Follow the prompts:
   - Enter the name of the activity.
   - Enter the number of weeks you have been participating in the activity.
   - Enter the number of hours spent on the activity for each week.
   - Choose whether you want to see the total hours or the average hours per week.
   - There you go - Reflect!!! 

### Example

```
Activity: Running
Number of weeks participating in Running: 3
Week 0 Hours: 5
Week 1 Hours: 6
Week 2 Hours: 4
Enter T for total hours, A for average hours per week: T
15.0 hours
```

![image](https://github.com/user-attachments/assets/47de2cbb-06b8-42e4-b908-3dc86dd7f648)

## Function Details

### `calc_hours`

```c
float calc_hours(int hours[], int weeks, char output);
```

- **Parameters:**
  - `hours[]`: Array of integers representing the hours spent each week.
  - `weeks`: Integer representing the number of weeks.
  - `output`: Character indicating whether to return total hours ('T') or average hours per week ('A').

- **Returns:**
  - Total hours if `output` is 'T'.
  - Average hours per week if `output` is 'A'.

## License

This project is not currently licensed under anything. 
