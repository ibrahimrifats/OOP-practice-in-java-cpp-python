from Circle import Circle 

class Cylinder(Circle):
        
    def __init__(self, radius, color, heigth):
        super().__init__(radius, color)
        self.heigth = heigth
        
    def getArea(self):
        self.area = 2 * 3.1416 * self.radius * self.heigth + 2 * super().getArea()
        return self.area 
    
        
        
        
        