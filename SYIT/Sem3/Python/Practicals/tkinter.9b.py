import tkinter as tk

root = tk.Tk()
root.title("Tkinter World")

label = tk.Label(root, text="Hello, Studytonight!")
label.pack()

entry = tk.Entry(root)
entry.pack()

button = tk.Button(root, text="Click Me!")
button.pack()

root.mainloop()
