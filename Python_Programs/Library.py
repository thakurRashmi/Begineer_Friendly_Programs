from datetime import datetime

class library:
    
    def __init__(self, name):
        self.name = name
    
    def person(self):
        return f"\nWHAT DO YOU WANT {self.name}?\n"
    
    def show():
        with open("library_show.txt") as f:
            for i in f:
                print(i)
                
    def add_book(self ,book_name):
        with open("library_show.txt" , "a") as f:
            f.write(f"{book_name}\n")
            
        with open("add_log.txt" , "a") as f:
            f.write(f"{datetime.now()} : {book_name} IS ADDED BY {self.name}\n")
    
    def lend_book(self ,book_name):
        with open("lend_log.txt" , "a") as f:
            f.write(f"{datetime.now()} : {book_name} IS BORROWED BY {self.name}\n")
            
    def return_book(self ,book_name):
        with open("return_log.txt" , "a") as f:
            f.write(f"{datetime.now()} : {book_name} IS RETURNED BY {self.name}\n")


print("WELCOME TO THE LIBRARY\n")
a=input("WHAT IS YOUR NAME?\n")

a=library(a)
print(a.person())
ls = ["DISPLAY BOOKS","LEND BOOK","ADD BOOK","RETURN BOOK"]
for i in range(len(ls)):
    print(i+1 ,ls[i])

b = int(input())

while True:
    
    if b ==1:
        library.show()
        break
    
    if b == 2:
        c = input("WHICH BOOK DO YOU WANT TO BORROW?\n")
        library.lend_book(a,c)
        z = input("DO YOU WANT TO BORROW MORE BOOKS?\ny/n\n")
        if z == "y":
            continue
        else:
            print("PROCESS IS TERMINATED.................................\n")
            break
        
    if b == 3:
        d = input("WHICH BOOK DO YOU WANT TO ADD?\n")
        library.add_book(a,d)
        z = input("DO YOU WANT TO ADD MORE BOOKS?\ny/n\n")
        if z == "y":
            continue
        else:
            print("PROCESS IS TERMINATED.................................\n")
            break
    
    if b == 4:
        d = input("WHICH BOOK DO YOU WANT TO RETURN?\n")
        library.return_book(a,d)
        z = input("DO YOU WANT TO RETURN MORE BOOKS?\ny/n\n")
        if z == "y":
            continue
        else:
            print("PROCESS IS TERMINATED.................................\n")
            break
    
    else:
        print("WRONG ACTION ..........................")
        break
