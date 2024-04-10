#Normal
'''
import tkinter
m = tkinter.Tk()
m.mainloop()
'''
#Use Buttton
'''
import tkinter
m = tkinter.Tk()
def show():
    print('yo i mo')
bt = tkinter.Button(m,text='click' , fg='yellow' , bg='red' ,  command=show)
bt.pack()
m.mainloop()
'''
#Use Label
'''
import tkinter
m = tkinter.Tk()
l1 = tkinter.Label(m,text='hahah' , fg='yellow' , bg='red')
l1.pack()
m.mainloop()
'''
#Entry
'''
from tkinter import*
top=Tk()
L1=Label(top,text='user name')
L1.pack(side=LEFT)
E1=Entry(top,bd=10)
E1.pack(side=RIGHT)
top.mainloop()
'''
#Checkbutton
'''
from tkinter import *

root = Tk() 
root.geometry("300x200") 

w = Label(root, text ='GeeksForGeeks', font = "50") 
w.pack() 

Checkbutton1 = IntVar() 
Checkbutton2 = IntVar() 
Checkbutton3 = IntVar() 

Button1 = Checkbutton(root, text = "Tutorial", 
					variable = Checkbutton1, 
					onvalue = 1, 
					offvalue = 0, 
					height = 2, 
					width = 10) 

Button2 = Checkbutton(root, text = "Student", 
					variable = Checkbutton2, 
					onvalue = 1, 
					offvalue = 0, 
					height = 2, 
					width = 10) 

Button3 = Checkbutton(root, text = "Courses", 
					variable = Checkbutton3, 
					onvalue = 1, 
					offvalue = 0, 
					height = 2, 
					width = 10) 
	
Button1.pack() 
Button2.pack() 
Button3.pack() 

mainloop() 
'''
#Message box
'''
from tkinter import *
from tkinter import messagebox 

root = Tk() 
root.geometry("300x200") 

w = Label(root, text ='GeeksForGeeks', font = "50") 
w.pack() 

messagebox.showinfo("showinfo", "Information") 

messagebox.showwarning("showwarning", "Warning") 

messagebox.showerror("showerror", "Error") 

messagebox.askquestion("askquestion", "Are you sure?") 

messagebox.askokcancel("askokcancel", "Want to continue?") 

messagebox.askyesno("askyesno", "Find the value?") 


messagebox.askretrycancel("askretrycancel", "Try again?") 

root.mainloop() 
'''

#Layout Management
'''
from tkinter import*
root=Tk()
b=0
for r in range(4):
    for c in range(10):
        b=b+1
        Button(root,text=str(b),borderwidth=1).grid(row=r,column=c)
root.mainloop()
'''
#

from tkinter import*
top=Tk()
L1=Label(top,text='NUM1: ')
L1.place(x=10,y=10)
E1=Entry(top,bd=5)
E1.place(x=60,y=10)
L2=Label(top,text='NUM2: ')
L2.place(x=10,y=50)
E2=Entry(top,bd=5)
E2.place(x=60,y=50)
L3=Label(top,text='TOTAL= ')
L3.place(x=10,y=150)
E3=Entry(top,bd=5)
E3.place(x=60,y=150)
B=Button(top,text='Add')
B.place(x=100,y=100)
top.geometry()
top.mainloop()









