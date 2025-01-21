class Animal:
    def eat(self):
        print("eating...")
        
    def sleep(self):
        print("sleeping...")
        
        
class Cat(Animal):
    def meow(self):
        print("meowing...")
        
if __name__ == "__main__":
    mycat = Cat()
    
    mycat.meow()
    mycat.eat()
    mycat.sleep()
    
    