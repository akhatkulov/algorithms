def min_steps_to_center(grid):

    center_x, center_y = 3, 3

    for i in range(7):
        for j in range(7):
            if grid[i][j] == 1:
                robot_x, robot_y = i, j
                break

    min_steps = abs(robot_x - center_x) + abs(robot_y - center_y)
    return min_steps

grid = [list(map(int, input().split())) for _ in range(7)]


result = min_steps_to_center(grid)

print(result)
