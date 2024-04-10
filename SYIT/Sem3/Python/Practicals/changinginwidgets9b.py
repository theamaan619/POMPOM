#button

from tkinter import *
 
root = Tk()                           
 
frame = Frame(root)                  
 
frame.pack()                          
 
button1 = Button(frame, text ='this is button')  
button1.pack()

button2 = Button(frame, text ='this willshow text')
button2.pack()
 
root.mainloop()
#button2
'''
from tkinter import*
root=Tk()
root.title('Button')
app=Frame(root)
app.grid()
button1=Button(app,text='This is button')
button1.grid()
button2=Button(app)
button2.grid()
button2.configure(text='This will show text')
button3=Button(app)
button3.grid()
button3=Button(text='This will shows up as well')
root.mainloop()
'''
