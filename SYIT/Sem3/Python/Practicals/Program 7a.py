class students:
    studentcount = 0
    def __init__(self, name,age):
        self.name = name
        self.age=age
        students.studentcount +=1
        
    def displayCount(self):
        print("Total Student%d"%student.studentcount)
            
    def displaystudents(self):
        print ("Name:- ",self.name, "Age:-", self.age)

               
stud1 = students("AMAAN",20)
stud2=students("Hymenshu",26)
stud1.displaystudents()
stud2.displaystudents()
print("Total Student %d"%students.studentcount)
