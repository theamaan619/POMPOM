import random

# Objective function to maximize
def objective_function(x):
    return -(x - 3) ** 2 + 9

# Generate a random neighbor
def get_neighbor(x):
    return x + random.uniform(-0.5, 0.5)

# Hill climbing algorithm
def hill_climbing(initial_x, max_iterations):
    current_x = initial_x
    current_value = objective_function(current_x)

    for _ in range(max_iterations):
        neighbor = get_neighbor(current_x)
        neighbor_value = objective_function(neighbor)

        if neighbor_value > current_value:
            current_x = neighbor
            current_value = neighbor_value

    return current_x, current_value

# Example usage
initial_x = random.uniform(10, 10)
max_iterations = 100
best_x, best_value = hill_climbing(initial_x, max_iterations)
print(f"Best x: {best_x}, Best value: {best_value}")
