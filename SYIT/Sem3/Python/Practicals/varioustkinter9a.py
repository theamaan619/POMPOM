import tkinter as tk
 
 
root = tk.Tk()
frame = tk.Frame(root)
 
def dosomething():
    mylabel.config(text = "Goodbye World")
 
 
mylabel = tk.Label(frame, text = "    ", bg = "red")
mylabel.pack()
 

 
 
frame.pack()
root.mainloop()
