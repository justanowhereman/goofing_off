def Foxy(self):
    print("hehe")

def Catus(self):
    print("meow")
    
def Doggo(self):
    print("bark")

class Animal:
    pass # placeholder . allows empty blocks

print(vars(Animal))
# dynamic assigning or mokey patching 😂 

Animal.Foxy= Foxy
Animal.Catus= Catus
Animal.Doggo= Doggo

Say= Animal()

Say.Foxy()
Say.Doggo()
Say.Catus()

print(vars(Animal))

# ? vars method describes the structure of a class just like the DESCRIBE keyword does to a table