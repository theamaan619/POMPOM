import math

def gcd_extended(a, b):
    """Extended Euclidean Algorithm to find x, y such that ax + by = gcd(a, b)"""
    if a == 0:
        return b, 0, 1
    
    gcd, x1, y1 = gcd_extended(b % a, a)
    
    # Update x and y using results from recursive call
    x = y1 - (b // a) * x1
    y = x1
    
    return gcd, x, y

def can_measure(a, b, c):
    """Check if it's possible to measure exactly c liters using jugs of size a and b"""
    gcd, x, y = gcd_extended(a, b)
    
    # Check if the solution exists
    if c % gcd != 0:
        return False, 0, 0
    
    # Scale x and y to get the solution for c liters
    x = x * (c // gcd)
    y = y * (c // gcd)
    
    return True, x, y

# Example usage
jug1_capacity = 3
jug2_capacity = 5
target = 4

possible, x, y = can_measure(jug1_capacity, jug2_capacity, target)

if possible:
    print(f"It is possible to measure {target} liters using the jugs.")
    print(f"Solution: {jug1_capacity} * {x} + {jug2_capacity} * {y} = {target}")
else:
    print(f"It is not possible to measure {target} liters using the jugs.")
