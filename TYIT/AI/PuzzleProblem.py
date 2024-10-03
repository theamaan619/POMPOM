import tkinter as tk
import random

class NumberPuzzle:
    def __init__(self, root):
        self.root = root
        self.root.title("Number Puzzle")  # Set the title of the window
        self.size = 3  # Define the size of the puzzle (3x3)
        
        # Create a list of tiles (1-8 and empty tile represented by 0)
        self.tiles = list(range(1, self.size * self.size)) + [0]
        
        # Shuffle the tiles to start with a random configuration
        random.shuffle(self.tiles)
        
        self.buttons = []  # List to hold button references
        self.create_buttons()  # Create buttons for each tile
        self.update_grid()  # Update the grid with the initial tile positions

    def create_buttons(self):
        # Create buttons for each tile and arrange them in a grid
        for i in range(self.size * self.size):
            # Create a button; if the tile is 0, display an empty string
            btn = tk.Button(self.root, 
                             text=str(self.tiles[i]) if self.tiles[i] != 0 else "", 
                             font=("Helvetica", 24), 
                             width=4, 
                             height=2, 
                             command=lambda i=i: self.move_tile(i))  # Pass the button index to the move_tile method
            
            # Place the button in the appropriate grid location
            btn.grid(row=i // self.size, column=i % self.size)
            self.buttons.append(btn)  # Add the button to the list

    def update_grid(self):
        # Update the display of the buttons based on the current tile configuration
        for i in range(self.size * self.size):
            if self.tiles[i] == 0:
                self.buttons[i].config(text="", bg="gray")  # Empty tile represented as a gray button
            else:
                self.buttons[i].config(text=str(self.tiles[i]), bg="lightblue")  # Non-empty tiles are light blue

    def move_tile(self, index):
        # Move the tile if it is adjacent to the empty space
        empty_index = self.tiles.index(0)  # Find the index of the empty tile
        if self.is_adjacent(index, empty_index):
            # Swap the tiles
            self.tiles[empty_index], self.tiles[index] = self.tiles[index], self.tiles[empty_index]
            self.update_grid()  # Update the button display after the move
            
            # Check if the puzzle is solved
            if self.is_solved():
                self.display_victory_message()  # Show victory message if solved

    def is_adjacent(self, index, empty_index):
        # Check if the clicked tile is adjacent to the empty tile
        row, col = divmod(index, self.size)  # Get the row and column of the clicked tile
        empty_row, empty_col = divmod(empty_index, self.size)  # Get the row and column of the empty tile
        return abs(row - empty_row) + abs(col - empty_col) == 1  # Return True if adjacent

    def is_solved(self):
        # Check if the tiles are in the correct order (1-8 followed by 0)
        return self.tiles == list(range(1, self.size * self.size)) + [0]

    def display_victory_message(self):
        # Display a message when the puzzle is solved
        victory_label = tk.Label(self.root, text="Puzzle Solved!", font=("Helvetica", 24), fg="green")
        victory_label.grid(row=self.size, columnspan=self.size)  # Span across the bottom of the grid

if __name__ == "__main__":
    root = tk.Tk()  # Create the main window
    puzzle = NumberPuzzle(root)  # Initialize the NumberPuzzle class
    root.mainloop()  # Start the Tkinter event loop
